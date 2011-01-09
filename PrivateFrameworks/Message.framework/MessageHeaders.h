/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;



@interface MessageHeaders : NSObject <NSCopying>
{
    NSData *_data;
    NSUInteger _preferredEncoding;
}

+ (id)basicHeaders;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)arg1;
+ (id)englishHeadersFromLocalizedHeaders:(id)arg1;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;

- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)mutableCopy;
- (id)headerData;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (id)markupStringShowingHeaderDetailLevel:(NSInteger)arg1;
- (id)allHeaderKeys;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)_capitalizedKeyForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(NSUInteger*)arg2;
- (id)_headerValueForKey:(id)arg1 offset:(NSUInteger*)arg2;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)isoLatin1CharsetHint;
- (BOOL)messageIsFromEntourage;
- (void)_appendAddressList:(id)arg1 toData:(id)arg2;
- (id)encodedHeaders;
- (void)_appendHeaderData:(id)arg1 andRecipients:(id)arg2 expandPrivate:(BOOL)arg3 includeComment:(BOOL)arg4;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;

@end