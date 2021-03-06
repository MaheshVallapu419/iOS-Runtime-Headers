/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLImageDownsampling : NSObject {
}

+ (id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned int)arg2;
+ (id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned int)arg2;
+ (void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned int)arg2 resultsHandler:(id)arg3;
+ (void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned int)arg2 resultsHandler:(id)arg3;
+ (struct { int x1; int x2; })imageSizeWithData:(id)arg1;

@end
