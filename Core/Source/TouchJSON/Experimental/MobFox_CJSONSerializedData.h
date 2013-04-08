//
//  CJSONSerializedData.h
//  TouchJSON
//
//  Created by Jonathan Wight on 10/31/10.
//  Copyright 2010 toxicsoftware.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MobFox_CJSONSerializable <NSObject>
@property (readonly, nonatomic, retain) NSData *serializedJSONData;
@end

#pragma mark -

@interface MobFox_CJSONSerializedData : NSObject <MobFox_CJSONSerializable> {
    NSData *data;
}

@property (readonly, nonatomic, retain) NSData *data;

- (id)initWithData:(NSData *)inData;

@end
