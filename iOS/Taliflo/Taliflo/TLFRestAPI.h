//
//  TLFRestAPI.h
//  Taliflo
//
//  Created by NR-Mac on 1/14/2014.
//  Copyright (c) 2014 Taliflo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TLFRestAPI : NSObject

+ (NSURL *)queryAllUsers;
+ (NSURL *)queryAllBusinesses;
+ (NSURL *)queryAllCauses;

@end
