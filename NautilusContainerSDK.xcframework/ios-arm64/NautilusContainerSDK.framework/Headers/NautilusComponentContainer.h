//
//  NautilusComponentContainer.h
//  NautilusContainer
//
//  Created by nhamada on 2021/01/04.
//  Copyright © 2021 LocationValue Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NautilusComponent;

NS_ASSUME_NONNULL_BEGIN

@interface NautilusComponentContainer : NSObject

+ (void)registerComponent:(Class<NautilusComponent>)component name:(nonnull NSString*)name;
+ (void)unregisterComponentName:(nonnull NSString*)name;

+ (nonnull NSArray<Class<NautilusComponent>>*)allComponents;
+ (nonnull NSArray<Class<NautilusComponent>>*)eagerComponents;
+ (nonnull NSArray<Class<NautilusComponent>>*)eagerInAppComponents;
+ (nonnull NSArray<Class<NautilusComponent>>*)lazyComponents;

+ (nullable Class<NautilusComponent>)componentWithName:(nonnull NSString*)name;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
