/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable> {
}

@property(copy) NSDate * date;
@property(copy) NSString * timeZoneId;

+ (id)calendarWithDictionary:(id)arg1 context:(id)arg2;
+ (id)calendar;

- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (id)encodedClassName;
- (void)setDate:(id)arg1;
- (id)date;
- (id)groupIdentifier;
- (id)afui_timeZone;

@end