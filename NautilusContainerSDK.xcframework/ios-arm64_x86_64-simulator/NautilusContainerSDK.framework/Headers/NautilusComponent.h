//
//  NautilusComponent.h
//  NautilusContainer
//
//  Created by nhamada on 2021/01/04.
//  Copyright © 2021 LocationValue Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NautilusComponentDependency;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, NautilusComponentType) {
    /**
     * アプリの初期化に先立って、コンポーネントの初期化を実行する
     */
    NautilusComponentTypeEager,
    
    /**
     * アプリの初期化時にコンポーネントの初期化を実行する
     */
    NautilusComponentTypeEagerInApp,
    
    /**
     * コンポーネントが必要になったタイミングで、コンポーネントの初期化を実行する
     */
    NautilusComponentTypeLazy,
};

@protocol NautilusComponent

@property(class, nonatomic, readonly) NautilusComponentType componentType;

@property(class, nonatomic, readonly) NSArray<NautilusComponentDependency*>* dependencies;

@property(nullable, nonatomic, readonly) NSString* name;

@end

NS_ASSUME_NONNULL_END
