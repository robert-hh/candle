const PROGMEM  uint8_t bright[] = {
    142, 143, 143, 142, 141, 142, 141, 139, 140, 141, 140, 140, 138, 135, 138, 136, 136, 135, 134, 136, 
    135, 134, 128, 127, 131, 128, 128, 131, 132, 135, 134, 135, 135, 135, 135, 135, 137, 138, 142, 144, 
    142, 139, 137, 131, 139, 150, 128, 150, 158, 165, 174, 162, 165, 162, 159, 160, 154, 145, 149, 145, 
    138, 140, 142, 147, 150, 147, 144, 145, 142, 139, 136, 139, 139, 135, 135, 138, 140, 142, 142, 141, 
    142, 142, 142, 141, 140, 139, 140, 140, 138, 138, 139, 138, 139, 139, 136, 137, 136, 135, 136, 136, 
    137, 136, 137, 136, 136, 136, 133, 131, 132, 131, 131, 129, 127, 128, 127, 128, 125, 126, 126, 126, 
    127, 128, 127, 127, 127, 127, 127, 128, 129, 131, 129, 129, 128, 129, 128, 130, 128, 131, 131, 132, 
    133, 130, 129, 129, 130, 128, 129, 129, 129, 128, 128, 127, 125, 126, 125, 125, 126, 125, 125, 126, 
    126, 126, 126, 125, 124, 126, 126, 129, 128, 130, 133, 133, 135, 132, 132, 135, 136, 137, 135, 136, 
    136, 135, 135, 135, 134, 129, 128, 124, 128, 138, 149, 153, 154, 154, 160, 162, 169, 171, 166, 160, 
    154, 149, 149, 169, 150, 131, 147, 149, 127, 114, 110, 112, 122, 123, 136, 150, 152, 140, 144, 158, 
    173, 183, 184, 198, 197, 151, 135, 159, 167, 151, 136, 134, 134, 134, 135, 145, 156, 170, 179, 184, 
    189, 175, 153, 150, 151, 141, 142, 159, 166, 173, 169, 161, 153, 147, 143, 143, 143, 147, 147, 149, 
    152, 156, 155, 152, 148, 144, 144, 145, 143, 147, 152, 151, 144, 138, 139, 138, 141, 148, 149, 142, 
    131, 122, 118, 120, 122, 124, 123, 125, 131, 144, 156, 164, 165, 156, 145, 139, 136, 132, 130, 125, 
    124, 126, 128, 129, 131, 130, 129, 127, 127, 126, 127, 131, 137, 141, 144, 144, 144, 145, 144, 143, 
    143, 142, 140, 138, 135, 131, 130, 126, 126, 126, 126, 126, 127, 127, 129, 131, 132, 135, 135, 140, 
    137, 139, 139, 138, 137, 133, 132, 129, 129, 130, 133, 138, 142, 145, 149, 148, 151, 152, 152, 148, 
    139, 132, 124, 119, 121, 123, 128, 131, 129, 121, 116, 124, 127, 134, 136, 128, 133, 146, 156, 167, 
    176, 185, 193, 191, 189, 172, 161, 152, 148, 131, 130, 139, 151, 154, 150, 143, 139, 134, 130, 124, 
    134, 127, 117, 126, 138, 143, 144, 150, 152, 149, 145, 142, 136, 131, 126, 120, 122, 122, 125, 134, 
    145, 156, 148, 135, 119, 125, 139, 155, 153, 132, 125, 141, 147, 151, 153, 148, 139, 127, 123, 120, 
    120, 121, 123, 128, 128, 131, 136, 138, 136, 131, 128, 123, 119, 116, 117, 121, 125, 128, 130, 131, 
    129, 128, 127, 126, 122, 122, 121, 123, 125, 124, 124, 123, 122, 123, 122, 123, 124, 124, 124, 126, 
    127, 128, 125, 126, 132, 141, 147, 151, 160, 166, 154, 153, 153, 148, 133, 120, 125, 144, 156, 161, 
    161, 162, 159, 159, 159, 159, 155, 155, 153, 150, 154, 160, 160, 152, 138, 106, 103, 166, 137, 67, 
    58, 86, 85, 113, 142, 157, 124, 135, 134, 123, 136, 144, 131, 128, 106, 109, 117, 103, 120, 135, 
    164, 180, 126, 108, 128, 171, 173, 140, 164, 151, 149, 140, 127, 146, 156, 108, 160, 154, 82, 75, 
    80, 108, 103, 95, 135, 154, 142, 133, 135, 153, 116, 84, 101, 113, 122, 132, 141, 135, 126, 140, 
    172, 164, 157, 153, 140, 138, 147, 156, 163, 183, 174, 147, 88, 84, 97, 98, 100, 99, 106, 119, 
    119, 124, 107, 83, 189, 105, 112, 144, 156, 147, 140, 135, 137, 145, 151, 161, 158, 138, 120, 125, 
    141, 143, 143, 143, 147, 146, 144, 144, 145, 150, 151, 146, 139, 131, 134, 141, 146, 146, 137, 132, 
    127, 123, 116, 108, 108, 109, 111, 115, 120, 125, 129, 132, 134, 136, 138, 139, 139, 136, 134, 134, 
    135, 139, 143, 149, 149, 148, 148, 148, 155, 157, 151, 146, 144, 141, 135, 131, 134, 138, 133, 132, 
    119, 127, 137, 163, 162, 179, 178, 169, 166, 163, 161, 158, 149, 139, 127, 122, 122, 129, 137, 144, 
    149, 149, 141, 133, 125, 121, 117, 113, 113, 114, 115, 115, 113, 113, 115, 117, 119, 120, 120, 120, 
    121, 123, 123, 124, 126, 124, 125, 126, 127, 127, 127, 124, 122, 117, 111, 109, 105, 106, 110, 113, 
    119, 120, 120, 119, 116, 116, 116, 116, 118, 121, 121, 123, 124, 125, 125, 123, 125, 126, 127, 130, 
    131, 130, 128, 127, 125, 124, 125, 127, 128, 127, 130, 130, 135, 137, 138, 141, 143, 140, 139, 137, 
    140, 146, 152, 150, 150, 149, 143, 140, 135, 133, 131, 128, 127, 126, 126, 127, 131, 130, 128, 123, 
    116, 114, 114, 117, 122, 127, 128, 129, 126, 121, 118, 116, 117, 120, 124, 130, 133, 128, 124, 121, 
    117, 114, 115, 115, 115, 116, 119, 119, 121, 120, 118, 116, 116, 116, 114, 112, 113, 113, 112, 110, 
    106, 105, 105, 108, 110, 113, 115, 119, 122, 124, 124, 125, 120, 121, 120, 118, 116, 115, 113, 112, 
    111, 112, 109, 108, 107, 110, 112, 119, 121, 123, 123, 127, 132, 136, 134, 137, 137, 139, 139, 139, 
    144, 147, 146, 143, 136, 131, 127, 131, 135, 131, 129, 134, 134, 136, 135, 131, 124, 118, 117, 120, 
    120, 124, 125, 130, 133, 138, 138, 137, 138, 139, 141, 149, 159, 160, 157, 166, 167, 162, 171, 145, 
    137, 221, 227, 155, 189, 132, 114, 203, 86, 165, 38, 43, 69, 87, 133, 142, 127, 94, 66, 53, 
    63, 87, 104, 110, 117, 125, 134, 143, 152, 160, 164, 163, 163, 170, 178, 159, 146, 141, 139, 151, 
    151, 144, 133, 128, 123, 120, 118, 118, 122, 134, 152, 159, 156, 148, 141, 140, 135, 128, 123, 128, 
    131, 154, 169, 158, 193, 166, 162, 148, 181, 180, 157, 170, 152, 175, 167, 179, 180, 194, 176, 206, 
    131, 152, 189, 201, 180, 171, 153, 151, 166, 156, 162, 165, 159, 156, 162, 163, 163, 153, 158, 146, 
    136, 132, 131, 136, 143, 146, 141, 130, 130, 135, 135, 140, 141, 139, 136, 139, 139, 135, 131, 125, 
    121, 123, 125, 130, 135, 148, 151, 158, 157, 165, 157, 152, 153, 149, 141, 134, 128, 134, 129, 132, 
    134, 135, 134, 136, 142, 143, 144, 133, 120, 113, 115, 116, 117, 119, 120, 122, 127, 136, 132, 138, 
    142, 139, 144, 144, 142, 145, 143, 140, 140, 140, 139, 138, 137, 136, 129, 127, 124, 129, 140, 152, 
    155, 155, 158, 151, 151, 149, 145, 135, 126, 124, 121, 115, 119, 128, 132, 133, 137, 129, 114, 114, 
    121, 125, 133, 140, 137, 130, 128, 128, 132, 142, 153, 153, 153, 149, 147, 153, 164, 161, 165, 163, 
    166, 164, 160, 160, 162, 155, 157, 163, 162, 151, 147, 145, 145, 147, 147, 140, 138, 140, 149, 153, 
    143, 135, 132, 135, 139, 139, 138, 138, 136, 134, 137, 140, 140, 135, 137, 140, 142, 137, 139, 151, 
    166, 142, 124, 136, 140, 135, 110, 123, 139, 135, 157, 172, 170, 156, 150, 147, 133, 115, 92, 82, 
    114, 136, 132, 121, 113, 111, 117, 125, 132, 127, 121, 120, 118, 115, 116, 125, 134, 133, 127, 118, 
    116, 115, 113, 111, 110, 110, 111, 112, 113, 111, 112, 111, 110, 110, 111, 110, 110, 107, 108, 105, 
    107, 107, 107, 111, 114, 119, 122, 122, 122, 120, 120, 120, 118, 116, 115, 113, 113, 113, 110, 111, 
    121, 137, 144, 152, 154, 154, 150, 140, 128, 119, 114, 110, 107, 103, 105, 105, 107, 107, 108, 112, 
    119, 123, 123, 127, 128, 130, 132, 133, 131, 130, 126, 123, 119, 115, 114, 112, 110, 108, 106, 106, 
    108, 109, 109, 111, 110, 112, 110, 109, 109, 110, 109, 111, 110, 112, 111, 110, 108, 106, 107, 106, 
    106, 106, 106, 104, 106, 106, 107, 109, 107, 106, 105, 103, 104, 100, 99, 101, 101, 102, 103, 105, 
    105, 104, 104, 105, 105, 105, 105, 105, 107, 104, 103, 101, 101, 102, 100, 103, 103, 103, 105, 105, 
    106, 106, 106, 110, 112, 117, 120, 123, 123, 126, 125, 127, 127, 127, 127, 127, 127, 126, 124, 123, 
    124, 124, 120, 119, 118, 118, 116, 115, 116, 114, 115, 114, 110, 111, 111, 109, 108, 105, 105, 106, 
    105, 104, 106, 104, 107, 106, 106, 108, 110, 112, 115, 113, 112, 113, 111, 111, 113, 114, 113, 108, 
    106, 106, 108, 111, 112, 113, 116, 117, 115, 109, 113, 111, 110, 102, 108, 115, 107, 135, 138, 110, 
    213, 159, 85, 71, 152, 146, 150, 125, 140, 140, 119, 154, 160, 140, 88, 112, 129, 166, 140, 135, 
    145, 139, 140, 138, 131, 128, 139, 154, 149, 147, 147, 158, 162, 159, 166, 151, 150, 156, 133, 139, 
    134, 138, 147, 135, 140, 158, 152, 154, 148, 133, 129, 139, 162, 162, 125, 115, 127, 127, 149, 144, 
    135, 131, 131, 94, 85, 124, 119, 119, 124, 98, 123, 151, 111, 132, 116, 123, 130, 130, 129, 134, 
    135, 130, 127, 126, 133, 144, 149, 146, 146, 157, 163, 163, 166, 159, 163, 155, 149, 127, 114, 118, 
    142, 161, 157, 160, 153, 154, 159, 144, 138, 133, 140, 142, 137, 140, 142, 135, 135, 153, 141, 162, 
    171, 185, 185, 167, 163, 154, 171, 163, 151, 139, 165, 166, 144, 143, 148, 163, 146, 144, 141, 145, 
    136, 118, 124, 129, 133, 135, 130, 120, 111, 110, 107, 110, 110, 122, 141, 144, 162, 188, 174, 178, 
    170, 147, 144, 115, 149, 127, 132, 159, 149, 119, 135, 168, 174, 180, 157, 147, 134, 136, 146, 152, 
    161, 161, 157, 141, 159, 160, 160, 160, 139, 151, 155, 177, 175, 136, 160, 160, 165, 139, 138, 153, 
    142, 139, 162, 189, 148, 150, 156, 134, 126, 128, 154, 171, 253, 132, 153, 131, 127, 141, 123, 138, 
    137, 135, 138, 152, 135, 125, 130, 135, 137, 138, 134, 127, 115, 106, 106, 109, 114, 119, 118, 114, 
    109, 107, 107, 106, 106, 106, 105, 109, 120, 127, 120, 105, 104, 103, 107, 106, 106, 108, 112, 116, 
    122, 133, 146, 150, 148, 141, 133, 122, 114, 108, 107, 110, 113, 113, 109, 104, 98, 99, 101, 105, 
    105, 104, 103, 101, 103, 108, 117, 118, 123, 131, 140, 144, 136, 128, 123, 123, 121, 118, 114, 112, 
    114, 112, 109, 108, 109, 109, 108, 113, 111, 108, 106, 108, 111, 110, 112, 115, 114, 115, 117, 120, 
    119, 119, 121, 120, 121, 119, 119, 117, 118, 95, 81, 115, 140, 149, 151, 149, 145, 138, 132, 123, 
    119, 116, 116, 118, 121, 124, 122, 123, 120, 117, 116, 114, 116, 114, 113, 114, 120, 130, 143, 154, 
    153, 146, 128, 116, 114, 111, 109, 106, 104, 109, 117, 127, 132, 135, 139, 135, 138, 136, 136, 131, 
    123, 117, 112, 106, 103, 104, 104, 106, 109, 110, 110, 110, 110, 107, 105, 106, 110, 110, 115, 116, 
    115, 115, 114, 110, 110, 109, 107, 106, 103, 103, 103, 104, 107, 114, 117, 116, 114, 115, 113, 118, 
    119, 124, 125, 124, 122, 119, 115, 111, 108, 106, 102, 101, 101, 101, 103, 103, 104, 102, 100, 97, 
    103, 106, 108, 113, 116, 115, 113, 111, 112, 110, 109, 112, 119, 126, 130, 128, 118, 108, 97, 89, 
    84, 94, 108, 118, 133, 130, 114, 104, 113, 110, 109, 114, 114, 106, 103, 110, 121, 127, 126, 123, 
    128, 122, 117, 116, 105, 106, 104, 95, 95, 94, 101, 92, 99, 107, 113, 110, 92, 75, 92, 108, 
    113, 116, 119, 120, 118, 114, 110, 109, 111, 105, 105, 106, 112, 116, 115, 117, 115, 116, 116, 120, 
    125, 135, 124, 116, 117, 95, 98, 109, 108, 123, 135, 137, 127, 111, 101, 107, 121, 128, 128, 108, 
    111, 116, 118, 119, 122, 124, 123, 108, 104, 119, 119, 113, 111, 108, 109, 106, 115, 117, 122, 123, 
    121, 118, 124, 124, 101, 115, 132, 122, 111, 97, 115, 139, 144, 124, 123, 132, 135, 129, 139, 122, 
    131, 150, 163, 176, 173, 93, 103, 131, 139, 156, 141, 136, 138, 146, 140, 128, 121, 114, 102, 108, 
    133, 136, 127, 131, 135, 130, 127, 122, 127, 144, 161, 140, 146, 137, 133, 142, 143, 133, 123, 137, 
    139, 143, 146, 145, 147, 145, 136, 134, 131, 160, 174, 164, 151, 145, 141, 138, 134, 145, 132, 118, 
    127, 135, 148, 159, 141, 145, 141, 136, 139, 134, 131, 123, 121, 127, 124, 124, 127, 123, 110, 119, 
    127, 125, 123, 123, 121, 117, 114, 116, 119, 119, 125, 132, 135, 130, 124, 116, 113, 115, 119, 128, 
    131, 116, 110, 117, 120, 121, 122, 123, 125, 127, 129, 129, 131, 131, 130, 129, 130, 132, 139, 140, 
    122, 113, 113, 116, 116, 120, 123, 123, 116, 115, 116, 120, 107, 100, 110, 122, 133, 137, 132, 125, 
    129, 140, 149, 143, 144, 112, 101, 110, 122, 109, 98, 120, 155, 164, 110, 101, 110, 121, 125, 128, 
    139, 173, 153, 108, 108, 125, 172, 176, 153, 137, 127, 132, 131, 124, 123, 124, 126, 128, 126, 114, 
    107, 102, 103, 122, 142, 137, 129, 125, 126, 131, 135, 135, 140, 143, 135, 123, 129, 139, 144, 142, 
    127, 127, 124, 100, 116, 127, 121, 124, 139, 148, 149, 145, 123, 105, 101, 103, 114, 125, 136, 137, 
    138, 136, 135, 139, 132, 130, 129, 128, 135, 151, 148, 136, 130, 111, 95, 75, 87, 112, 137, 149, 
    148, 142, 146, 127, 103, 108, 113, 122, 139, 140, 127, 123, 131, 134, 132, 130, 130, 132, 133, 132, 
    130, 123, 121, 122, 110, 95, 103, 116, 123, 119, 119, 116, 119, 123, 134, 142, 144, 154, 156, 149, 
    150, 149, 158, 178, 132, 119, 126, 116, 116, 110, 122, 131, 136, 135, 123, 107, 107, 113, 116, 118, 
    123, 129, 131, 124, 115, 87, 99, 141, 159, 154, 152, 152, 155, 103, 112, 135, 160, 176, 156, 142, 
    139, 137, 134, 135, 151, 160, 129, 125, 145, 172, 160, 134, 114, 109, 118, 131, 127, 122, 113, 111, 
    118, 120, 115, 107, 101, 97, 94, 102, 119, 130, 133, 127, 120, 120, 117, 120, 126, 125, 126, 127, 
    128, 132, 135, 119, 113, 126, 131, 128, 115, 113, 115, 118, 126, 127, 131, 127, 114, 108, 92, 30, 
    2, 6, 73, 139, 157, 127, 155, 144, 132, 178, 171, 151, 85, 69, 87, 81, 83, 120, 101, 105, 
    133, 174, 168, 130, 98, 108, 115, 120, 126, 130, 144, 143, 127, 118, 117, 118, 121, 117, 112, 113, 
    114, 114, 110, 106, 99, 101, 111, 126, 139, 143, 145, 149, 146, 132, 128, 134, 134, 128, 119, 120, 
    128, 131, 130, 124, 123, 120, 117, 113, 114, 116, 116, 119, 123, 122, 119, 118, 117, 118, 122, 123, 
    125, 124, 121, 115, 113, 106, 106, 109, 115, 126, 136, 143, 143, 131, 112, 90, 101, 119, 125, 126, 
    127, 124, 121, 115, 120, 127, 131, 138, 133, 145, 158, 100, 78, 92, 108, 106, 113, 135, 138, 144, 
    153, 153, 144, 133, 127, 124, 135, 150, 140, 99, 70, 77, 117, 142, 139, 132, 132, 133, 139, 142, 
    137, 124, 110, 110, 112, 115, 117, 105, 94, 103, 116, 115, 119, 126, 129, 128, 128, 128, 126, 121, 
    120, 118, 118, 120, 127, 131, 134, 132, 130, 130, 127, 124, 127, 136, 127, 113, 113, 116, 121, 124, 
    132, 134, 136, 137, 129, 126, 130, 128, 130, 127, 124, 122, 115, 114, 114, 116, 114, 103, 97, 128, 
    127, 138, 134, 133, 135, 138, 136, 134, 125, 126, 131, 133, 143, 133, 127, 138, 141, 143, 123, 110, 
    125, 146, 151, 137, 136, 127, 126, 117, 114, 127, 125, 129, 148, 145, 149, 139, 151, 157, 152, 141, 
    141, 152, 165, 156, 146, 157, 139, 143, 136, 123, 114, 122, 137, 142, 137, 128, 123, 119, 117, 117, 
    117, 118, 114, 105, 99, 95, 102, 116, 131, 138, 138, 140, 127, 118, 110, 111, 109, 118, 129, 133, 
    131, 125, 119, 119, 119, 123, 131, 139, 144, 144, 146, 141, 145, 143, 161, 161, 174, 200, 143, 128, 
    157, 194, 204, 183, 154, 149, 107, 96, 106, 126, 134, 128, 116, 114, 114, 115, 113, 112, 118, 123, 
    122, 118, 113, 116, 124, 135, 141, 149, 152, 148, 147, 143, 132, 124, 124, 123, 123, 125, 128, 131, 
    132, 126, 119, 105, 96, 97, 104, 115, 112, 90, 92, 111, 124, 120, 121, 126, 129, 135, 136, 131, 
    119, 110, 125, 143, 145, 127, 174, 152, 126, 110, 104, 138, 161, 144, 143, 157, 157, 147, 132, 130, 
    146, 160, 157, 166, 153, 150, 145, 136, 120, 112, 111, 109, 120, 130, 131, 141, 151, 154, 148, 107, 
    96, 126, 129, 92, 60, 66, 104, 128, 113, 208, 174, 82, 83, 103, 87, 97, 112, 119, 116, 115, 
    116, 95, 97, 116, 130, 133, 124, 111, 113, 118, 108, 107, 103, 105, 110, 82, 109, 163, 172, 207, 
    168, 90, 69, 90, 119, 126, 123, 115, 110, 101, 85, 80, 97, 113, 118, 115, 113, 111, 106, 102, 
    101, 99, 93, 92, 101, 105, 111, 115, 109, 100, 101, 102, 106, 116, 142, 160, 144, 118, 103, 108, 
    119, 123, 128, 131, 135, 139, 141, 141, 139, 139, 136, 135, 140, 139, 143, 140, 134, 122, 118, 123, 
    131, 133, 133, 133, 131, 126, 129, 138, 155, 188, 176, 199, 170, 171, 99, 70, 85, 106, 118, 111, 
    119, 128, 139, 132, 112, 106, 108, 113, 128, 132, 132, 142, 144, 140, 138, 151, 148, 140, 142, 140, 
    138, 133, 131, 127, 123, 112, 113, 120, 122, 122, 119, 114, 110, 109, 107, 108, 118, 129, 139, 133, 
    119, 105, 98, 89, 100, 144, 154, 155, 146, 131, 124, 124, 121, 116, 115, 121, 133, 131, 127, 131, 
    133, 138, 133, 137, 142, 144, 139, 137, 137, 141, 146, 154, 146, 145, 160, 157, 166, 134, 141, 131, 
    156, 155, 155, 154, 132, 109, 107, 116, 123, 132, 143, 160, 159, 147, 143, 146, 150, 165, 155, 153, 
    131, 119, 121, 120, 128, 141, 160, 165, 136, 128, 121, 117, 126, 128, 140, 153, 140, 120, 108, 110, 
    137, 152, 154, 123, 122, 147, 167, 155, 152, 155, 146, 148, 152, 160, 152, 145, 143, 148, 149, 142, 
    138, 137, 135, 137, 131, 109, 101, 115, 131, 143, 143, 130, 124, 119, 119, 133, 145, 135, 136, 139, 
    150, 154, 149, 138, 129, 125, 123, 124, 119, 124, 127, 123, 121, 120, 123, 125, 125, 123, 117, 112, 
    105, 109, 114, 117, 113, 111, 110, 111, 116, 120, 124, 126, 129, 126, 124, 122, 119, 117, 118, 121, 
    121, 122, 120, 118, 120, 120, 129, 133, 144, 153, 153, 151, 167, 160, 165, 160, 153, 148, 143, 149, 
    162, 167, 157, 144, 138, 143, 147, 148, 147, 145, 145, 141, 138, 136, 139, 143, 144, 148, 148, 154, 
    164, 166, 146, 140, 139, 119, 114, 145, 183, 180, 161, 143, 162, 171, 173, 170, 148, 133, 119, 129, 
    138, 137, 131, 139, 155, 142, 134, 124, 131, 140, 129, 127, 141, 145, 128, 131, 168, 172, 153, 145, 
    139, 142, 147, 146, 144, 136, 130, 129, 134, 139, 141, 138, 136, 132, 127, 127, 127, 130, 130, 132, 
    132, 133, 139, 147, 148, 147, 144, 141, 141, 140, 143, 144, 146, 151, 141, 144, 149, 152, 153, 152, 
    148, 147, 148, 148, 152, 154, 136, 135, 155, 150, 145, 137, 134, 135, 146, 172, 199, 157, 172, 148, 
    255, 152, 85, 84, 44, 80, 74, 103, 107, 35, 28, 79, 109, 127, 116, 90, 91, 103, 106, 107, 
    100, 95, 113, 144, 158, 132, 117, 137, 142, 138, 131, 135, 139, 143, 151, 154, 131, 173, 147, 189, 
    147, 149, 138, 146, 228, 42, 152, 139, 245, 103, 222, 64, 246, 138, 143, 64, 127, 58, 99, 98, 
    76, 98, 123, 116, 142, 134, 166, 136, 244, 150, 191, 103, 211, 104, 149, 120, 158, 162, 193, 158, 
    170, 153, 168, 146, 143, 157, 163, 166, 152, 149, 141, 126, 131, 145, 139, 138, 138, 141, 149, 146, 
    161, 142, 126, 137, 166, 196, 151, 153, 153, 164, 172, 160, 146, 160, 166, 129, 205, 124, 211, 33, 
    83, 52, 53, 79, 61, 108, 110, 101, 98, 104, 111, 105, 118, 139, 129, 116, 121, 135, 159, 165, 
    168, 170, 167, 154, 140, 151, 180, 195, 171, 168, 173, 158, 177, 152, 146, 190, 204, 150, 160, 173, 
    211, 158, 158, 81, 124, 158, 140, 131, 160, 122, 98, 80, 107, 138, 139, 131, 150, 134, 69, 79, 
    113, 111, 102, 102, 125, 149, 158, 141, 117, 113, 80, 105, 130, 147, 134, 135, 143, 154, 153, 145, 
    151, 170, 174, 166, 145, 126, 114, 105, 103, 108, 108, 111, 112, 115, 121, 124, 126, 136, 142, 98, 
    74, 86, 113, 119, 114, 113, 120, 126, 129, 129, 113, 119, 136, 145, 145, 136, 136, 149, 154, 183, 
    164, 159, 160, 155, 123, 55, 78, 104, 129, 133, 119, 93, 74, 75, 77, 88, 107, 117, 132, 165, 
    113, 110, 160, 195, 176, 194, 180, 196, 143, 103, 144, 174, 115, 163, 179, 114, 157, 121, 152, 165, 
    160, 209, 109, 119, 59, 131, 103, 120, 123, 131, 144, 164, 150, 141, 126, 124, 152, 155, 181, 174, 
    141, 124, 102, 130, 164, 198, 185, 181, 123, 113, 147, 163, 135, 124, 122, 138, 142, 144, 127, 117, 
    124, 126, 131, 140, 137, 136, 142, 143, 144, 158, 155, 154, 124, 143, 137, 146, 155, 154, 149, 154, 
    149, 135, 134, 137, 140, 137, 130, 127, 124, 121, 121, 117, 110, 110, 115, 115, 116, 118, 123, 129, 
    130, 127, 127, 125, 121, 125, 126, 126, 108, 90, 84, 90, 96, 121, 144, 152, 135, 130, 127, 123, 
    122, 112, 105, 107, 110, 108, 107, 107, 107, 108, 113, 113, 114, 110, 107, 104, 98, 96, 98, 100, 
    104, 114, 120, 124, 128, 129, 133, 135, 135, 125, 119, 113, 119, 110, 110, 120, 125, 123, 119, 116, 
    125, 132, 116, 112, 98, 112, 135, 156, 161, 135, 130, 132, 140, 146, 128, 107, 110, 126, 133, 137, 
    144, 153, 152, 160, 162, 163, 152, 136, 160, 168, 172, 168, 183, 168, 169, 168, 173, 155, 139, 143, 
    149, 150, 144, 142, 135, 132, 123, 131, 123, 122, 121, 129, 132, 136, 137, 139, 133, 127, 125, 106, 
    101, 137, 168, 139, 149, 140, 134, 133, 131, 134, 121, 114, 118, 131, 136, 135, 129, 116, 124, 120, 
    115, 115, 120, 121, 123, 134, 140, 139, 126, 115, 113, 113, 116, 129, 141, 140, 128, 113, 118, 132, 
    135, 150, 158, 137, 143, 141, 144, 137, 119, 123, 134, 134, 126, 120, 118, 122, 132, 132, 131, 128, 
    131, 131, 132, 131, 124, 120, 115, 113, 115, 128, 143, 139, 127, 117, 123, 119, 118, 135, 143, 133, 
    128, 145, 147, 155, 159, 150, 164, 192, 172, 149, 150, 175, 174, 168, 177, 159, 150, 119, 132, 149, 
    149, 149, 136, 128, 135, 154, 148, 144, 187, 173, 195, 137, 135, 145, 150, 147, 135, 125, 123, 128, 
    133, 130, 129, 135, 147, 143, 133, 124, 125, 120, 109, 106, 110, 115, 123, 114, 116, 134, 137, 132, 
    141, 181, 162, 168, 157, 145, 161, 196, 163, 166, 112, 119, 141, 154, 178, 134, 131, 127, 132, 135, 
    135, 129, 127, 125, 132, 136, 140, 134, 137, 135, 135, 135, 136, 139, 135, 135, 130, 130, 138, 147, 
    166, 143, 155, 155, 159, 150, 138, 134, 143, 150, 151, 153, 151, 149, 137, 144, 148, 182, 191, 174, 
    155, 151, 152, 144, 135, 124, 124, 144, 149, 141, 136, 111, 120, 124, 122, 123, 125, 133, 134, 131, 
    132, 134, 134, 127, 116, 119, 129, 145, 144, 139, 138, 130, 123, 115, 125, 134, 149, 143, 136, 133, 
    131, 129, 129, 131, 133, 132, 134, 138, 141, 139, 125, 115, 119, 132, 135, 134, 134, 136, 134, 127, 
    121, 127, 130, 131, 134, 140, 135, 154, 178, 179, 145, 161, 149, 142, 188, 168, 206, 155, 143, 117, 
    105, 104, 115, 125, 133, 136, 135, 138, 132, 121, 106, 98, 94, 97, 99, 102, 107, 114, 104, 99, 
    100, 107, 109, 113, 113, 115, 111, 113, 112, 113, 117, 123, 129, 131, 130, 137, 136, 128, 119, 113, 
    106, 103, 104, 103, 104, 104, 107, 107, 102, 95, 92, 92, 98, 112, 127, 137, 126, 112, 105, 103, 
    110, 112, 103, 103, 108, 107, 101, 97, 101, 108, 113, 120, 124, 122, 115, 114, 123, 130, 139, 141, 
    144, 140, 137, 138, 140, 146, 140, 129, 131, 134, 139, 143, 163, 142, 128, 128, 138, 146, 144, 141, 
    148, 135, 110, 112, 121, 125, 119, 120, 122, 123, 115, 109, 105, 116, 129, 139, 144, 149, 148, 143, 
    140, 137, 132, 131, 134, 134, 138, 134, 133, 133, 131, 130, 133, 136, 136, 131, 126, 119, 124, 138, 
    140, 115, 114, 107, 91, 80, 91, 110, 127, 140, 150, 137, 127, 132, 135, 146, 175, 168, 136, 78, 
    85, 123, 135, 140, 136, 135, 135, 144, 162, 166, 158, 152, 147, 139, 133, 131, 130, 119, 108, 95, 
    96, 103, 112, 120, 131, 135, 134, 130, 124, 120, 117, 114, 116, 116, 116, 115, 113, 114, 115, 118, 
    116, 115, 117, 119, 122, 117, 116, 115, 114, 113, 112, 108, 106, 107, 116, 126, 132, 121, 112, 123, 
    155, 170, 145, 165, 162, 158, 142, 121, 132, 151, 157, 138, 136, 125, 125, 132, 119, 98, 102, 121, 
    130, 129, 131, 134, 139, 134, 122, 107, 99, 94, 108, 113, 140, 141, 145, 167, 156, 174, 161, 161, 
    155, 160, 160, 160, 149, 134, 127, 132, 142, 157, 165, 169, 174, 162, 170, 141, 140, 144, 155, 143, 
    130, 117, 134, 140, 130, 123, 134, 142, 160, 182, 148, 144, 135, 142, 143, 138, 131, 128, 135, 132, 
    135, 138, 127, 131, 135, 147, 141, 139, 143, 155, 149, 139, 131, 122, 125, 138, 129, 135, 124, 115, 
    106, 107, 104, 108, 93, 100, 118, 129, 136, 138, 136, 135, 126, 120, 116, 117, 119, 119, 119, 123, 
    127, 131, 134, 134, 126, 119, 117, 116, 114, 117, 139, 183, 142, 146, 138, 150, 138, 146, 146, 149, 
    142, 137, 140, 145, 149, 148, 139, 131, 124, 129, 133, 129, 124, 129, 139, 145, 151, 155, 139, 150, 
    148, 141, 135, 148, 177, 169, 170, 152, 164, 174, 153, 176, 112, 128, 168, 164, 123, 128, 138, 185, 
    201, 162, 193, 168, 188, 160, 158, 115, 99, 133, 166, 163, 146, 132, 124, 123, 122, 119, 127, 148, 
    146, 149, 150, 145, 144, 143, 147, 136, 121, 110, 112, 117, 122, 129, 137, 145, 134, 134, 142, 148, 
    147, 144, 146, 151, 131, 115, 117, 127, 148, 149, 153, 157, 148, 135, 148, 157, 167, 178, 160, 111, 
    133, 135, 145, 139, 135, 128, 128, 131, 133, 140, 146, 143, 161, 155, 161, 172, 160, 118, 126, 180, 
    165, 174, 142, 135, 131, 131, 123, 111, 115, 116, 124, 136, 151, 164, 165, 134, 131, 135, 153, 174, 
    160, 135, 125, 135, 147, 154, 156, 152, 153, 144, 124, 127, 133, 139, 147, 133, 120, 118, 121, 126, 
    130, 136, 140, 141, 132, 128, 128, 124, 105, 105, 119, 132, 127, 124, 123, 120, 112, 104, 104, 109, 
    116, 123, 120, 113, 118, 112, 99, 101, 118, 122, 144, 174, 167, 176, 170, 175, 161, 147, 153, 179, 
    178, 187, 182, 191, 189, 144, 232, 153, 176, 110, 101, 96, 110, 132, 124, 113, 133, 152, 149, 155, 
    163, 171, 132, 132, 147, 168, 155, 141, 151, 136, 143, 153, 159, 162, 159, 161, 146, 150, 157, 150, 
    148, 143, 138, 134, 142, 143, 139, 138, 143, 149, 148, 148, 153, 157, 158, 163, 167, 170, 163, 153, 
    144, 141, 143, 145, 136, 142, 160, 159, 150, 156, 164, 183, 149, 133, 169, 161, 162, 159, 160, 164, 
    179, 156, 162, 185, 130, 132, 112, 131, 128, 148, 168, 163, 130, 114, 124, 148, 140, 148, 148, 144, 
    132, 113, 113, 134, 153, 162, 158, 157, 150, 142, 120, 116, 126, 128, 125, 121, 124, 132, 141, 140, 
    126, 124, 131, 139, 143, 151, 154, 148, 138, 118, 138, 166, 128, 116, 139, 149, 139, 136, 130, 127, 
    126, 119, 115, 112, 116, 133, 152, 160, 160, 149, 137, 129, 124, 126, 131, 141, 144, 141, 146, 144, 
    125, 127, 133, 139, 136, 144, 140, 148, 139, 143, 144, 143, 140, 126, 131, 141, 149, 147, 131, 121, 
    115, 116, 124, 131, 133, 138, 144, 148, 144, 136, 128, 122, 119, 121, 127, 128, 127, 125, 120, 116, 
    112, 111, 111, 112, 114, 113, 116, 116, 120, 119, 120, 119, 117, 113, 114, 123, 131, 135, 145, 157, 
    167, 162, 150, 126, 106, 101, 99, 104, 107, 111, 115, 121, 124, 129, 127, 127, 126, 128, 132, 135, 
    136, 139, 140, 139, 137, 135, 137, 135, 134, 129, 125, 119, 115, 111, 109, 106, 108, 112, 115, 120, 
    123, 125, 130, 128, 127, 125, 121, 113, 110, 106, 104, 103, 102, 101, 101, 106, 107, 112, 113, 115, 
    114, 113, 114, 115, 113, 116, 116, 113, 127, 153, 162, 160, 150, 144, 137, 132, 127, 123, 118, 112, 
    107, 108, 109, 107, 106, 106, 107, 106, 108, 110, 115, 118, 123, 122, 118, 116, 117, 115, 118, 122, 
    124, 116, 107, 108, 111, 110, 114, 118, 120, 124, 126, 129, 128, 126, 125, 123, 123, 124, 123, 122, 
    120, 119, 120, 120, 119, 120, 120, 119, 118, 117, 116, 115, 116, 117, 116, 117, 117, 118, 119, 118, 
    117, 116, 116, 114, 113, 111, 114, 117, 116, 114, 113, 110, 108, 105, 100, 100, 101, 103, 106, 109, 
    115, 119, 119, 117, 114, 116, 116, 121, 132, 138, 133, 119, 111, 115, 114, 125, 131, 142, 151, 161, 
    140, 80, 120, 144, 187, 142, 240, 167, 182, 162, 138, 139, 160, 142, 153, 144, 128, 107, 135, 151, 
    143, 140, 123, 120, 140, 147, 164, 180, 159, 156, 131, 122, 116, 123, 143, 171, 183, 167, 155, 156, 
    188, 221, 180, 139, 149, 161, 166, 163, 163, 142, 129, 131, 129, 135, 137, 128, 125, 145, 141, 136, 
    126, 113, 113, 128, 137, 134, 127, 129, 145, 149, 140, 130, 139, 151, 164, 178, 154, 121, 121, 161, 
    184, 151, 154, 165, 158, 148, 127, 129, 139, 152, 160, 157, 158, 153, 139, 122, 119, 130, 140, 144, 
    149, 144, 144, 143, 131, 128, 132, 142, 146, 139, 136, 132, 124, 106, 95, 105, 127, 135, 110, 99, 
    109, 127, 135, 121, 106, 125, 142, 145, 149, 151, 146, 142, 153, 164, 173, 171, 156, 135, 123, 123, 
    127, 130, 130, 123, 116, 112, 116, 123, 128, 126, 122, 117, 118, 127, 138, 140, 125, 107, 97, 95, 
    101, 110, 112, 101, 89, 92, 111, 119, 116, 112, 118, 132, 138, 138, 135, 133, 137, 146, 149, 138, 
    123, 113, 113, 115, 117, 121, 124, 127, 129, 128, 127, 126, 120, 110, 103, 103, 108, 121, 134, 133, 
    120, 114, 112, 98, 91, 106, 121, 122, 114, 105, 98, 98, 103, 109, 127, 161, 187, 175, 145, 117, 
    127, 136, 138, 144, 143, 135, 127, 123, 126, 132, 130, 132, 126, 112, 110, 118, 126, 129, 129, 124, 
    120, 116, 117, 121, 122, 120, 119, 116, 112, 112, 120, 133, 139, 140, 132, 132, 136, 138, 138, 134, 
    125, 124, 122, 123, 121, 121, 121, 119, 120, 123, 124, 121, 123, 131, 134, 138, 141, 140, 141, 149, 
    138, 127, 116, 106, 120, 151, 150, 141, 137, 134, 133, 140, 143, 140, 145, 147, 147, 152, 160, 158, 
    159, 156, 157, 162, 162, 146, 135, 132, 134, 137, 141, 145, 148, 144, 139, 136, 132, 130, 127, 128, 
    130, 125, 114, 110, 109, 112, 117, 120, 123, 125, 129, 124, 117, 114, 113, 111, 107, 104, 111, 123, 
    130, 127, 120, 118, 123, 130, 135, 138, 140, 132, 117, 109, 104, 101, 102, 109, 119, 118, 117, 115, 
    116, 121, 124, 124, 122, 118, 120, 123, 130, 133, 133, 131, 130, 130, 131, 131, 132, 135, 133, 131, 
    128, 128, 131, 135, 140, 132, 123, 117, 115, 118, 125, 126, 123, 120, 124, 125, 132, 134, 135, 134, 
    135, 135, 134, 131, 130, 131, 134, 131, 135, 138, 139, 140, 138, 138, 134, 125, 121, 123, 127, 129, 
    128, 128, 124, 123, 123, 126, 127, 130, 128, 130, 132, 133, 134, 132, 131, 126, 125, 123, 121, 122, 
    121, 123, 122, 120, 119, 119, 119, 125, 130, 131, 131, 126, 126, 125, 123, 124, 122, 121, 116, 113, 
    113, 113, 115, 116, 119, 121, 122, 124, 127, 127, 123, 124, 121, 119, 116, 117, 117, 117, 119, 120, 
    122, 123, 123, 124, 125, 120, 121, 123, 123, 124, 128, 128, 124, 116, 101, 100, 115, 127, 145, 140, 
    165, 171, 169, 171, 169, 166, 157, 152, 151, 154, 154, 165, 167, 150, 145, 146, 136, 109, 118, 125, 
    113, 125, 120, 107, 112, 126, 133, 133, 130, 129, 136, 142, 139, 134, 137, 138, 139, 146, 149, 148, 
    143, 143, 141, 139, 135, 132, 132, 129, 119, 109, 134, 168, 175, 162, 146, 130, 135, 144, 149, 144, 
    135, 127, 121, 127, 136, 139, 135, 127, 120, 113, 107, 106, 103, 101, 100, 101, 103, 103, 104, 105, 
    106, 108, 109, 111, 111, 114, 129, 148, 148, 132, 120, 110, 120, 128, 135, 142, 142, 141, 143, 141, 
    140, 141, 138, 135, 131, 127, 122, 119, 119, 120, 128, 134, 136, 135, 131, 130, 127, 127, 129, 130, 
    130, 127, 125, 126, 126, 124, 124, 126, 125, 124, 121, 114, 104, 98, 102, 108, 115, 113, 115, 118, 
    124, 129, 133, 134, 131, 125, 120, 118, 115, 113, 113, 115, 117, 121, 125, 129, 130, 128, 124, 119, 
    115, 113, 110, 107, 105, 103, 104, 110, 111, 113, 116, 119, 123, 118, 114, 115, 120, 126, 130, 135, 
    137, 129, 123, 124, 127, 117, 94, 84, 94, 114, 125, 129, 130, 133, 131, 127, 124, 123, 122, 118, 
    113, 108, 105, 105, 108, 110, 115, 113, 113, 113, 112, 111, 108, 104, 102, 105, 105, 106, 107, 108, 
    109, 113, 113, 114, 114, 115, 115, 116, 116, 113, 113, 113, 114, 116, 116, 114, 112, 110, 112, 110, 
    115, 118, 118, 119, 123, 125, 123, 122, 121, 115, 112, 111, 113, 115, 116, 116, 111, 109, 112, 111, 
    115, 116, 114, 109, 110, 110, 111, 110, 113, 113, 115, 118, 119, 117, 117, 116, 116, 115, 114, 116, 
    117, 116, 113, 110, 106, 105, 106, 108, 111, 113, 117, 118, 119, 119, 120, 120, 118, 110, 105, 103, 
    103, 105, 108, 110, 113, 113, 115, 114, 116, 114, 114, 113, 116, 114, 115, 117, 119, 118, 119, 117, 
    117, 116, 116, 116, 121, 119, 121, 119, 118, 118, 119, 117, 118, 118, 120, 116, 113, 114, 113, 110, 
    110, 110, 113, 114, 116, 117, 118, 120, 122, 122, 119, 117, 117, 115, 115, 114, 114, 113, 116, 116, 
    118, 120, 123, 122, 123, 123, 125, 122, 118, 116, 116, 115, 116, 116, 112, 113, 113, 111, 111, 111, 
    109, 109, 112, 114, 121, 125, 129, 132, 133, 128, 131, 133, 131, 124, 113, 114, 116, 139, 164, 134, 
    120, 112, 131, 155, 178, 172, 180, 149, 108, 115, 137, 148, 144, 148, 166, 157, 149, 141, 144, 139, 
    124, 123, 135, 145, 148, 142, 138, 134, 131, 131, 138, 151, 164, 159, 151, 140, 135, 139, 143, 143, 
    128, 113, 123, 138, 160, 172, 163, 144, 127, 126, 123, 116, 111, 103, 100, 102, 113, 123, 125, 113, 
    107, 103, 104, 106, 108, 90, 90, 94, 90, 98, 113, 116, 109, 95, 94, 97, 111, 131, 152, 175, 
    167, 137, 123, 124, 129, 133, 133, 129, 128, 128, 127, 130, 133, 131, 130, 132, 134, 136, 136, 136, 
    131, 129, 126, 125, 124, 124, 124, 125, 123, 123, 125, 124, 127, 127, 128, 127, 127, 125, 123123
};
const PROGMEM uint16_t offset_tbl[] = {
7, 360, 720, 1075, 1437, 1797, 2155, 2507, 2881, 3246, 3601, 3953, 4305, 4664, 5023, 5375, 5727 
};
