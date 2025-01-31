//
//  license-manager.h
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE 
//

#ifndef LICENSE_MANAGER_H
#define LICENSE_MANAGER_H

#include <license++/base-license-manager.h>
#include <license++/issuing-authority.h>

using namespace licensepp;

class LicenseKeysRegister
{
public:
    static const std::array<unsigned char, 16> LICENSE_MANAGER_SIGNATURE_KEY;

    static const std::vector<IssuingAuthority> LICENSE_ISSUING_AUTHORITIES;
};

const std::array<unsigned char, 16> LicenseKeysRegister::LICENSE_MANAGER_SIGNATURE_KEY =
{
    0x5B, 0x6A, 0xF5, 0x93, 0xED, 0xAB, 0xB3, 0x10, 0xF5, 0xBE, 0x00, 0xE6, 0x4F, 0x1B, 0x70, 0xC8
};

const std::vector<IssuingAuthority> LicenseKeysRegister::LICENSE_ISSUING_AUTHORITIES = {
    IssuingAuthority("sample-license-authority", "Sample License Authority", "LS0tLS1CRUdJTiBSU0EgUFJJVkFURSBLRVktLS0tLQpNSUlFb1FJQkFBS0NBUUVBdHhnSlBDVklIUGp4VmpnMDVlMnVaNURqNDNIdDF0WFlUK3VkVVRTL3RrSlgyQzltCnFoOGpLUHVPZkF1enFiUCtlenJBdENIQ3ptRE5sZkUwamVOU1VUZlFWbFhxNzd3UGh6ajZWNm1lWTNlcmYxK0oKVGNHUTk1Q0U3QWxRZmlvTm1aMU1OOTBSOXo2QllJMFJpVHh1QVFXckZqdm1rMUsrZ1RRN2dPbVV1WEx1MzJ2RwppNVE0cElKVHBJMExYQkp5QnJVNEs1ZTdWTVhaMHQrb1dRc3djcm05bkJYWVpleVRJcUZ2VmVkbEpxZTArTm9GCk8zeE91VHYxSiticWtWeFFuQlczQ2dyR2tjT0ZWRWtEQ0ROOEZoZ0N5SEpJRDliZkdsNlBJUEp0TE94UlF2M20KSituaktNcnF5a3BPaWp6WXNyUjRSWXlEV0w2dm1hMlpSZGlZS1FJQkVRS0NBUUFKYklnQk5wL3licklSblQ3MQpQdzZmcnZ5cnRPdzk0WmhQYUZ6TmwydS8rQjdmMVVObTM3aGwzOFZ6ajZrL1VxMFpLbzJ1NnlaREY4NVlxS1o0ClBvWWVpSVVUZ0toVDNtS3VmVWtlM1crdWlBcTFuV05OYWZhRk5uOVA2ZVFrbklSMjl5ZXdEVUxPbTdBU0pXRG4KRUVsdE9xVUtqbUNTNEg2QzRyQTlPVEx5OU9NcVpUbU1BZEFTUFZsRGNtNWVkdWVCSGtDeXdrV1lwb2M5N1o2bQpwZG1hOEFOdkcyMUFJOGFZTThTRzgrTmVPZE1pK2tVdmJYT0FlcHUrWHpHRlZxeWRxL0VWdDl2N2xOS0NEY3N3ClJUVC9aSFlDM2xENHd4ejExOXV1eW9zcnhZTUs0QUhTQ1FaM2Zpb3dRY2dMeU44a1hVT1JBa0NrOVBSVEdtUS8KbTlRQkFvR0JBT0drbEZub0hPSlVpeXJ6ZzM4dTY0OW5oUVl4bHpkaTd1bTNIVHhYWU9UbnFYMnkwbmRzSEc1OQpsdS9ySDl5c3Mzck93NFFadDV5alNoclhRUUFKM0dPMERuVUk5Q2F0dE1reGFCYmRYQjVvNGZEL2VzbXowdGJlCk4zaWdHZGVCZ1gvUEF3b3RCVnFXVGNzbSs5QWR4OHpoV0wvMXJocVU4emxLa2dCazBOQlpBb0dCQU0rNkJETW4KNW1jMnZQUzNOYjRtYWVNYnY5dEVacW1Bb1Q3V1RCaUFnY2ZJMlNIRHdNMUFQYVNGcndManN0bFRSNkhMcW1XSQpVYVRvRVhZbkkwejdOUnhlYUdQSTJWdW5uc0pFSGhMS0tRN2Rsa0dSUE1ib292b21EbXBoZVhOOWtnUU9hRzkzCjdBcnVvTWRuZFFhc0VkTlgvcGVYc3FWamZYMjNZLzB4eG94UkFvR0JBS3lNNmVwbU5EU2JBUUs2TjJGQi8yMnAKZzllUFZZUzFFUTBUanRQS1dTZUQraFRVQ2x0U3JGUitLQ0RnK2o5VzQ1b2xwSkl4eUtUMVZzazdNYlM4UHg4UgpPRHRoTXl5aTg2anBpOVUvM1FneUZqRERYZVdKZ3h6SURFMHZJdEg1bjBPZVRaNWVxYjIrTzMwNzdiMUQ4eVF6CjJuU3MwRzZ1STJnTDJROWNKelhwQW9HQVBSaVgwcytBQUQxR29sUUF2M1MxdTBSbG10Zmg5WjVOaXZPOEJ6VGEKNEdnLzNNRWFscmlLbWN6M1BSWExNTnhDUHFWUU8vcnExaVlqUU41VnJUclRZckphOEN3RHNZdW5LaFFJMkZtVAptdlhnNWh1b2RyemtvKzBUVEhjRm1uQTZBVEZxQXFyTTlDZ1JLNWJtTHlPTXhiQjREbmZwUDdQWm5YSXNkNlU2ClpZRUNnWUJzNWlPQlBWaW4waThVWFhHU09xSjIxOHpmUTZUVmdTYk1TaDErZlFyRkY4TlZRR3g1bkxrcUhXZGkKQXRORDhOYWZ2cFdyT2NQNlpNWksxa29JUXJpa1RWNmd4UStJQXVZSXd6R0tTRVNFR3RyM0JMRVdWRnR2OGpHNgp1d2RJejFTdDFpamRhd3J1VldNNFI1eXJaRVJsb1EyWFFXcGZUbVNibUQ4Y1RUNjNrZz09Ci0tLS0tRU5EIFJTQSBQUklWQVRFIEtFWS0tLS0tCg==:LS0tLS1CRUdJTiBQVUJMSUMgS0VZLS0tLS0KTUlJQklEQU5CZ2txaGtpRzl3MEJBUUVGQUFPQ0FRMEFNSUlCQ0FLQ0FRRUF0eGdKUENWSUhQanhWamcwNWUydQpaNURqNDNIdDF0WFlUK3VkVVRTL3RrSlgyQzltcWg4aktQdU9mQXV6cWJQK2V6ckF0Q0hDem1ETmxmRTBqZU5TClVUZlFWbFhxNzd3UGh6ajZWNm1lWTNlcmYxK0pUY0dROTVDRTdBbFFmaW9ObVoxTU45MFI5ejZCWUkwUmlUeHUKQVFXckZqdm1rMUsrZ1RRN2dPbVV1WEx1MzJ2R2k1UTRwSUpUcEkwTFhCSnlCclU0SzVlN1ZNWFowdCtvV1Fzdwpjcm05bkJYWVpleVRJcUZ2VmVkbEpxZTArTm9GTzN4T3VUdjFKK2Jxa1Z4UW5CVzNDZ3JHa2NPRlZFa0RDRE44CkZoZ0N5SEpJRDliZkdsNlBJUEp0TE94UlF2M21KK25qS01ycXlrcE9panpZc3JSNFJZeURXTDZ2bWEyWlJkaVkKS1FJQkVRPT0KLS0tLS1FTkQgUFVCTElDIEtFWS0tLS0tCg==", 87600U, true), // 10 years max
};
class LicenseManager : public BaseLicenseManager<LicenseKeysRegister>
{
public:
    LicenseManager()
        : BaseLicenseManager()
    {
    }
};

#endif // LICENSE_MANAGER_H
