//
//  LFSVix.h
//  Utility
//
//  Lustre Filesystem For macOS
//  Copyright (C) 2016 Cider Apps, LLC.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
#import "vix.h"

@interface LFSVix : NSObject

- (BOOL)connect;
- (BOOL)open:(NSString *)vmxFile;
- (BOOL)revert:(NSString *)name;
- (void)close;
- (BOOL)login:(NSString *)username password:(NSString *)password;
- (BOOL)logout;
- (BOOL)copyFile:(NSString *)source destination:(NSString *)destination;
- (BOOL)deleteFile:(NSString *)file;
- (BOOL)runProgram:(NSString *)path arguments:(NSString *)arguments;
- (BOOL)runScript:(NSString *)path arguments:(NSString *)arguments;

@end
