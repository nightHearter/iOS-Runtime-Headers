/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFeedParser : NSObject <NSCopying, NSXMLParserDelegate> {
    NSData * _data;
    <WBSFeedParserDelegate> * _delegate;
    NSMutableArray * _elementStack;
    NSObject<OS_dispatch_queue> * _parsingQueue;
    WBSFeedElement * _root;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSFeedParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginParsingData:(id)arg1;
- (void)_parseAsAtomFeed;
- (void)_parseAsRSSFeed;
- (void)_parsingFailedWithError:(id)arg1;
- (void)_parsingFinishedWithMetada:(id)arg1 entries:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)initWithData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startParsing;

@end
