const PROGMEM  uint8_t bright[] = {
    126, 130, 136, 139, 142, 143, 134, 122, 107, 106, 108, 130, 144, 147, 149, 148, 148, 138, 130, 130, 
    132, 134, 134, 132, 132, 134, 137, 152, 148, 169, 126, 125, 125, 123, 123, 127, 128, 130, 129, 126, 
    127, 139, 139, 133, 135, 136, 131, 129, 130, 131, 134, 128, 117, 184, 176, 161, 117, 130, 145, 162, 
    142, 155, 126, 111, 111, 156, 175, 149, 126, 146, 143, 149, 149, 136, 126, 122, 123, 134, 132, 120, 
    110, 120, 123, 133, 157, 172, 154, 144, 138, 136, 137, 138, 125, 117, 125, 125, 125, 122, 124, 127, 
    132, 133, 135, 135, 131, 128, 125, 118, 96, 68, 132, 134, 161, 137, 145, 146, 125, 118, 126, 146, 
    147, 146, 147, 144, 141, 153, 147, 142, 171, 196, 199, 175, 202, 241, 175, 179, 188, 185, 161, 136, 
    158, 163, 148, 134, 129, 130, 128, 130, 132, 128, 130, 114, 88, 131, 114, 126, 117, 103, 109, 126, 
    108, 98, 65, 111, 141, 143, 158, 172, 186, 129, 176, 153, 159, 149, 136, 131, 129, 126, 121, 128, 
    108, 137, 157, 155, 160, 153, 146, 139, 119, 153, 150, 150, 130, 135, 103, 123, 117, 125, 132, 138, 
    142, 140, 133, 132, 130, 133, 138, 132, 126, 122, 122, 124, 122, 125, 125, 125, 124, 122, 124, 123, 
    123, 123, 124, 123, 124, 125, 127, 128, 131, 139, 142, 142, 139, 136, 136, 141, 143, 142, 144, 147, 
    144, 137, 144, 150, 147, 132, 113, 111, 136, 140, 153, 156, 136, 146, 153, 134, 136, 146, 163, 159, 
    136, 133, 128, 129, 133, 120, 153, 165, 160, 144, 136, 135, 133, 117, 125, 111, 91, 138, 155, 143, 
    149, 136, 115, 120, 118, 115, 124, 124, 122, 116, 120, 112, 111, 112, 162, 149, 124, 130, 145, 139, 
    130, 104, 98, 131, 106, 112, 123, 139, 121, 130, 126, 121, 111, 123, 127, 123, 126, 127, 128, 129, 
    128, 125, 130, 124, 125, 129, 130, 124, 118, 120, 124, 130, 128, 122, 93, 98, 124, 120, 126, 128, 
    127, 131, 130, 141, 126, 131, 140, 146, 150, 142, 134, 129, 139, 130, 127, 124, 126, 118, 120, 131, 
    139, 140, 140, 141, 140, 136, 130, 124, 126, 102, 126, 116, 111, 113, 121, 135, 148, 80, 93, 130, 
    158, 154, 164, 143, 153, 139, 146, 135, 118, 106, 115, 134, 136, 132, 141, 145, 142, 144, 141, 148, 
    160, 146, 139, 133, 130, 128, 128, 131, 134, 135, 134, 104, 110, 128, 125, 140, 145, 143, 133, 111, 
    102, 117, 85, 136, 128, 191, 131, 130, 131, 132, 133, 134, 135, 135, 129, 129, 127, 127, 128, 131, 
    145, 151, 144, 136, 132, 135, 143, 139, 131, 127, 124, 123, 122, 121, 124, 129, 131, 126, 129, 132, 
    137, 136, 130, 125, 120, 123, 124, 126, 124, 123, 124, 122, 122, 125, 120, 122, 131, 128, 125, 120, 
    108, 133, 138, 133, 134, 128, 121, 126, 131, 98, 161, 181, 119, 139, 156, 105, 77, 127, 101, 133, 
    88, 67, 255, 165, 154, 115, 106, 110, 138, 138, 130, 114, 132, 118, 148, 149, 161, 145, 136, 138, 
    173, 124, 188, 154, 116, 149, 152, 126, 139, 154, 146, 153, 147, 144, 129, 122, 135, 118, 60, 121, 
    117, 134, 142, 149, 164, 179, 221, 184, 142, 149, 146, 137, 126, 123, 125, 138, 157, 146, 151, 119, 
    99, 117, 120, 146, 148, 110, 148, 209, 121, 142, 155, 137, 153, 112, 163, 125, 132, 138, 126, 119, 
    112, 114, 111, 112, 112, 140, 120, 109, 102, 120, 117, 178, 149, 153, 158, 148, 128, 169, 196, 108, 
    127, 137, 145, 162, 170, 149, 142, 138, 128, 123, 130, 131, 130, 113, 144, 107, 137, 143, 137, 134, 
    131, 129, 130, 151, 150, 167, 148, 136, 126, 93, 139, 147, 141, 146, 134, 173, 175, 153, 170, 189, 
    176, 139, 140, 186, 164, 134, 152, 132, 131, 145, 146, 128, 128, 126, 126, 138, 180, 164, 188, 217, 
    168, 220, 222, 179, 152, 124, 150, 176, 156, 163, 171, 134, 127, 120, 121, 121, 128, 128, 126, 125, 
    123, 120, 119, 119, 117, 114, 112, 112, 112, 113, 117, 121, 124, 115, 117, 120, 119, 119, 121, 124, 
    134, 143, 145, 139, 135, 123, 126, 150, 155, 141, 151, 106, 131, 113, 121, 159, 117, 115, 109, 114, 
    140, 136, 134, 132, 125, 126, 124, 135, 128, 116, 186, 167, 156, 151, 154, 105, 107, 119, 145, 74, 
    96, 123, 141, 128, 110, 121, 145, 122, 140, 79, 100, 110, 129, 126, 127, 128, 125, 123, 126, 126, 
    110, 25, 81, 152, 145, 136, 144, 120, 119, 135, 138, 128, 124, 121, 107, 71, 133, 128, 184, 99, 
    98, 147, 155, 115, 107, 167, 158, 101, 105, 146, 157, 146, 150, 147, 166, 174, 161, 167, 144, 147, 
    178, 172, 141, 115, 132, 139, 136, 127, 147, 133, 131, 127, 155, 142, 142, 146, 134, 161, 161, 133, 
    111, 98, 104, 114, 119, 100, 188, 193, 175, 169, 201, 188, 153, 138, 139, 132, 117, 142, 216, 66, 
    80, 98, 143, 105, 99, 84, 61, 88, 102, 93, 100, 129, 139, 128, 122, 123, 124, 127, 126, 128, 
    127, 123, 119, 119, 120, 122, 120, 116, 124, 125, 126, 133, 131, 127, 131, 137, 138, 134, 126, 113, 
    110, 118, 123, 128, 127, 130, 130, 134, 143, 152, 151, 152, 147, 140, 145, 142, 124, 130, 132, 132, 
    117, 107, 94, 155, 135, 165, 152, 180, 172, 143, 124, 99, 110, 113, 104, 75, 98, 113, 141, 135, 
    145, 132, 128, 134, 133, 148, 147, 138, 144, 136, 123, 126, 128, 129, 108, 119, 96, 38, 34, 105, 
    155, 155, 154, 141, 127, 122, 124, 132, 126, 114, 100, 114, 120, 115, 110, 135, 134, 128, 116, 101, 
    106, 120, 136, 111, 140, 141, 137, 124, 126, 124, 124, 129, 153, 176, 149, 133, 132, 136, 136, 135, 
    135, 135, 136, 144, 131, 138, 141, 140, 140, 128, 131, 142, 151, 164, 160, 153, 140, 130, 100, 119, 
    127, 120, 102, 128, 136, 138, 134, 133, 132, 135, 129, 134, 119, 147, 117, 106, 131, 140, 134, 120, 
    87, 75, 95, 126, 151, 156, 138, 132, 133, 132, 126, 149, 165, 139, 126, 134, 121, 113, 109, 132, 
    126, 115, 114, 91, 108, 130, 95, 71, 102, 128, 125, 131, 140, 119, 107, 120, 138, 154, 166, 172, 
    166, 188, 166, 131, 130, 129, 156, 118, 150, 122, 169, 160, 140, 125, 129, 124, 124, 125, 128, 135, 
    137, 136, 136, 138, 141, 140, 134, 132, 133, 135, 126, 122, 122, 122, 123, 127, 125, 122, 121, 120, 
    122, 122, 122, 124, 124, 125, 126, 126, 124, 123, 124, 126, 128, 133, 140, 144, 145, 141, 139, 134, 
    135, 137, 139, 139, 137, 133, 130, 127, 124, 146, 137, 122, 128, 133, 130, 128, 130, 131, 124, 125, 
    138, 138, 170, 182, 196, 157, 172, 142, 164, 156, 174, 178, 165, 147, 158, 176, 163, 162, 126, 127, 
    121, 119, 124, 127, 129, 127, 114, 147, 167, 123, 115, 161, 146, 167, 187, 147, 133, 176, 131, 109, 
    95, 96, 98, 179, 119, 224, 67, 132, 102, 90, 115, 149, 153, 192, 146, 119, 153, 158, 126, 98, 
    100, 162, 121, 130, 152, 132, 86, 109, 128, 126, 145, 155, 145, 118, 103, 126, 129, 94, 104, 126, 
    105, 134, 126, 134, 63, 79, 91, 158, 158, 98, 59, 100, 117, 137, 123, 113, 112, 121, 128, 126, 
    122, 118, 125, 133, 135, 144, 140, 136, 143, 145, 141, 135, 132, 136, 130, 125, 124, 129, 132, 140, 
    137, 132, 129, 139, 146, 152, 150, 151, 146, 139, 134, 133, 131, 130, 130, 130, 128, 136, 138, 146, 
    162, 151, 136, 129, 130, 132, 134, 136, 137, 137, 134, 131, 127, 130, 142, 147, 141, 140, 134, 139, 
    120, 139, 138, 140, 145, 140, 130, 132, 137, 134, 168, 82, 165, 134, 137, 138, 148, 161, 133, 130, 
    132, 127, 136, 115, 106, 111, 113, 125, 130, 133, 130, 132, 130, 128, 126, 127, 128, 127, 129, 126, 
    123, 119, 115, 108, 108, 121, 128, 126, 130, 130, 131, 133, 128, 135, 135, 129, 127, 135, 142, 140, 
    133, 134, 134, 132, 126, 144, 159, 155, 151, 143, 150, 150, 111, 139, 130, 115, 104, 110, 114, 102, 
    97, 101, 113, 120, 137, 129, 123, 122, 115, 110, 112, 122, 131, 129, 127, 127, 124, 121, 123, 124, 
    123, 123, 122, 122, 122, 121, 123, 120, 120, 121, 123, 124, 123, 124, 124, 122, 122, 122, 126, 130, 
    130, 130, 129, 128, 127, 120, 120, 115, 119, 136, 121, 127, 128, 125, 124, 127, 132, 135, 139, 146, 
    143, 131, 125, 121, 124, 127, 128, 138, 143, 146, 142, 125, 115, 125, 138, 135, 132, 132, 133, 131, 
    133, 134, 135, 132, 130, 128, 127, 129, 130, 129, 124, 123, 127, 132, 126, 102, 113, 123, 123, 127, 
    117, 120, 124, 125, 130, 127, 120, 122, 122, 125, 128, 127, 128, 126, 129, 123, 134, 139, 136, 147, 
    151, 142, 137, 194, 162, 86, 213, 131, 107, 114, 130, 143, 150, 153, 155, 153, 150, 144, 137, 130, 
    124, 119, 128, 135, 172, 133, 131, 147, 123, 167, 141, 113, 126, 138, 147, 134, 136, 148, 149, 143, 
    127, 116, 113, 120, 123, 118, 114, 109, 106, 98, 79, 104, 122, 144, 128, 138, 127, 130, 127, 146, 
    153, 126, 146, 143, 140, 151, 128, 140, 145, 120, 119, 125, 132, 120, 123, 120, 122, 139, 137, 129, 
    130, 100, 139, 130, 140, 198, 147, 133, 128, 126, 130, 147, 135, 152, 157, 131, 125, 122, 118, 116, 
    101, 97, 140, 148, 105, 121, 108, 113, 154, 168, 145, 130, 127, 128, 123, 136, 138, 171, 140, 133, 
    125, 119, 100, 98, 131, 109, 111, 124, 161, 108, 120, 139, 125, 126, 121, 118, 158, 126, 125, 125, 
    171, 122, 133, 153, 131, 119, 93, 140, 173, 140, 135, 132, 124, 112, 108, 102, 103, 108, 111, 140, 
    147, 136, 111, 92, 105, 118, 112, 128, 117, 104, 89, 104, 152, 132, 157, 139, 114, 108, 126, 127, 
    123, 126, 126, 128, 131, 149, 165, 183, 162, 145, 144, 148, 140, 152, 151, 145, 134, 122, 117, 117, 
    156, 118, 120, 124, 145, 125, 106, 111, 116, 128, 124, 115, 98, 135, 128, 124, 120, 122, 124, 131, 
    133, 135, 136, 123, 134, 122, 119, 116, 135, 118, 132, 120, 117, 101, 111, 123, 117, 132, 163, 129, 
    157, 147, 135, 132, 133, 130, 130, 130, 129, 128, 129, 132, 133, 132, 130, 130, 129, 129, 128, 127, 
    125, 124, 124, 124, 124, 126, 127, 126, 125, 126, 125, 126, 126, 128, 128, 129, 126, 123, 121, 120, 
    123, 127, 128, 125, 124, 120, 122, 121, 120, 119, 116, 116, 114, 116, 119, 125, 132, 138, 142, 143, 
    136, 130, 129, 127, 134, 145, 145, 143, 142, 138, 134, 131, 131, 134, 140, 146, 151, 148, 137, 126, 
    132, 111, 134, 128, 122, 117, 136, 108, 137, 130, 152, 140, 178, 110, 119, 169, 141, 143, 112, 153, 
    142, 115, 143, 193, 116, 146, 196, 167, 206, 118, 117, 146, 144, 128, 122, 121, 120, 121, 118, 118, 
    115, 119, 122, 113, 126, 149, 153, 142, 156, 162, 136, 154, 150, 163, 160, 161, 126, 116, 131, 140, 
    140, 140, 138, 136, 132, 131, 131, 133, 133, 122, 103, 106, 122, 123, 113, 104, 106, 99, 174, 171, 
    158, 136, 150, 168, 155, 88, 144, 152, 136, 136, 131, 126, 123, 124, 125, 126, 128, 127, 128, 128, 
    129, 127, 122, 122, 122, 121, 123, 122, 123, 125, 131, 128, 119, 117, 120, 125, 121, 120, 120, 109, 
    108, 119, 128, 128, 126, 130, 133, 132, 133, 128, 125, 123, 123, 124, 129, 129, 128, 128, 128, 126, 
    123, 124, 128, 131, 129, 127, 126, 129, 138, 136, 134, 130, 129, 132, 135, 136, 135, 135, 134, 134, 
    137, 144, 143, 144, 144, 142, 139, 139, 140, 139, 139, 137, 134, 133, 132, 130, 126, 124, 125, 126, 
    129, 132, 133, 134, 132, 132, 129, 126, 125, 126, 129, 132, 134, 133, 134, 135, 134, 133, 128, 125, 
    122, 123, 124, 125, 127, 131, 136, 138, 138, 139, 140, 140, 140, 143, 145, 145, 142, 143, 143, 140, 
    138, 140, 143, 138, 136, 136, 136, 140, 146, 149, 151, 146, 148, 141, 138, 138, 139, 135, 137, 138, 
    136, 134, 132, 132, 130, 128, 128, 129, 132, 133, 134, 134, 134, 133, 133, 130, 130, 128, 128, 132, 
    136, 135, 129, 128, 132, 132, 130, 130, 129, 125, 129, 133, 135, 136, 132, 133, 128, 130, 126, 132, 
    139, 139, 139, 138, 133, 126, 127, 127, 128, 130, 128, 127, 130, 129, 126, 121, 109, 111, 136, 149, 
    148, 134, 114, 79, 127, 140, 151, 153, 145, 136, 139, 143, 148, 148, 146, 140, 131, 115, 130, 116, 
    126, 129, 123, 117, 117, 121, 122, 121, 126, 131, 131, 128, 126, 128, 132, 140, 133, 128, 137, 138, 
    133, 124, 135, 137, 135, 140, 134, 131, 129, 131, 132, 134, 135, 137, 138, 140, 143, 148, 134, 130, 
    155, 155, 148, 143, 146, 148, 140, 130, 125, 125, 127, 127, 128, 131, 130, 133, 140, 139, 135, 134, 
    126, 123, 124, 129, 129, 128, 127, 126, 124, 124, 126, 127, 126, 124, 123, 120, 117, 121, 132, 132, 
    132, 132, 131, 128, 127, 128, 126, 126, 127, 128, 128, 126, 127, 126, 128, 128, 126, 126, 125, 123, 
    123, 124, 127, 130, 130, 128, 123, 122, 127, 140, 147, 143, 135, 129, 128, 126, 125, 124, 125, 125, 
    126, 123, 121, 121, 123, 128, 136, 136, 133, 130, 129, 129, 129, 129, 130, 128, 128, 128, 128, 128, 
    128, 128, 129, 128, 130, 130, 131, 131, 133, 135, 133, 133, 131, 130, 131, 132, 131, 132, 132, 132, 
    132, 132, 132, 131, 129, 129, 127, 126, 126, 127, 127, 126, 126, 125, 124, 124, 123, 120, 118, 122, 
    120, 122, 109, 106, 128, 134, 133, 132, 125, 118, 117, 117, 113, 114, 123, 132, 132, 140, 134, 129, 
    129, 128, 128, 126, 125, 126, 129, 129, 128, 128, 127, 126, 128, 132, 140, 144, 144, 139, 132, 126, 
    134, 133, 152, 146, 105, 106, 106, 131, 132, 151, 173, 159, 172, 187, 131, 126, 129, 128, 140, 117, 
    119, 124, 143, 134, 133, 122, 118, 115, 122, 120, 117, 114, 112, 86, 87, 148, 183, 122, 145, 135, 
    132, 125, 113, 106, 109, 145, 195, 158, 170, 129, 167, 191, 146, 119, 117, 127, 130, 125, 112, 148, 
    184, 173, 138, 106, 92, 122, 170, 197, 216, 230, 218, 242, 146, 146, 134, 136, 126, 124, 134, 152, 
    157, 114, 110, 111, 122, 134, 134, 150, 112, 110, 117, 121, 124, 126, 80, 107, 128, 96, 89, 105, 
    125, 128, 118, 111, 115, 118, 118, 115, 112, 113, 115, 119, 122, 124, 125, 124, 123, 124, 120, 120, 
    120, 122, 121, 120, 119, 119, 119, 119, 118, 118, 118, 119, 123, 124, 122, 119, 116, 113, 113, 113, 
    117, 120, 122, 124, 123, 123, 123, 122, 122, 121, 123, 120, 121, 120, 120, 122, 122, 122, 123, 122, 
    122, 122, 125, 126, 127, 127, 127, 126, 120, 114, 119, 130, 126, 127, 128, 110, 123, 141, 139, 132, 
    150, 156, 149, 167, 158, 148, 145, 154, 135, 126, 134, 130, 121, 118, 116, 132, 128, 132, 131, 128, 
    128, 123, 127, 133, 180, 131, 176, 167, 162, 147, 123, 164, 132, 108, 107, 186, 128, 149, 117, 91, 
    93, 50, 118, 109, 121, 124, 126, 113, 113, 139, 156, 77, 109, 119, 114, 116, 149, 144, 93, 91, 
    110, 126, 199, 185, 123, 173, 161, 145, 121, 124, 126, 132, 105, 113, 95, 130, 125, 94, 97, 106, 
    101, 114, 134, 145, 154, 163, 171, 179, 130, 133, 126, 145, 132, 110, 114, 122, 127, 128, 118, 118, 
    121, 125, 108, 97, 98, 155, 129, 143, 144, 114, 111, 112, 126, 117, 113, 136, 117, 117, 124, 128, 
    118, 109, 102, 117, 144, 147, 146, 175, 116, 134, 147, 131, 121, 117, 111, 111, 111, 111, 110, 109, 
    109, 115, 137, 180, 156, 164, 140, 160, 192, 101, 147, 151, 121, 110, 134, 122, 115, 126, 94, 81, 
    112, 130, 124, 124, 124, 124, 126, 140, 143, 143, 149, 128, 104, 100, 135, 113, 110, 126, 131, 135, 
    127, 111, 110, 138, 171, 189, 91, 146, 165, 160, 173, 148, 174, 155, 126, 122, 135, 147, 136, 128, 
    121, 122, 163, 182, 202, 200, 221, 163, 180, 183, 118, 113, 106, 112, 108, 110, 102, 97, 94, 90, 
    94, 96, 103, 105, 96, 97, 123, 97, 106, 164, 175, 145, 123, 122, 96, 125, 110, 141, 149, 146, 
    137, 125, 110, 123, 133, 165, 158, 153, 118, 108, 98, 97, 120, 94, 131, 106, 109, 100, 83, 100, 
    123, 88, 94, 109, 79, 91, 109, 76, 107, 119, 129, 129, 130, 124, 101, 111, 103, 104, 90, 82, 
    95, 108, 115, 109, 104, 105, 106, 117, 123, 132, 126, 117, 118, 119, 113, 103, 105, 102, 100, 104, 
    104, 106, 108, 103, 100, 93, 167, 107, 117, 99, 76, 84, 124, 94, 122, 122, 107, 93, 100, 135, 
    88, 102, 112, 134, 111, 105, 101, 89, 101, 112, 103, 123, 128, 119, 118, 136, 147, 137, 113, 102, 
    106, 101, 114, 130, 143, 142, 183, 110, 109, 140, 105, 89, 120, 143, 112, 123, 172, 152, 114, 111, 
    91, 100, 135, 132, 155, 139, 155, 135, 102, 161, 144, 122, 104, 107, 89, 90, 82, 76, 100, 122, 
    93, 91, 131, 119, 147, 117, 127, 132, 147, 128, 164, 117, 118, 118, 98, 120, 103, 103, 105, 84, 
    94, 104, 114, 147, 145, 167, 84, 109, 121, 94, 74, 134, 67, 73, 88, 103, 88, 100, 154, 126, 
    122, 162, 158, 98, 143, 131, 125, 143, 126, 150, 157, 164, 185, 153, 110, 128, 131, 117, 138, 99, 
    119, 92, 95, 111, 115, 118, 148, 134, 94, 113, 140, 129, 86, 105, 122, 147, 79, 26, 34, 29, 
    13, 26, 82, 130, 120, 140, 148, 139, 153, 153, 134, 126, 121, 117, 113, 114, 112, 114, 113, 115, 
    120, 192, 117, 120, 124, 120, 115, 117, 127, 125, 120, 112, 101, 104, 105, 134, 106, 80, 104, 130, 
    142, 113, 117, 133, 109, 130, 129, 139, 132, 136, 126, 143, 179, 146, 145, 132, 117, 123, 117, 110, 
    172, 162, 156, 157, 135, 124, 117, 117, 125, 123, 122, 116, 114, 113, 117, 120, 125, 129, 134, 129, 
    120, 129, 127, 132, 130, 124, 118, 118, 122, 119, 121, 132, 138, 127, 137, 132, 124, 137, 143, 144, 
    139, 127, 123, 120, 122, 125, 126, 129, 135, 137, 132, 130, 127, 126, 124, 122, 117, 118, 122, 121, 
    117, 118, 113, 113, 117, 117, 118, 126, 104, 101, 118, 138, 154, 151, 150, 129, 122, 123, 138, 134, 
    119, 115, 116, 113, 112, 107, 112, 117, 169, 125, 141, 128, 123, 161, 146, 151, 111, 143, 139, 132, 
    124, 97, 118, 87, 149, 142, 115, 102, 106, 108, 112, 108, 114, 107, 128, 133, 133, 126, 121, 122, 
    121, 117, 116, 140, 145, 148, 140, 145, 108, 105, 136, 134, 135, 131, 128, 119, 124, 121, 121, 124, 
    130, 130, 128, 124, 117, 119, 132, 142, 139, 150, 135, 126, 118, 110, 116, 126, 143, 115, 128, 101, 
    137, 218, 98, 195, 106, 204, 205, 165, 139, 130, 125, 123, 122, 121, 121, 118, 124, 122, 115, 119, 
    126, 130, 132, 128, 116, 109, 141, 136, 119, 117, 119, 122, 95, 76, 161, 123, 131, 189, 131, 138, 
    124, 125, 140, 133, 118, 123, 140, 138, 131, 131, 133, 133, 119, 114, 113, 115, 125, 119, 180, 224, 
    97, 127, 132, 130, 156, 161, 172, 145, 125, 117, 118, 115, 103, 119, 135, 102, 106, 64, 78, 118, 
    149, 138, 202, 176, 200, 125, 158, 141, 123, 110, 126, 127, 127, 129, 126, 124, 86, 149, 120, 123, 
    88, 122, 213, 181, 170, 192, 135, 131, 148, 171, 228, 111, 173, 145, 83, 113, 105, 111, 114, 112, 
    166, 57, 107, 89, 148, 150, 24, 95, 152, 121, 125, 154, 120, 115, 103, 94, 106, 123, 132, 148, 
    64, 153, 134, 100, 74, 89, 161, 175, 139, 108, 89, 105, 96, 76, 115, 105, 99, 105, 126, 142, 
    167, 133, 136, 118, 150, 128, 118, 120, 115, 118, 112, 126, 125, 121, 122, 122, 127, 125, 122, 115, 
    72, 106, 105, 103, 109, 117, 120, 94, 106, 143, 139, 119, 132, 135, 129, 129, 130, 129, 124, 123, 
    125, 128, 129, 127, 127, 127, 125, 123, 122, 122, 121, 121, 120, 120, 122, 125, 133, 138, 135, 134, 
    128, 126, 125, 123, 125, 125, 124, 123, 126, 126, 125, 124, 124, 124, 123, 122, 120, 120, 121, 122, 
    123, 122, 118, 119, 127, 128, 131, 129, 119, 113, 120, 121, 122, 122, 123, 124, 122, 123, 117, 121, 
    120, 135, 141, 134, 131, 123, 112, 129, 164, 139, 147, 138, 184, 170, 144, 121, 150, 160, 150, 140, 
    177, 161, 129, 130, 122, 118, 126, 147, 124, 140, 147, 158, 156, 157, 160, 141, 132, 134, 139, 138, 
    134, 128, 137, 130, 130, 128, 126, 125, 127, 128, 130, 130, 128, 124, 120, 119, 119, 119, 120, 120, 
    121, 122, 123, 123, 122, 122, 121, 121, 121, 121, 121, 121, 118, 122, 128, 137, 140, 136, 126, 121, 
    130, 133, 132, 134, 134, 132, 130, 131, 131, 130, 130, 130, 134, 134, 136, 135, 133, 130, 127, 126, 
    125, 125, 123, 124, 124, 125, 126, 127, 126, 128, 128, 131, 133, 133, 132, 129, 136, 140, 137, 136, 
    138, 140, 139, 138, 137, 142, 147, 157, 156, 158, 149, 142, 143, 147, 133, 129, 145, 143, 151, 153, 
    150, 139, 128, 123, 125, 122, 120, 141, 141, 134, 131, 138, 139, 144, 139, 135, 132, 128, 126, 121, 
    119, 120, 123, 126, 135, 143, 145, 157, 157, 140, 130, 197, 95, 142, 118, 134, 152, 131, 107, 107, 
    112, 123, 133, 137, 138, 141, 139, 140, 137, 125, 114, 110, 111, 112, 115, 116, 118, 120, 122, 121, 
    120, 121, 124, 120, 111, 119, 156, 137, 115, 118, 111, 105, 100, 126, 107, 95, 132, 161, 146, 132, 
    154, 93, 102, 119, 120, 165, 106, 104, 105, 131, 135, 133, 126, 127, 123, 125, 120, 118, 117, 114, 
    118, 118, 110, 109, 108, 111, 103, 118, 130, 125, 155, 75, 150, 78, 151, 168, 122, 130, 132, 138, 
    129, 126, 120, 124, 120, 118, 99, 145, 175, 188, 176, 156, 140, 130, 126, 124, 123, 136, 128, 138, 
    120, 137, 130, 136, 105, 113, 131, 124, 126, 119, 120, 123, 127, 116, 108, 99, 105, 109, 110, 110, 
    116, 124, 119, 116, 112, 104, 114, 126, 126, 118, 109, 116, 123, 116, 113, 114, 114, 113, 119, 116, 
    122, 121, 126, 133, 132, 121, 117, 111, 118, 112, 113, 116, 137, 134, 151, 121, 75, 72, 140, 105, 
    104, 97, 71, 118, 80, 109, 108, 105, 111, 111, 110, 109, 106, 121, 120, 136, 133, 142, 145, 140, 
    145, 134, 127, 122, 115, 113, 106, 112, 124, 135, 137, 133, 130, 128, 126, 122, 122, 120, 119, 120, 
    120, 120, 121, 123, 125, 126, 126, 123, 118, 119, 120, 121, 122, 123, 121, 118, 119, 124, 124, 123, 
    124, 122, 121, 117, 117, 112, 114, 112, 115, 120, 122, 123, 122, 121, 118, 116, 120, 131, 136, 126, 
    123, 124, 130, 132, 128, 131, 136, 135, 129, 127, 125, 124, 122, 124, 124, 122, 122, 123, 124, 125, 
    124, 124, 122, 122, 121, 120, 120, 119, 119, 120, 120, 119, 120, 120, 120, 120, 120, 120, 121, 121, 
    122, 123, 124, 126, 125, 125, 125, 124, 124, 122, 122, 122, 121, 122, 123, 122, 122, 122, 121, 121, 
    120, 120, 120, 120, 121, 123, 124, 126, 126, 127, 127, 126, 125, 125, 128, 129, 121, 119, 124, 129, 
    135, 140, 135, 131, 127, 128, 138, 139, 132, 136, 131, 135, 152, 146, 136, 128, 95, 110, 131, 121, 
    126, 142, 147, 139, 133, 155, 141, 147, 215, 157, 126, 136, 118, 115, 124, 103, 124, 160, 144, 142, 
    135, 120, 158, 163, 130, 104, 113, 167, 70, 144, 130, 146, 147, 140, 168, 147, 221, 163, 180, 168, 
    125, 120, 115, 117, 123, 138, 123, 132, 122, 145, 152, 140, 130, 129, 134, 141, 147, 128, 150, 168, 
    146, 131, 111, 95, 109, 97, 149, 161, 90, 111, 112, 124, 183, 171, 173, 176, 145, 204, 144, 146, 
    145, 142, 127, 161, 141, 204, 90, 106, 127, 151, 135, 127, 134, 123, 140, 126, 99, 97, 154, 102, 
    140, 109, 109, 110, 116, 120, 120, 151, 141, 139, 155, 170, 168, 239, 133, 135, 134, 152, 144, 118, 
    137, 141, 128, 120, 115, 113, 118, 117, 114, 112, 112, 112, 113, 114, 114, 114, 117, 122, 128, 121, 
    115, 113, 116, 150, 157, 132, 131, 130, 145, 150, 128, 117, 118, 126, 124, 116, 121, 120, 112, 116, 
    120, 121, 129, 128, 126, 117, 120, 122, 109, 98, 102, 108, 113, 115, 115, 118, 112, 107, 107, 136, 
    106, 121, 142, 130, 134, 159, 152, 130, 172, 122, 209, 106, 156, 119, 112, 106, 125, 165, 145, 145, 
    136, 138, 140, 138, 131, 123, 118, 112, 151, 150, 170, 150, 154, 92, 117, 130, 137, 136, 145, 129, 
    124, 120, 108, 104, 111, 106, 109, 112, 115, 117, 113, 108, 120, 119, 95, 106, 123, 134, 135, 134, 
    129, 128, 117, 158, 136, 130, 125, 139, 145, 145, 128, 132, 154, 145, 139, 132, 126, 125, 124, 120, 
    119, 119, 127, 129, 117, 116, 119, 127, 134, 139, 124, 125, 124, 131, 122, 141, 130, 106, 114, 124, 
    121, 114, 100, 94, 86, 118, 118, 110, 116, 117, 118, 117, 107, 110, 114, 113, 114, 115, 112, 112, 
    112, 115, 113, 109, 110, 107, 99, 102, 115, 126, 132, 130, 127, 124, 122, 121, 122, 124, 120, 115, 
    121, 114, 121, 144, 146, 144, 136, 130, 125, 120, 118, 119, 116, 110, 115, 108, 91, 98, 98, 109, 
    105, 107, 114, 122, 126, 135, 139, 123, 113, 122, 167, 152, 156, 125, 124, 121, 116, 93, 109, 122, 
    118, 122, 117, 117, 124, 143, 154, 157, 154, 155, 152, 124, 103, 51, 7, 0, 56, 71, 98, 164, 
    148, 130, 92, 151, 121, 104, 112, 120, 114, 87, 120, 99, 124, 132, 146, 136, 118, 99, 131, 112, 
    91, 113, 137, 135, 136, 138, 149, 136, 119, 76, 112, 94, 108, 111, 122, 114, 113, 103, 91, 94, 
    116, 119, 120, 124, 122, 118, 117, 113, 110, 111, 112, 113, 111, 108, 112, 113, 111, 113, 112, 110, 
    108, 105, 111, 109, 101, 93, 94, 108, 123, 136, 142, 140, 135, 132, 131, 131, 129, 124, 121, 119, 
    118, 117, 116, 115, 114, 114, 114, 114, 112, 113, 114, 115, 117, 119, 117, 114, 114, 121, 121, 113, 
    104, 101, 128, 138, 120, 128, 127, 107, 131, 158, 160, 163, 133, 128, 131, 171, 162, 143, 130, 185, 
    137, 133, 130, 138, 151, 151, 144, 135, 123, 149, 135, 152, 163, 157, 131, 119, 109, 103, 102, 108, 
    107, 113, 123, 127, 124, 128, 136, 137, 140, 150, 153, 125, 137, 154, 158, 178, 185, 165, 146, 197, 
    131, 173, 122, 111, 130, 125, 132, 121, 98, 116, 130, 126, 126, 125, 176, 130, 139, 122, 110, 130, 
    160, 135, 102, 88, 95, 113, 106, 120, 109, 96, 98, 108, 112, 105, 115, 118, 120, 117, 109, 115, 
    109, 106, 110, 110, 115, 123, 120, 117, 114, 109, 113, 120, 121, 129, 121, 118, 115, 113, 110, 113, 
    115, 117, 117, 115, 115, 114, 114, 114, 113, 106, 113, 117, 116, 114, 120, 118, 126, 120, 116, 115, 
    114, 114, 119, 125, 126, 125, 126, 126, 124, 121, 121, 122, 123, 123, 124, 123, 123, 122, 120, 119, 
    118, 118, 117, 116, 114, 113, 113, 114, 115, 119, 121, 117, 116, 116, 120, 124, 128, 130, 128, 126, 
    127, 129, 130, 132, 138, 136, 124, 120, 124, 123, 131, 138, 134, 131, 128, 134, 134, 134, 134, 128, 
    126, 132, 140, 143, 139, 133, 127, 124, 124, 123, 121, 124, 125, 126, 125, 122, 120, 118, 116, 116, 
    115, 115, 117, 117, 118, 119, 116, 117, 119, 121, 122, 122, 123, 126, 128, 125, 107, 124, 126, 142, 
    128, 121, 111, 120, 128, 131, 136, 126, 120, 107, 102, 115, 125, 102, 113, 116, 128, 136, 177, 125, 
    107, 150, 125, 115, 120, 134, 143, 150, 129, 108, 101, 105, 108, 128, 132, 145, 124, 104, 116, 202, 
    95, 88, 149, 124, 128, 141, 125, 169, 149, 152, 121, 183, 99, 124, 164, 143, 148, 140, 201, 128, 
    140, 156, 166, 186, 154, 94, 190, 95, 156, 135, 108, 151, 100, 207, 87, 151, 162, 145, 130, 126, 
    124, 124, 121, 121, 160, 178, 161, 168, 175, 176, 158, 150, 132, 125, 141, 143, 123, 122, 158, 149, 
    133, 116, 110, 115, 111, 105, 109, 108, 109, 112, 112, 112, 111, 111, 111, 111, 108, 108, 110, 110, 
    111, 113, 116, 120, 121, 122, 122, 122, 122, 125, 125, 121, 115, 110, 122, 117, 103, 117, 118, 123, 
    130, 120, 141, 133, 151, 149, 159, 121, 115, 169, 233, 198, 164, 232, 158, 219, 193, 152, 135, 157, 
    130, 124, 119, 103, 94, 83, 137, 155, 225, 186, 219, 109, 114, 111, 115, 165, 128, 142, 139, 119, 
    104, 104, 102, 110, 111, 110, 111, 110, 111, 111, 111, 113, 114, 111, 114, 115, 115, 111, 104, 100, 
    83, 127, 138, 136, 143, 139, 120, 124, 110, 112, 113, 112, 113, 113, 116, 116, 112, 111, 112, 113, 
    111, 107, 115, 111, 100, 106, 112, 114, 117, 90, 83, 150, 148, 125, 109, 112, 116, 136, 125, 100, 
    118, 134, 131, 128, 119, 59, 63, 97, 106, 122, 87, 51, 96, 126, 140, 132, 139, 148, 111, 109, 
    113, 139, 141, 130, 118, 113, 127, 147, 171, 160, 155, 139, 122, 115, 122, 117, 117, 110, 109, 110, 
    107, 108, 110, 111, 113, 114, 115, 115, 120, 125, 128, 124, 120, 114, 121, 147, 141, 130, 129, 130, 
    117, 104, 104, 109, 112, 114, 112, 108, 107, 110, 114, 112, 113, 116, 119, 115, 110, 108, 104, 106, 
    104, 109, 121, 107, 112, 108, 124, 140, 142, 122, 103, 117, 123, 108, 108, 109, 113, 103, 122, 117, 
    133, 143, 120, 127, 114, 103, 105, 99, 93, 131, 155, 146, 145, 138, 129, 134, 103, 93, 127, 154, 
    157, 159, 178, 159, 141, 173, 142, 133, 173, 167, 182, 154, 133, 123, 129, 131, 123, 120, 110, 100, 
    124, 105, 102, 103, 107, 111, 115, 112, 92, 111, 111, 103, 94, 101, 107, 110, 109, 105, 104, 110, 
    112, 104, 101, 103, 105, 89, 81, 86, 85, 102, 123, 117, 111, 120, 120, 109, 98, 121, 124, 118, 
    97, 93, 180, 179, 204, 105, 104, 117, 119, 134, 130, 117, 105, 82, 91, 118, 128, 127, 124, 123, 
    124, 125, 120, 116, 114, 114, 114, 117, 117, 119, 120, 125, 132, 130, 145, 165, 156, 144, 141, 150, 
    151, 139, 132, 127, 127, 126, 120, 115, 112, 113, 116, 118, 118, 115, 113, 112, 114, 117, 119, 115, 
    111, 110, 110, 112, 117, 119, 113, 118, 120, 119, 119, 117, 115, 117, 122, 148, 164, 137, 118, 136, 
    144, 131, 106, 114, 125, 120, 144, 124, 122, 118, 110, 118, 154, 130, 110, 98, 78, 101, 99, 129, 
    148, 154, 114, 227, 118, 117, 118, 116, 116, 143, 115, 97, 118, 121, 128, 123, 120, 122, 129, 126, 
    115, 110, 106, 108, 109, 99, 100, 98, 98, 101, 101, 99, 102, 106, 108, 108, 106, 106, 109, 108, 
    107, 106, 108, 110, 110, 110, 122, 125, 144, 162, 125, 137, 143, 100, 125, 115, 131, 117, 126, 97, 
    98, 107, 113, 134, 122, 158, 213, 208, 224, 176, 127, 113, 90, 103, 103, 93, 107, 91, 86, 88, 
    103, 93, 81, 112, 126, 122, 105, 105, 116, 108, 109, 103, 102, 102, 101, 100, 100, 105, 123, 126, 
    122, 128, 119, 101, 97, 103, 103, 102, 105, 103, 102, 91, 98, 87, 152, 138, 114, 162, 105, 126, 
    123, 121, 113, 112, 119, 118, 157, 107, 116, 128, 168, 141, 126, 173, 166, 140, 136, 83, 88, 80, 
    120, 145, 160, 143, 141, 135, 145, 118, 100, 134, 154, 182, 180, 170, 133, 161, 141, 99, 90, 93, 
    105, 106, 102, 102, 99, 103, 113, 115, 113, 110, 110, 117, 124, 122, 113, 98, 105, 113, 113, 108, 
    87, 107, 181, 174, 164, 185, 156, 114, 145, 119, 127, 114, 146, 164, 153, 152, 154, 157, 148, 156, 
    151, 170, 192, 181, 176, 138, 138, 150, 142, 168, 161, 135, 144, 140, 135, 106, 99, 122, 141, 195, 
    169, 231, 174, 187, 173, 163, 162, 163, 149, 130, 135, 132, 124, 132, 122, 144, 126, 118, 104, 118, 
    153, 159, 148, 133, 105, 114, 114, 113, 95, 105, 107, 141, 126, 117, 119, 149, 118, 136, 192, 135, 
    139, 86, 140, 177, 143, 163, 122, 130, 122, 136, 140, 138, 135, 114, 145, 176, 154, 126, 148, 107, 
    98, 102, 116, 107, 115, 118, 102, 109, 130, 179, 237, 180, 137, 134, 152, 137, 120, 113, 120, 125, 
    116, 86, 102, 98, 69, 87, 128, 115, 80, 108, 80, 29, 122, 142, 145, 171, 140, 132, 162, 140, 
    121, 111, 124, 130, 127, 97, 88, 110, 117, 144, 139, 129, 145, 158, 146, 133, 125, 128, 150, 169, 
    165, 204, 152, 146, 139, 127, 148, 172, 142, 121, 143, 111, 100, 112, 113, 106, 106, 105, 102, 100, 
    112, 103, 100, 96, 106, 103, 106, 105, 140, 157, 137, 153, 167, 136, 121, 176, 137, 152, 146, 116, 
    133, 163, 151, 129, 117, 124, 130, 127, 119, 113, 107, 107, 106, 109, 107, 106, 108, 107, 101, 92, 
    108, 102, 100, 104, 107, 114, 126, 125, 108, 63, 87, 120, 145, 143, 122, 172, 145, 198, 124, 123, 
    162, 131, 97, 153, 127, 93, 94, 105, 110, 111, 112, 109, 107, 107, 108, 109, 112, 115, 108, 119, 
    116, 125, 127, 130, 134, 133, 128, 124, 121, 121, 119, 118, 117, 113, 115, 117, 120, 119, 128, 157, 
    166, 144, 139, 154, 155, 150, 143, 136, 126, 120, 116, 112, 112, 113, 114, 114, 114, 111, 109, 108, 
    107, 106, 106, 106, 107, 107, 108, 108, 108, 108, 108, 109, 110, 111, 111, 113, 112, 112, 110, 110, 
    109, 110, 111, 112, 114, 116, 117, 118, 119, 118, 117, 116, 116, 116, 117, 118, 120, 124, 128, 132, 
    134, 137, 140, 150, 152, 153, 157, 150, 143, 141, 143, 143, 149, 147, 146, 146, 147, 136, 132, 129, 
    128, 129, 126, 124, 127, 130, 139, 137, 129, 126, 122, 118, 121, 125, 128, 126, 126, 125, 124, 117, 
    152, 131, 159, 149, 132, 153, 176, 162, 203, 174, 150, 145, 144, 145, 136, 156, 130, 104, 115, 92, 
    131, 149, 136, 145, 129, 170, 126, 87, 100, 125, 155, 139, 124, 83, 98, 124, 129, 185, 154, 167, 
    150, 139, 126, 113, 124, 126, 142, 155, 145, 184, 100, 179, 116, 141, 127, 185, 189, 196, 214, 205, 
    135, 131, 124, 110, 115, 97, 94, 98, 145, 161, 141, 143, 119, 91, 113, 127, 113, 118, 108, 103, 
    110, 112, 121, 129, 184, 129, 204, 152, 113, 108, 101, 103, 116, 125, 121, 112, 104, 105, 105, 105, 
    105, 107, 109, 107, 108, 113, 106, 102, 101, 103, 107, 110, 108, 125, 113, 107, 117, 136, 106, 114, 
    138, 110, 120, 132, 130, 137, 134, 136, 132, 121, 111, 119, 136, 138, 159, 161, 131, 145, 120, 150, 
    123, 131, 102, 104, 110, 110, 117, 147, 121, 106, 99, 106, 105, 103, 93, 101, 103, 95, 87, 114, 
    164, 105, 91, 91, 139, 110, 110, 117, 118, 117, 121, 141, 138, 114, 156, 111, 112, 185, 180, 139, 
    140, 121, 148, 144, 122, 119, 118, 116, 101, 99, 103, 120, 115, 164, 154, 129, 136, 163, 173137
};
const PROGMEM uint16_t offset_tbl[] = {
0, 353, 705, 1063, 1415, 1767, 2121, 2473, 2828, 3180, 3532, 3889, 4241, 4593, 4953, 5310, 5664
};