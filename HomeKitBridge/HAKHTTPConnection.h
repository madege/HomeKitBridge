//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HAKPairVerifySessionDelegate.h"
#import "NSStreamDelegate.h"

@class HAKPairingSession, HAKSecuritySession, NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream;

@interface HAKHTTPConnection : NSObject <NSStreamDelegate, HAKPairVerifySessionDelegate>
{
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    HAKPairingSession *_pairingSession;
    HAKSecuritySession *_securitySession;
    id <HAKHTTPConnectionDelegate> _delegate;
    id <HAKPairingSessionDelegate> _pairingDelegate;
}

@property(readonly, nonatomic) HAKSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property(nonatomic) __weak id <HAKPairingSessionDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property __weak id <HAKHTTPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)handleHTTPRequestWithRequestData:(id)arg1;
- (void)sendResponseMessage:(id)arg1;
- (void)sendResponseData:(id)arg1;
- (void)performConnectionWillClose;
- (BOOL)close;
- (BOOL)open;
@property(readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
- (void)pairingVerified:(id)arg1;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

@end
