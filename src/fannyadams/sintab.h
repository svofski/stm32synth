const int16_t sintab[4096]={0,2,3,5,6,8,9,11,13,14,16,17,19,20,22,24,25,27,28,30,31,33,35,36,38,39,41,42,44,46,47,49,50,52,53,55,57,58,60,61,63,64,66,67,69,71,72,74,75,77,78,80,82,83,85,86,88,89,91,93,94,96,97,99,100,102,103,105,107,108,110,111,113,114,116,118,119,121,122,124,125,127,128,130,132,133,135,136,138,139,141,142,144,146,147,149,150,152,153,155,156,158,160,161,163,164,166,167,169,170,172,174,175,177,178,180,181,183,184,186,187,189,191,192,194,195,197,198,200,201,203,204,206,207,209,211,212,214,215,217,218,220,221,223,224,226,227,229,230,232,234,235,237,238,240,241,243,244,246,247,249,250,252,253,255,256,258,259,261,263,264,266,267,269,270,272,273,275,276,278,279,281,282,284,285,287,288,290,291,293,294,296,297,299,300,302,303,305,306,308,309,311,312,314,315,317,318,320,321,323,324,326,327,329,330,332,333,335,336,338,339,341,342,343,345,346,348,349,351,352,354,355,357,358,360,361,363,364,366,367,369,370,371,373,374,376,377,379,380,382,383,385,386,388,389,390,392,393,395,396,398,399,401,402,403,405,406,408,409,411,412,414,415,416,418,419,421,422,424,425,426,428,429,431,432,434,435,436,438,439,441,442,443,445,446,448,449,451,452,453,455,456,458,459,460,462,463,465,466,467,469,470,472,473,474,476,477,479,480,481,483,484,485,487,488,490,491,492,494,495,497,498,499,501,502,503,505,506,507,509,510,512,513,514,516,517,518,520,521,522,524,525,526,528,529,530,532,533,535,536,537,539,540,541,543,544,545,547,548,549,550,552,553,554,556,557,558,560,561,562,564,565,566,568,569,570,572,573,574,575,577,578,579,581,582,583,584,586,587,588,590,591,592,593,595,596,597,599,600,601,602,604,605,606,607,609,610,611,613,614,615,616,618,619,620,621,623,624,625,626,628,629,630,631,632,634,635,636,637,639,640,641,642,644,645,646,647,648,650,651,652,653,654,656,657,658,659,660,662,663,664,665,666,668,669,670,671,672,674,675,676,677,678,679,681,682,683,684,685,687,688,689,690,691,692,693,695,696,697,698,699,700,702,703,704,705,706,707,708,709,711,712,713,714,715,716,717,719,720,721,722,723,724,725,726,727,729,730,731,732,733,734,735,736,737,738,739,741,742,743,744,745,746,747,748,749,750,751,752,753,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,782,783,784,785,786,787,788,789,790,791,792,793,794,795,796,797,798,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,822,823,824,825,826,827,828,829,830,831,832,833,834,834,835,836,837,838,839,840,841,842,843,843,844,845,846,847,848,849,850,851,851,852,853,854,855,856,857,857,858,859,860,861,862,863,863,864,865,866,867,868,868,869,870,871,872,873,873,874,875,876,877,878,878,879,880,881,882,882,883,884,885,885,886,887,888,889,889,890,891,892,893,893,894,895,896,896,897,898,899,899,900,901,902,902,903,904,905,905,906,907,907,908,909,910,910,911,912,913,913,914,915,915,916,917,917,918,919,920,920,921,922,922,923,924,924,925,926,926,927,928,928,929,930,930,931,932,932,933,934,934,935,936,936,937,937,938,939,939,940,941,941,942,942,943,944,944,945,945,946,947,947,948,948,949,950,950,951,951,952,953,953,954,954,955,955,956,957,957,958,958,959,959,960,960,961,961,962,963,963,964,964,965,965,966,966,967,967,968,968,969,969,970,970,971,971,972,972,973,973,974,974,975,975,976,976,977,977,978,978,979,979,979,980,980,981,981,982,982,983,983,983,984,984,985,985,986,986,986,987,987,988,988,989,989,989,990,990,991,991,991,992,992,993,993,993,994,994,994,995,995,996,996,996,997,997,997,998,998,998,999,999,999,1000,1000,1000,1001,1001,1001,1002,1002,1002,1003,1003,1003,1004,1004,1004,1005,1005,1005,1006,1006,1006,1006,1007,1007,1007,1008,1008,1008,1008,1009,1009,1009,1009,1010,1010,1010,1010,1011,1011,1011,1011,1012,1012,1012,1012,1013,1013,1013,1013,1014,1014,1014,1014,1014,1015,1015,1015,1015,1016,1016,1016,1016,1016,1016,1017,1017,1017,1017,1017,1018,1018,1018,1018,1018,1018,1019,1019,1019,1019,1019,1019,1020,1020,1020,1020,1020,1020,1020,1020,1021,1021,1021,1021,1021,1021,1021,1021,1022,1022,1022,1022,1022,1022,1022,1022,1022,1022,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1022,1022,1022,1022,1022,1022,1022,1022,1022,1022,1021,1021,1021,1021,1021,1021,1021,1021,1020,1020,1020,1020,1020,1020,1020,1020,1019,1019,1019,1019,1019,1019,1018,1018,1018,1018,1018,1018,1017,1017,1017,1017,1017,1016,1016,1016,1016,1016,1016,1015,1015,1015,1015,1014,1014,1014,1014,1014,1013,1013,1013,1013,1012,1012,1012,1012,1011,1011,1011,1011,1010,1010,1010,1010,1009,1009,1009,1009,1008,1008,1008,1008,1007,1007,1007,1006,1006,1006,1006,1005,1005,1005,1004,1004,1004,1003,1003,1003,1002,1002,1002,1001,1001,1001,1000,1000,1000,999,999,999,998,998,998,997,997,997,996,996,996,995,995,994,994,994,993,993,993,992,992,991,991,991,990,990,989,989,989,988,988,987,987,986,986,986,985,985,984,984,983,983,983,982,982,981,981,980,980,979,979,979,978,978,977,977,976,976,975,975,974,974,973,973,972,972,971,971,970,970,969,969,968,968,967,967,966,966,965,965,964,964,963,963,962,961,961,960,960,959,959,958,958,957,957,956,955,955,954,954,953,953,952,951,951,950,950,949,948,948,947,947,946,945,945,944,944,943,942,942,941,941,940,939,939,938,937,937,936,936,935,934,934,933,932,932,931,930,930,929,928,928,927,926,926,925,924,924,923,922,922,921,920,920,919,918,917,917,916,915,915,914,913,913,912,911,910,910,909,908,907,907,906,905,905,904,903,902,902,901,900,899,899,898,897,896,896,895,894,893,893,892,891,890,889,889,888,887,886,885,885,884,883,882,882,881,880,879,878,878,877,876,875,874,873,873,872,871,870,869,868,868,867,866,865,864,863,863,862,861,860,859,858,857,857,856,855,854,853,852,851,851,850,849,848,847,846,845,844,843,843,842,841,840,839,838,837,836,835,834,834,833,832,831,830,829,828,827,826,825,824,823,822,822,821,820,819,818,817,816,815,814,813,812,811,810,809,808,807,806,805,804,803,802,801,800,799,798,798,797,796,795,794,793,792,791,790,789,788,787,786,785,784,783,782,780,779,778,777,776,775,774,773,772,771,770,769,768,767,766,765,764,763,762,761,760,759,758,757,756,755,753,752,751,750,749,748,747,746,745,744,743,742,741,739,738,737,736,735,734,733,732,731,730,729,727,726,725,724,723,722,721,720,719,717,716,715,714,713,712,711,709,708,707,706,705,704,703,702,700,699,698,697,696,695,693,692,691,690,689,688,687,685,684,683,682,681,679,678,677,676,675,674,672,671,670,669,668,666,665,664,663,662,660,659,658,657,656,654,653,652,651,650,648,647,646,645,644,642,641,640,639,637,636,635,634,632,631,630,629,628,626,625,624,623,621,620,619,618,616,615,614,613,611,610,609,607,606,605,604,602,601,600,599,597,596,595,593,592,591,590,588,587,586,584,583,582,581,579,578,577,575,574,573,572,570,569,568,566,565,564,562,561,560,558,557,556,554,553,552,550,549,548,547,545,544,543,541,540,539,537,536,535,533,532,530,529,528,526,525,524,522,521,520,518,517,516,514,513,512,510,509,507,506,505,503,502,501,499,498,497,495,494,492,491,490,488,487,485,484,483,481,480,479,477,476,474,473,472,470,469,467,466,465,463,462,460,459,458,456,455,453,452,451,449,448,446,445,443,442,441,439,438,436,435,434,432,431,429,428,426,425,424,422,421,419,418,416,415,414,412,411,409,408,406,405,403,402,401,399,398,396,395,393,392,390,389,388,386,385,383,382,380,379,377,376,374,373,371,370,369,367,366,364,363,361,360,358,357,355,354,352,351,349,348,346,345,343,342,341,339,338,336,335,333,332,330,329,327,326,324,323,321,320,318,317,315,314,312,311,309,308,306,305,303,302,300,299,297,296,294,293,291,290,288,287,285,284,282,281,279,278,276,275,273,272,270,269,267,266,264,263,261,259,258,256,255,253,252,250,249,247,246,244,243,241,240,238,237,235,234,232,230,229,227,226,224,223,221,220,218,217,215,214,212,211,209,207,206,204,203,201,200,198,197,195,194,192,191,189,187,186,184,183,181,180,178,177,175,174,172,170,169,167,166,164,163,161,160,158,156,155,153,152,150,149,147,146,144,142,141,139,138,136,135,133,132,130,128,127,125,124,122,121,119,118,116,114,113,111,110,108,107,105,103,102,100,99,97,96,94,93,91,89,88,86,85,83,82,80,78,77,75,74,72,71,69,67,66,64,63,61,60,58,57,55,53,52,50,49,47,46,44,42,41,39,38,36,35,33,31,30,28,27,25,24,22,20,19,17,16,14,13,11,9,8,6,5,3,2,0,-2,-3,-5,-6,-8,-9,-11,-13,-14,-16,-17,-19,-20,-22,-24,-25,-27,-28,-30,-31,-33,-35,-36,-38,-39,-41,-42,-44,-46,-47,-49,-50,-52,-53,-55,-57,-58,-60,-61,-63,-64,-66,-67,-69,-71,-72,-74,-75,-77,-78,-80,-82,-83,-85,-86,-88,-89,-91,-93,-94,-96,-97,-99,-100,-102,-103,-105,-107,-108,-110,-111,-113,-114,-116,-118,-119,-121,-122,-124,-125,-127,-128,-130,-132,-133,-135,-136,-138,-139,-141,-142,-144,-146,-147,-149,-150,-152,-153,-155,-156,-158,-160,-161,-163,-164,-166,-167,-169,-170,-172,-174,-175,-177,-178,-180,-181,-183,-184,-186,-187,-189,-191,-192,-194,-195,-197,-198,-200,-201,-203,-204,-206,-207,-209,-211,-212,-214,-215,-217,-218,-220,-221,-223,-224,-226,-227,-229,-230,-232,-234,-235,-237,-238,-240,-241,-243,-244,-246,-247,-249,-250,-252,-253,-255,-256,-258,-259,-261,-263,-264,-266,-267,-269,-270,-272,-273,-275,-276,-278,-279,-281,-282,-284,-285,-287,-288,-290,-291,-293,-294,-296,-297,-299,-300,-302,-303,-305,-306,-308,-309,-311,-312,-314,-315,-317,-318,-320,-321,-323,-324,-326,-327,-329,-330,-332,-333,-335,-336,-338,-339,-341,-342,-343,-345,-346,-348,-349,-351,-352,-354,-355,-357,-358,-360,-361,-363,-364,-366,-367,-369,-370,-371,-373,-374,-376,-377,-379,-380,-382,-383,-385,-386,-388,-389,-390,-392,-393,-395,-396,-398,-399,-401,-402,-403,-405,-406,-408,-409,-411,-412,-414,-415,-416,-418,-419,-421,-422,-424,-425,-426,-428,-429,-431,-432,-434,-435,-436,-438,-439,-441,-442,-443,-445,-446,-448,-449,-451,-452,-453,-455,-456,-458,-459,-460,-462,-463,-465,-466,-467,-469,-470,-472,-473,-474,-476,-477,-479,-480,-481,-483,-484,-485,-487,-488,-490,-491,-492,-494,-495,-497,-498,-499,-501,-502,-503,-505,-506,-507,-509,-510,-512,-513,-514,-516,-517,-518,-520,-521,-522,-524,-525,-526,-528,-529,-530,-532,-533,-535,-536,-537,-539,-540,-541,-543,-544,-545,-547,-548,-549,-550,-552,-553,-554,-556,-557,-558,-560,-561,-562,-564,-565,-566,-568,-569,-570,-572,-573,-574,-575,-577,-578,-579,-581,-582,-583,-584,-586,-587,-588,-590,-591,-592,-593,-595,-596,-597,-599,-600,-601,-602,-604,-605,-606,-607,-609,-610,-611,-613,-614,-615,-616,-618,-619,-620,-621,-623,-624,-625,-626,-628,-629,-630,-631,-632,-634,-635,-636,-637,-639,-640,-641,-642,-644,-645,-646,-647,-648,-650,-651,-652,-653,-654,-656,-657,-658,-659,-660,-662,-663,-664,-665,-666,-668,-669,-670,-671,-672,-674,-675,-676,-677,-678,-679,-681,-682,-683,-684,-685,-687,-688,-689,-690,-691,-692,-693,-695,-696,-697,-698,-699,-700,-702,-703,-704,-705,-706,-707,-708,-709,-711,-712,-713,-714,-715,-716,-717,-719,-720,-721,-722,-723,-724,-725,-726,-727,-729,-730,-731,-732,-733,-734,-735,-736,-737,-738,-739,-741,-742,-743,-744,-745,-746,-747,-748,-749,-750,-751,-752,-753,-755,-756,-757,-758,-759,-760,-761,-762,-763,-764,-765,-766,-767,-768,-769,-770,-771,-772,-773,-774,-775,-776,-777,-778,-779,-780,-782,-783,-784,-785,-786,-787,-788,-789,-790,-791,-792,-793,-794,-795,-796,-797,-798,-798,-799,-800,-801,-802,-803,-804,-805,-806,-807,-808,-809,-810,-811,-812,-813,-814,-815,-816,-817,-818,-819,-820,-821,-822,-822,-823,-824,-825,-826,-827,-828,-829,-830,-831,-832,-833,-834,-834,-835,-836,-837,-838,-839,-840,-841,-842,-843,-843,-844,-845,-846,-847,-848,-849,-850,-851,-851,-852,-853,-854,-855,-856,-857,-857,-858,-859,-860,-861,-862,-863,-863,-864,-865,-866,-867,-868,-868,-869,-870,-871,-872,-873,-873,-874,-875,-876,-877,-878,-878,-879,-880,-881,-882,-882,-883,-884,-885,-885,-886,-887,-888,-889,-889,-890,-891,-892,-893,-893,-894,-895,-896,-896,-897,-898,-899,-899,-900,-901,-902,-902,-903,-904,-905,-905,-906,-907,-907,-908,-909,-910,-910,-911,-912,-913,-913,-914,-915,-915,-916,-917,-917,-918,-919,-920,-920,-921,-922,-922,-923,-924,-924,-925,-926,-926,-927,-928,-928,-929,-930,-930,-931,-932,-932,-933,-934,-934,-935,-936,-936,-937,-937,-938,-939,-939,-940,-941,-941,-942,-942,-943,-944,-944,-945,-945,-946,-947,-947,-948,-948,-949,-950,-950,-951,-951,-952,-953,-953,-954,-954,-955,-955,-956,-957,-957,-958,-958,-959,-959,-960,-960,-961,-961,-962,-963,-963,-964,-964,-965,-965,-966,-966,-967,-967,-968,-968,-969,-969,-970,-970,-971,-971,-972,-972,-973,-973,-974,-974,-975,-975,-976,-976,-977,-977,-978,-978,-979,-979,-979,-980,-980,-981,-981,-982,-982,-983,-983,-983,-984,-984,-985,-985,-986,-986,-986,-987,-987,-988,-988,-989,-989,-989,-990,-990,-991,-991,-991,-992,-992,-993,-993,-993,-994,-994,-994,-995,-995,-996,-996,-996,-997,-997,-997,-998,-998,-998,-999,-999,-999,-1000,-1000,-1000,-1001,-1001,-1001,-1002,-1002,-1002,-1003,-1003,-1003,-1004,-1004,-1004,-1005,-1005,-1005,-1006,-1006,-1006,-1006,-1007,-1007,-1007,-1008,-1008,-1008,-1008,-1009,-1009,-1009,-1009,-1010,-1010,-1010,-1010,-1011,-1011,-1011,-1011,-1012,-1012,-1012,-1012,-1013,-1013,-1013,-1013,-1014,-1014,-1014,-1014,-1014,-1015,-1015,-1015,-1015,-1016,-1016,-1016,-1016,-1016,-1016,-1017,-1017,-1017,-1017,-1017,-1018,-1018,-1018,-1018,-1018,-1018,-1019,-1019,-1019,-1019,-1019,-1019,-1020,-1020,-1020,-1020,-1020,-1020,-1020,-1020,-1021,-1021,-1021,-1021,-1021,-1021,-1021,-1021,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1024,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1023,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1022,-1021,-1021,-1021,-1021,-1021,-1021,-1021,-1021,-1020,-1020,-1020,-1020,-1020,-1020,-1020,-1020,-1019,-1019,-1019,-1019,-1019,-1019,-1018,-1018,-1018,-1018,-1018,-1018,-1017,-1017,-1017,-1017,-1017,-1016,-1016,-1016,-1016,-1016,-1016,-1015,-1015,-1015,-1015,-1014,-1014,-1014,-1014,-1014,-1013,-1013,-1013,-1013,-1012,-1012,-1012,-1012,-1011,-1011,-1011,-1011,-1010,-1010,-1010,-1010,-1009,-1009,-1009,-1009,-1008,-1008,-1008,-1008,-1007,-1007,-1007,-1006,-1006,-1006,-1006,-1005,-1005,-1005,-1004,-1004,-1004,-1003,-1003,-1003,-1002,-1002,-1002,-1001,-1001,-1001,-1000,-1000,-1000,-999,-999,-999,-998,-998,-998,-997,-997,-997,-996,-996,-996,-995,-995,-994,-994,-994,-993,-993,-993,-992,-992,-991,-991,-991,-990,-990,-989,-989,-989,-988,-988,-987,-987,-986,-986,-986,-985,-985,-984,-984,-983,-983,-983,-982,-982,-981,-981,-980,-980,-979,-979,-979,-978,-978,-977,-977,-976,-976,-975,-975,-974,-974,-973,-973,-972,-972,-971,-971,-970,-970,-969,-969,-968,-968,-967,-967,-966,-966,-965,-965,-964,-964,-963,-963,-962,-961,-961,-960,-960,-959,-959,-958,-958,-957,-957,-956,-955,-955,-954,-954,-953,-953,-952,-951,-951,-950,-950,-949,-948,-948,-947,-947,-946,-945,-945,-944,-944,-943,-942,-942,-941,-941,-940,-939,-939,-938,-937,-937,-936,-936,-935,-934,-934,-933,-932,-932,-931,-930,-930,-929,-928,-928,-927,-926,-926,-925,-924,-924,-923,-922,-922,-921,-920,-920,-919,-918,-917,-917,-916,-915,-915,-914,-913,-913,-912,-911,-910,-910,-909,-908,-907,-907,-906,-905,-905,-904,-903,-902,-902,-901,-900,-899,-899,-898,-897,-896,-896,-895,-894,-893,-893,-892,-891,-890,-889,-889,-888,-887,-886,-885,-885,-884,-883,-882,-882,-881,-880,-879,-878,-878,-877,-876,-875,-874,-873,-873,-872,-871,-870,-869,-868,-868,-867,-866,-865,-864,-863,-863,-862,-861,-860,-859,-858,-857,-857,-856,-855,-854,-853,-852,-851,-851,-850,-849,-848,-847,-846,-845,-844,-843,-843,-842,-841,-840,-839,-838,-837,-836,-835,-834,-834,-833,-832,-831,-830,-829,-828,-827,-826,-825,-824,-823,-822,-822,-821,-820,-819,-818,-817,-816,-815,-814,-813,-812,-811,-810,-809,-808,-807,-806,-805,-804,-803,-802,-801,-800,-799,-798,-798,-797,-796,-795,-794,-793,-792,-791,-790,-789,-788,-787,-786,-785,-784,-783,-782,-780,-779,-778,-777,-776,-775,-774,-773,-772,-771,-770,-769,-768,-767,-766,-765,-764,-763,-762,-761,-760,-759,-758,-757,-756,-755,-753,-752,-751,-750,-749,-748,-747,-746,-745,-744,-743,-742,-741,-739,-738,-737,-736,-735,-734,-733,-732,-731,-730,-729,-727,-726,-725,-724,-723,-722,-721,-720,-719,-717,-716,-715,-714,-713,-712,-711,-709,-708,-707,-706,-705,-704,-703,-702,-700,-699,-698,-697,-696,-695,-693,-692,-691,-690,-689,-688,-687,-685,-684,-683,-682,-681,-679,-678,-677,-676,-675,-674,-672,-671,-670,-669,-668,-666,-665,-664,-663,-662,-660,-659,-658,-657,-656,-654,-653,-652,-651,-650,-648,-647,-646,-645,-644,-642,-641,-640,-639,-637,-636,-635,-634,-632,-631,-630,-629,-628,-626,-625,-624,-623,-621,-620,-619,-618,-616,-615,-614,-613,-611,-610,-609,-607,-606,-605,-604,-602,-601,-600,-599,-597,-596,-595,-593,-592,-591,-590,-588,-587,-586,-584,-583,-582,-581,-579,-578,-577,-575,-574,-573,-572,-570,-569,-568,-566,-565,-564,-562,-561,-560,-558,-557,-556,-554,-553,-552,-550,-549,-548,-547,-545,-544,-543,-541,-540,-539,-537,-536,-535,-533,-532,-530,-529,-528,-526,-525,-524,-522,-521,-520,-518,-517,-516,-514,-513,-512,-510,-509,-507,-506,-505,-503,-502,-501,-499,-498,-497,-495,-494,-492,-491,-490,-488,-487,-485,-484,-483,-481,-480,-479,-477,-476,-474,-473,-472,-470,-469,-467,-466,-465,-463,-462,-460,-459,-458,-456,-455,-453,-452,-451,-449,-448,-446,-445,-443,-442,-441,-439,-438,-436,-435,-434,-432,-431,-429,-428,-426,-425,-424,-422,-421,-419,-418,-416,-415,-414,-412,-411,-409,-408,-406,-405,-403,-402,-401,-399,-398,-396,-395,-393,-392,-390,-389,-388,-386,-385,-383,-382,-380,-379,-377,-376,-374,-373,-371,-370,-369,-367,-366,-364,-363,-361,-360,-358,-357,-355,-354,-352,-351,-349,-348,-346,-345,-343,-342,-341,-339,-338,-336,-335,-333,-332,-330,-329,-327,-326,-324,-323,-321,-320,-318,-317,-315,-314,-312,-311,-309,-308,-306,-305,-303,-302,-300,-299,-297,-296,-294,-293,-291,-290,-288,-287,-285,-284,-282,-281,-279,-278,-276,-275,-273,-272,-270,-269,-267,-266,-264,-263,-261,-259,-258,-256,-255,-253,-252,-250,-249,-247,-246,-244,-243,-241,-240,-238,-237,-235,-234,-232,-230,-229,-227,-226,-224,-223,-221,-220,-218,-217,-215,-214,-212,-211,-209,-207,-206,-204,-203,-201,-200,-198,-197,-195,-194,-192,-191,-189,-187,-186,-184,-183,-181,-180,-178,-177,-175,-174,-172,-170,-169,-167,-166,-164,-163,-161,-160,-158,-156,-155,-153,-152,-150,-149,-147,-146,-144,-142,-141,-139,-138,-136,-135,-133,-132,-130,-128,-127,-125,-124,-122,-121,-119,-118,-116,-114,-113,-111,-110,-108,-107,-105,-103,-102,-100,-99,-97,-96,-94,-93,-91,-89,-88,-86,-85,-83,-82,-80,-78,-77,-75,-74,-72,-71,-69,-67,-66,-64,-63,-61,-60,-58,-57,-55,-53,-52,-50,-49,-47,-46,-44,-42,-41,-39,-38,-36,-35,-33,-31,-30,-28,-27,-25,-24,-22,-20,-19,-17,-16,-14,-13,-11,-9,-8,-6,-5,-3,-2};
#define sintab_mask 4095
#define FIX 20
