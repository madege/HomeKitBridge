//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKValueConstraints.h"

@class NSDictionary;

@interface HAKEnumerationConstraints : HAKValueConstraints
{
    NSDictionary *_validValues;
}

@property(readonly, copy, nonatomic) NSDictionary *validValues; // @synthesize validValues=_validValues;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)validateValue:(id)arg1;
- (id)description;
- (id)initWithValidValues:(id)arg1;
- (id)init;

@end

