//
//  CloudEftposSDK-private.h
//  CloudEftposSDK
//
//  Created by Tom Graham on 4/08/2015.
//  Copyright (c) 2015 Quest Payment Systems. All rights reserved.
//

#ifndef CloudEftposSDK_CloudEftposSDK_private_h
#define CloudEftposSDK_CloudEftposSDK_private_h

@interface CloudEftposBluetooth(Private)

-(void) startRecurring:(int)amount
               options:(nullable NSDictionary *)options
             onDisplay:(nullable void (^)(NSString * _Nullable msg))onDisplay
               onPrint:(nullable void (^)(NSString * _Nullable type, NSNumber *_Nullable print, NSString *_Nullable text))onPrint
onTransactionCompleted:(nonnull void (^)(NSDictionary * _Nullable result, NSError *_Nullable error))onTransactionCompleted
             onStopped:(nonnull void (^)(bool success, NSString * _Nullable message))onStopped;
                        
-(void) stopRecurring;

/*!
 *  @method registerTransactionCallbacks:
 *
 *  @param displayBlock The customDisplayBlock to use for display messages.
 *  @param onPrint A block to call when unsolicited prints arrive.
 *  @param onCompletion A block to call on completion of the transaction.
 *
 *  @discussion The custom start transaction can be used if you require
 *  customisation of the prompt and signature callbacks.
 */
-(void) registerTransactionCallbacks:(nullable customDisplayBlock)displayBlock
                             printBlock:(nullable void (^)(NSString * _Nullable type, NSNumber * _Nullable print, NSString * _Nullable text))printBlock
                        onCompletion:(nullable void (^)(NSDictionary * _Nullable result, NSError * _Nullable error))onCompletion;


/*!
 * @method destroy
 * 
 * @discussion destroys a CloudEftposBluetoothinstance by removing all traces of it from persistant storage
 * the CloudEftposBluetoothinstance should be nilled directly after this method is executed.
 */
-(void) destroy;

-(void) forceProductionMode;

-(void) forceDeveloperMode;

@end

#endif
