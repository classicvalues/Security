// This file was automatically generated by protocompiler
// DO NOT EDIT!
// Compiled from OTPairingMessage.proto

#import "OTSponsorToApplicantRound2M2.h"
#import <ProtocolBuffer/PBConstants.h>
#import <ProtocolBuffer/PBHashUtil.h>
#import <ProtocolBuffer/PBDataReader.h>

#if !__has_feature(objc_arc)
# error This generated file depends on ARC but it is not enabled; turn on ARC, or use 'objc_use_arc' option to generate non-ARC code.
#endif

@implementation OTSponsorToApplicantRound2M2

- (BOOL)hasVoucher
{
    return _voucher != nil;
}
@synthesize voucher = _voucher;
- (BOOL)hasVoucherSignature
{
    return _voucherSignature != nil;
}
@synthesize voucherSignature = _voucherSignature;

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@ %@", [super description], [self dictionaryRepresentation]];
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    if (self->_voucher)
    {
        [dict setObject:self->_voucher forKey:@"voucher"];
    }
    if (self->_voucherSignature)
    {
        [dict setObject:self->_voucherSignature forKey:@"voucherSignature"];
    }
    return dict;
}

BOOL OTSponsorToApplicantRound2M2ReadFrom(__unsafe_unretained OTSponsorToApplicantRound2M2 *self, __unsafe_unretained PBDataReader *reader) {
    while (PBReaderHasMoreData(reader)) {
        uint32_t tag = 0;
        uint8_t aType = 0;

        PBReaderReadTag32AndType(reader, &tag, &aType);

        if (PBReaderHasError(reader))
            break;

        if (aType == TYPE_END_GROUP) {
            break;
        }

        switch (tag) {

            case 1 /* voucher */:
            {
                NSData *new_voucher = PBReaderReadData(reader);
                self->_voucher = new_voucher;
            }
            break;
            case 2 /* voucherSignature */:
            {
                NSData *new_voucherSignature = PBReaderReadData(reader);
                self->_voucherSignature = new_voucherSignature;
            }
            break;
            default:
                if (!PBReaderSkipValueWithTag(reader, tag, aType))
                    return NO;
                break;
        }
    }
    return !PBReaderHasError(reader);
}

- (BOOL)readFrom:(PBDataReader *)reader
{
    return OTSponsorToApplicantRound2M2ReadFrom(self, reader);
}
- (void)writeTo:(PBDataWriter *)writer
{
    /* voucher */
    {
        if (self->_voucher)
        {
            PBDataWriterWriteDataField(writer, self->_voucher, 1);
        }
    }
    /* voucherSignature */
    {
        if (self->_voucherSignature)
        {
            PBDataWriterWriteDataField(writer, self->_voucherSignature, 2);
        }
    }
}

- (void)copyTo:(OTSponsorToApplicantRound2M2 *)other
{
    if (_voucher)
    {
        other.voucher = _voucher;
    }
    if (_voucherSignature)
    {
        other.voucherSignature = _voucherSignature;
    }
}

- (id)copyWithZone:(NSZone *)zone
{
    OTSponsorToApplicantRound2M2 *copy = [[[self class] allocWithZone:zone] init];
    copy->_voucher = [_voucher copyWithZone:zone];
    copy->_voucherSignature = [_voucherSignature copyWithZone:zone];
    return copy;
}

- (BOOL)isEqual:(id)object
{
    OTSponsorToApplicantRound2M2 *other = (OTSponsorToApplicantRound2M2 *)object;
    return [other isMemberOfClass:[self class]]
    &&
    ((!self->_voucher && !other->_voucher) || [self->_voucher isEqual:other->_voucher])
    &&
    ((!self->_voucherSignature && !other->_voucherSignature) || [self->_voucherSignature isEqual:other->_voucherSignature])
    ;
}

- (NSUInteger)hash
{
    return 0
    ^
    [self->_voucher hash]
    ^
    [self->_voucherSignature hash]
    ;
}

- (void)mergeFrom:(OTSponsorToApplicantRound2M2 *)other
{
    if (other->_voucher)
    {
        [self setVoucher:other->_voucher];
    }
    if (other->_voucherSignature)
    {
        [self setVoucherSignature:other->_voucherSignature];
    }
}

@end
