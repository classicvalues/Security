// This file was automatically generated by protocompiler
// DO NOT EDIT!
// Compiled from OTAccountMetadataClassC.proto

#import "OTAccountMetadataClassCAccountSettings.h"
#import <ProtocolBuffer/PBConstants.h>
#import <ProtocolBuffer/PBHashUtil.h>
#import <ProtocolBuffer/PBDataReader.h>

#if !__has_feature(objc_arc)
# error This generated file depends on ARC but it is not enabled; turn on ARC, or use 'objc_use_arc' option to generate non-ARC code.
#endif

@implementation OTAccountMetadataClassCAccountSettings

@synthesize w = _w;
- (void)setW:(BOOL)v
{
    _has.w = YES;
    _w = v;
}
- (void)setHasW:(BOOL)f
{
    _has.w = f;
}
- (BOOL)hasW
{
    return _has.w != 0;
}
@synthesize webAccess = _webAccess;
- (void)setWebAccess:(BOOL)v
{
    _has.webAccess = YES;
    _webAccess = v;
}
- (void)setHasWebAccess:(BOOL)f
{
    _has.webAccess = f;
}
- (BOOL)hasWebAccess
{
    return _has.webAccess != 0;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@ %@", [super description], [self dictionaryRepresentation]];
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    if (self->_has.w)
    {
        [dict setObject:[NSNumber numberWithBool:self->_w] forKey:@"w"];
    }
    if (self->_has.webAccess)
    {
        [dict setObject:[NSNumber numberWithBool:self->_webAccess] forKey:@"webAccess"];
    }
    return dict;
}

BOOL OTAccountMetadataClassCAccountSettingsReadFrom(__unsafe_unretained OTAccountMetadataClassCAccountSettings *self, __unsafe_unretained PBDataReader *reader) {
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

            case 1 /* w */:
            {
                self->_has.w = YES;
                self->_w = PBReaderReadBOOL(reader);
            }
            break;
            case 2 /* webAccess */:
            {
                self->_has.webAccess = YES;
                self->_webAccess = PBReaderReadBOOL(reader);
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
    return OTAccountMetadataClassCAccountSettingsReadFrom(self, reader);
}
- (void)writeTo:(PBDataWriter *)writer
{
    /* w */
    {
        if (self->_has.w)
        {
            PBDataWriterWriteBOOLField(writer, self->_w, 1);
        }
    }
    /* webAccess */
    {
        if (self->_has.webAccess)
        {
            PBDataWriterWriteBOOLField(writer, self->_webAccess, 2);
        }
    }
}

- (void)copyTo:(OTAccountMetadataClassCAccountSettings *)other
{
    if (self->_has.w)
    {
        other->_w = _w;
        other->_has.w = YES;
    }
    if (self->_has.webAccess)
    {
        other->_webAccess = _webAccess;
        other->_has.webAccess = YES;
    }
}

- (id)copyWithZone:(NSZone *)zone
{
    OTAccountMetadataClassCAccountSettings *copy = [[[self class] allocWithZone:zone] init];
    if (self->_has.w)
    {
        copy->_w = _w;
        copy->_has.w = YES;
    }
    if (self->_has.webAccess)
    {
        copy->_webAccess = _webAccess;
        copy->_has.webAccess = YES;
    }
    return copy;
}

- (BOOL)isEqual:(id)object
{
    OTAccountMetadataClassCAccountSettings *other = (OTAccountMetadataClassCAccountSettings *)object;
    return [other isMemberOfClass:[self class]]
    &&
    ((self->_has.w && other->_has.w && ((self->_w && other->_w) || (!self->_w && !other->_w))) || (!self->_has.w && !other->_has.w))
    &&
    ((self->_has.webAccess && other->_has.webAccess && ((self->_webAccess && other->_webAccess) || (!self->_webAccess && !other->_webAccess))) || (!self->_has.webAccess && !other->_has.webAccess))
    ;
}

- (NSUInteger)hash
{
    return 0
    ^
    (self->_has.w ? PBHashInt((NSUInteger)self->_w) : 0)
    ^
    (self->_has.webAccess ? PBHashInt((NSUInteger)self->_webAccess) : 0)
    ;
}

- (void)mergeFrom:(OTAccountMetadataClassCAccountSettings *)other
{
    if (other->_has.w)
    {
        self->_w = other->_w;
        self->_has.w = YES;
    }
    if (other->_has.webAccess)
    {
        self->_webAccess = other->_webAccess;
        self->_has.webAccess = YES;
    }
}

@end
