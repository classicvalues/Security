// This file was automatically generated by protocompiler
// DO NOT EDIT!
// Compiled from OTSecureElementPeerIdentity.proto

#import <Foundation/Foundation.h>
#import <ProtocolBuffer/PBCodable.h>

@class OTSecureElementPeerIdentity;

#ifdef __cplusplus
#define OTCURRENTSECUREELEMENTIDENTITIES_FUNCTION extern "C"
#else
#define OTCURRENTSECUREELEMENTIDENTITIES_FUNCTION extern
#endif

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>
{
    OTSecureElementPeerIdentity *_localPeerIdentity;
    OTSecureElementPeerIdentity *_pendingLocalPeerIdentity;
    NSMutableArray<OTSecureElementPeerIdentity *> *_trustedPeerSecureElementIdentities;
}


@property (nonatomic, readonly) BOOL hasLocalPeerIdentity;
@property (nonatomic, retain) OTSecureElementPeerIdentity *localPeerIdentity;

@property (nonatomic, retain) NSMutableArray<OTSecureElementPeerIdentity *> *trustedPeerSecureElementIdentities;
- (void)clearTrustedPeerSecureElementIdentities;
- (void)addTrustedPeerSecureElementIdentities:(OTSecureElementPeerIdentity *)i;
- (NSUInteger)trustedPeerSecureElementIdentitiesCount;
- (OTSecureElementPeerIdentity *)trustedPeerSecureElementIdentitiesAtIndex:(NSUInteger)idx;
+ (Class)trustedPeerSecureElementIdentitiesType;

@property (nonatomic, readonly) BOOL hasPendingLocalPeerIdentity;
@property (nonatomic, retain) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;

// Performs a shallow copy into other
- (void)copyTo:(OTCurrentSecureElementIdentities *)other;

// Performs a deep merge from other into self
// If set in other, singular values in self are replaced in self
// Singular composite values are recursively merged
// Repeated values from other are appended to repeated values in self
- (void)mergeFrom:(OTCurrentSecureElementIdentities *)other;

OTCURRENTSECUREELEMENTIDENTITIES_FUNCTION BOOL OTCurrentSecureElementIdentitiesReadFrom(__unsafe_unretained OTCurrentSecureElementIdentities *self, __unsafe_unretained PBDataReader *reader);

@end

