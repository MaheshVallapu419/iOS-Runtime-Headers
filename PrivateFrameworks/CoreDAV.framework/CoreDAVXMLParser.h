/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
    NSURL *_baseURL;
    NSSet *_parseHints;
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
}

@property(retain) NSURL * baseURL;
@property(retain) NSSet * parseHints;
@property(readonly) NSError * parserError;
@property(readonly) CoreDAVItem * rootElement;
@property(retain) CoreDAVXMLElementGenerator * rootElementGenerator;
@property(readonly) CoreDAVErrorItem * rootError;
@property(retain) CoreDAVXMLElementGenerator * rootErrorGenerator;

+ (BOOL)canHandleContentType:(id)arg1;

- (id)baseURL;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)parseHints;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
- (id)rootElement;
- (id)rootElementGenerator;
- (id)rootError;
- (id)rootErrorGenerator;
- (void)setBaseURL:(id)arg1;
- (void)setParseHints:(id)arg1;
- (void)setRootElementGenerator:(id)arg1;
- (void)setRootErrorGenerator:(id)arg1;

@end