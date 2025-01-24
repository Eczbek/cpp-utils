#pragma once

#include "../pp/at.hpp"
#include "../pp/cat.hpp"

#define XIEITE_UNTIL(idx_, ...) XIEITE_CAT_PRIM(XIEITE_DETAIL_UNTIL_, idx_)(__VA_ARGS__)

#define XIEITE_DETAIL_UNTIL_0(...)
#define XIEITE_DETAIL_UNTIL_1(...) XIEITE_AT(0, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_2(...) XIEITE_DETAIL_UNTIL_1(__VA_ARGS__), XIEITE_AT(1, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_3(...) XIEITE_DETAIL_UNTIL_2(__VA_ARGS__), XIEITE_AT(2, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_4(...) XIEITE_DETAIL_UNTIL_3(__VA_ARGS__), XIEITE_AT(3, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_5(...) XIEITE_DETAIL_UNTIL_4(__VA_ARGS__), XIEITE_AT(4, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_6(...) XIEITE_DETAIL_UNTIL_5(__VA_ARGS__), XIEITE_AT(5, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_7(...) XIEITE_DETAIL_UNTIL_6(__VA_ARGS__), XIEITE_AT(6, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_8(...) XIEITE_DETAIL_UNTIL_7(__VA_ARGS__), XIEITE_AT(7, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_9(...) XIEITE_DETAIL_UNTIL_8(__VA_ARGS__), XIEITE_AT(8, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_10(...) XIEITE_DETAIL_UNTIL_9(__VA_ARGS__), XIEITE_AT(9, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_11(...) XIEITE_DETAIL_UNTIL_10(__VA_ARGS__), XIEITE_AT(10, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_12(...) XIEITE_DETAIL_UNTIL_11(__VA_ARGS__), XIEITE_AT(11, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_13(...) XIEITE_DETAIL_UNTIL_12(__VA_ARGS__), XIEITE_AT(12, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_14(...) XIEITE_DETAIL_UNTIL_13(__VA_ARGS__), XIEITE_AT(13, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_15(...) XIEITE_DETAIL_UNTIL_14(__VA_ARGS__), XIEITE_AT(14, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_16(...) XIEITE_DETAIL_UNTIL_15(__VA_ARGS__), XIEITE_AT(15, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_17(...) XIEITE_DETAIL_UNTIL_16(__VA_ARGS__), XIEITE_AT(16, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_18(...) XIEITE_DETAIL_UNTIL_17(__VA_ARGS__), XIEITE_AT(17, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_19(...) XIEITE_DETAIL_UNTIL_18(__VA_ARGS__), XIEITE_AT(18, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_20(...) XIEITE_DETAIL_UNTIL_19(__VA_ARGS__), XIEITE_AT(19, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_21(...) XIEITE_DETAIL_UNTIL_20(__VA_ARGS__), XIEITE_AT(20, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_22(...) XIEITE_DETAIL_UNTIL_21(__VA_ARGS__), XIEITE_AT(21, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_23(...) XIEITE_DETAIL_UNTIL_22(__VA_ARGS__), XIEITE_AT(22, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_24(...) XIEITE_DETAIL_UNTIL_23(__VA_ARGS__), XIEITE_AT(23, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_25(...) XIEITE_DETAIL_UNTIL_24(__VA_ARGS__), XIEITE_AT(24, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_26(...) XIEITE_DETAIL_UNTIL_25(__VA_ARGS__), XIEITE_AT(25, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_27(...) XIEITE_DETAIL_UNTIL_26(__VA_ARGS__), XIEITE_AT(26, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_28(...) XIEITE_DETAIL_UNTIL_27(__VA_ARGS__), XIEITE_AT(27, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_29(...) XIEITE_DETAIL_UNTIL_28(__VA_ARGS__), XIEITE_AT(28, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_30(...) XIEITE_DETAIL_UNTIL_29(__VA_ARGS__), XIEITE_AT(29, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_31(...) XIEITE_DETAIL_UNTIL_30(__VA_ARGS__), XIEITE_AT(30, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_32(...) XIEITE_DETAIL_UNTIL_31(__VA_ARGS__), XIEITE_AT(31, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_33(...) XIEITE_DETAIL_UNTIL_32(__VA_ARGS__), XIEITE_AT(32, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_34(...) XIEITE_DETAIL_UNTIL_33(__VA_ARGS__), XIEITE_AT(33, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_35(...) XIEITE_DETAIL_UNTIL_34(__VA_ARGS__), XIEITE_AT(34, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_36(...) XIEITE_DETAIL_UNTIL_35(__VA_ARGS__), XIEITE_AT(35, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_37(...) XIEITE_DETAIL_UNTIL_36(__VA_ARGS__), XIEITE_AT(36, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_38(...) XIEITE_DETAIL_UNTIL_37(__VA_ARGS__), XIEITE_AT(37, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_39(...) XIEITE_DETAIL_UNTIL_38(__VA_ARGS__), XIEITE_AT(38, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_40(...) XIEITE_DETAIL_UNTIL_39(__VA_ARGS__), XIEITE_AT(39, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_41(...) XIEITE_DETAIL_UNTIL_40(__VA_ARGS__), XIEITE_AT(40, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_42(...) XIEITE_DETAIL_UNTIL_41(__VA_ARGS__), XIEITE_AT(41, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_43(...) XIEITE_DETAIL_UNTIL_42(__VA_ARGS__), XIEITE_AT(42, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_44(...) XIEITE_DETAIL_UNTIL_43(__VA_ARGS__), XIEITE_AT(43, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_45(...) XIEITE_DETAIL_UNTIL_44(__VA_ARGS__), XIEITE_AT(44, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_46(...) XIEITE_DETAIL_UNTIL_45(__VA_ARGS__), XIEITE_AT(45, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_47(...) XIEITE_DETAIL_UNTIL_46(__VA_ARGS__), XIEITE_AT(46, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_48(...) XIEITE_DETAIL_UNTIL_47(__VA_ARGS__), XIEITE_AT(47, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_49(...) XIEITE_DETAIL_UNTIL_48(__VA_ARGS__), XIEITE_AT(48, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_50(...) XIEITE_DETAIL_UNTIL_49(__VA_ARGS__), XIEITE_AT(49, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_51(...) XIEITE_DETAIL_UNTIL_50(__VA_ARGS__), XIEITE_AT(50, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_52(...) XIEITE_DETAIL_UNTIL_51(__VA_ARGS__), XIEITE_AT(51, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_53(...) XIEITE_DETAIL_UNTIL_52(__VA_ARGS__), XIEITE_AT(52, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_54(...) XIEITE_DETAIL_UNTIL_53(__VA_ARGS__), XIEITE_AT(53, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_55(...) XIEITE_DETAIL_UNTIL_54(__VA_ARGS__), XIEITE_AT(54, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_56(...) XIEITE_DETAIL_UNTIL_55(__VA_ARGS__), XIEITE_AT(55, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_57(...) XIEITE_DETAIL_UNTIL_56(__VA_ARGS__), XIEITE_AT(56, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_58(...) XIEITE_DETAIL_UNTIL_57(__VA_ARGS__), XIEITE_AT(57, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_59(...) XIEITE_DETAIL_UNTIL_58(__VA_ARGS__), XIEITE_AT(58, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_60(...) XIEITE_DETAIL_UNTIL_59(__VA_ARGS__), XIEITE_AT(59, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_61(...) XIEITE_DETAIL_UNTIL_60(__VA_ARGS__), XIEITE_AT(60, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_62(...) XIEITE_DETAIL_UNTIL_61(__VA_ARGS__), XIEITE_AT(61, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_63(...) XIEITE_DETAIL_UNTIL_62(__VA_ARGS__), XIEITE_AT(62, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_64(...) XIEITE_DETAIL_UNTIL_63(__VA_ARGS__), XIEITE_AT(63, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_65(...) XIEITE_DETAIL_UNTIL_64(__VA_ARGS__), XIEITE_AT(64, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_66(...) XIEITE_DETAIL_UNTIL_65(__VA_ARGS__), XIEITE_AT(65, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_67(...) XIEITE_DETAIL_UNTIL_66(__VA_ARGS__), XIEITE_AT(66, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_68(...) XIEITE_DETAIL_UNTIL_67(__VA_ARGS__), XIEITE_AT(67, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_69(...) XIEITE_DETAIL_UNTIL_68(__VA_ARGS__), XIEITE_AT(68, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_70(...) XIEITE_DETAIL_UNTIL_69(__VA_ARGS__), XIEITE_AT(69, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_71(...) XIEITE_DETAIL_UNTIL_70(__VA_ARGS__), XIEITE_AT(70, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_72(...) XIEITE_DETAIL_UNTIL_71(__VA_ARGS__), XIEITE_AT(71, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_73(...) XIEITE_DETAIL_UNTIL_72(__VA_ARGS__), XIEITE_AT(72, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_74(...) XIEITE_DETAIL_UNTIL_73(__VA_ARGS__), XIEITE_AT(73, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_75(...) XIEITE_DETAIL_UNTIL_74(__VA_ARGS__), XIEITE_AT(74, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_76(...) XIEITE_DETAIL_UNTIL_75(__VA_ARGS__), XIEITE_AT(75, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_77(...) XIEITE_DETAIL_UNTIL_76(__VA_ARGS__), XIEITE_AT(76, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_78(...) XIEITE_DETAIL_UNTIL_77(__VA_ARGS__), XIEITE_AT(77, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_79(...) XIEITE_DETAIL_UNTIL_78(__VA_ARGS__), XIEITE_AT(78, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_80(...) XIEITE_DETAIL_UNTIL_79(__VA_ARGS__), XIEITE_AT(79, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_81(...) XIEITE_DETAIL_UNTIL_80(__VA_ARGS__), XIEITE_AT(80, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_82(...) XIEITE_DETAIL_UNTIL_81(__VA_ARGS__), XIEITE_AT(81, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_83(...) XIEITE_DETAIL_UNTIL_82(__VA_ARGS__), XIEITE_AT(82, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_84(...) XIEITE_DETAIL_UNTIL_83(__VA_ARGS__), XIEITE_AT(83, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_85(...) XIEITE_DETAIL_UNTIL_84(__VA_ARGS__), XIEITE_AT(84, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_86(...) XIEITE_DETAIL_UNTIL_85(__VA_ARGS__), XIEITE_AT(85, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_87(...) XIEITE_DETAIL_UNTIL_86(__VA_ARGS__), XIEITE_AT(86, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_88(...) XIEITE_DETAIL_UNTIL_87(__VA_ARGS__), XIEITE_AT(87, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_89(...) XIEITE_DETAIL_UNTIL_88(__VA_ARGS__), XIEITE_AT(88, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_90(...) XIEITE_DETAIL_UNTIL_89(__VA_ARGS__), XIEITE_AT(89, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_91(...) XIEITE_DETAIL_UNTIL_90(__VA_ARGS__), XIEITE_AT(90, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_92(...) XIEITE_DETAIL_UNTIL_91(__VA_ARGS__), XIEITE_AT(91, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_93(...) XIEITE_DETAIL_UNTIL_92(__VA_ARGS__), XIEITE_AT(92, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_94(...) XIEITE_DETAIL_UNTIL_93(__VA_ARGS__), XIEITE_AT(93, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_95(...) XIEITE_DETAIL_UNTIL_94(__VA_ARGS__), XIEITE_AT(94, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_96(...) XIEITE_DETAIL_UNTIL_95(__VA_ARGS__), XIEITE_AT(95, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_97(...) XIEITE_DETAIL_UNTIL_96(__VA_ARGS__), XIEITE_AT(96, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_98(...) XIEITE_DETAIL_UNTIL_97(__VA_ARGS__), XIEITE_AT(97, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_99(...) XIEITE_DETAIL_UNTIL_98(__VA_ARGS__), XIEITE_AT(98, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_100(...) XIEITE_DETAIL_UNTIL_99(__VA_ARGS__), XIEITE_AT(99, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_101(...) XIEITE_DETAIL_UNTIL_100(__VA_ARGS__), XIEITE_AT(100, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_102(...) XIEITE_DETAIL_UNTIL_101(__VA_ARGS__), XIEITE_AT(101, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_103(...) XIEITE_DETAIL_UNTIL_102(__VA_ARGS__), XIEITE_AT(102, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_104(...) XIEITE_DETAIL_UNTIL_103(__VA_ARGS__), XIEITE_AT(103, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_105(...) XIEITE_DETAIL_UNTIL_104(__VA_ARGS__), XIEITE_AT(104, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_106(...) XIEITE_DETAIL_UNTIL_105(__VA_ARGS__), XIEITE_AT(105, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_107(...) XIEITE_DETAIL_UNTIL_106(__VA_ARGS__), XIEITE_AT(106, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_108(...) XIEITE_DETAIL_UNTIL_107(__VA_ARGS__), XIEITE_AT(107, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_109(...) XIEITE_DETAIL_UNTIL_108(__VA_ARGS__), XIEITE_AT(108, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_110(...) XIEITE_DETAIL_UNTIL_109(__VA_ARGS__), XIEITE_AT(109, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_111(...) XIEITE_DETAIL_UNTIL_110(__VA_ARGS__), XIEITE_AT(110, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_112(...) XIEITE_DETAIL_UNTIL_111(__VA_ARGS__), XIEITE_AT(111, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_113(...) XIEITE_DETAIL_UNTIL_112(__VA_ARGS__), XIEITE_AT(112, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_114(...) XIEITE_DETAIL_UNTIL_113(__VA_ARGS__), XIEITE_AT(113, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_115(...) XIEITE_DETAIL_UNTIL_114(__VA_ARGS__), XIEITE_AT(114, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_116(...) XIEITE_DETAIL_UNTIL_115(__VA_ARGS__), XIEITE_AT(115, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_117(...) XIEITE_DETAIL_UNTIL_116(__VA_ARGS__), XIEITE_AT(116, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_118(...) XIEITE_DETAIL_UNTIL_117(__VA_ARGS__), XIEITE_AT(117, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_119(...) XIEITE_DETAIL_UNTIL_118(__VA_ARGS__), XIEITE_AT(118, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_120(...) XIEITE_DETAIL_UNTIL_119(__VA_ARGS__), XIEITE_AT(119, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_121(...) XIEITE_DETAIL_UNTIL_120(__VA_ARGS__), XIEITE_AT(120, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_122(...) XIEITE_DETAIL_UNTIL_121(__VA_ARGS__), XIEITE_AT(121, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_123(...) XIEITE_DETAIL_UNTIL_122(__VA_ARGS__), XIEITE_AT(122, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_124(...) XIEITE_DETAIL_UNTIL_123(__VA_ARGS__), XIEITE_AT(123, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_125(...) XIEITE_DETAIL_UNTIL_124(__VA_ARGS__), XIEITE_AT(124, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_126(...) XIEITE_DETAIL_UNTIL_125(__VA_ARGS__), XIEITE_AT(125, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_127(...) XIEITE_DETAIL_UNTIL_126(__VA_ARGS__), XIEITE_AT(126, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_128(...) XIEITE_DETAIL_UNTIL_127(__VA_ARGS__), XIEITE_AT(127, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_129(...) XIEITE_DETAIL_UNTIL_128(__VA_ARGS__), XIEITE_AT(128, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_130(...) XIEITE_DETAIL_UNTIL_129(__VA_ARGS__), XIEITE_AT(129, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_131(...) XIEITE_DETAIL_UNTIL_130(__VA_ARGS__), XIEITE_AT(130, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_132(...) XIEITE_DETAIL_UNTIL_131(__VA_ARGS__), XIEITE_AT(131, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_133(...) XIEITE_DETAIL_UNTIL_132(__VA_ARGS__), XIEITE_AT(132, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_134(...) XIEITE_DETAIL_UNTIL_133(__VA_ARGS__), XIEITE_AT(133, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_135(...) XIEITE_DETAIL_UNTIL_134(__VA_ARGS__), XIEITE_AT(134, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_136(...) XIEITE_DETAIL_UNTIL_135(__VA_ARGS__), XIEITE_AT(135, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_137(...) XIEITE_DETAIL_UNTIL_136(__VA_ARGS__), XIEITE_AT(136, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_138(...) XIEITE_DETAIL_UNTIL_137(__VA_ARGS__), XIEITE_AT(137, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_139(...) XIEITE_DETAIL_UNTIL_138(__VA_ARGS__), XIEITE_AT(138, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_140(...) XIEITE_DETAIL_UNTIL_139(__VA_ARGS__), XIEITE_AT(139, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_141(...) XIEITE_DETAIL_UNTIL_140(__VA_ARGS__), XIEITE_AT(140, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_142(...) XIEITE_DETAIL_UNTIL_141(__VA_ARGS__), XIEITE_AT(141, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_143(...) XIEITE_DETAIL_UNTIL_142(__VA_ARGS__), XIEITE_AT(142, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_144(...) XIEITE_DETAIL_UNTIL_143(__VA_ARGS__), XIEITE_AT(143, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_145(...) XIEITE_DETAIL_UNTIL_144(__VA_ARGS__), XIEITE_AT(144, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_146(...) XIEITE_DETAIL_UNTIL_145(__VA_ARGS__), XIEITE_AT(145, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_147(...) XIEITE_DETAIL_UNTIL_146(__VA_ARGS__), XIEITE_AT(146, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_148(...) XIEITE_DETAIL_UNTIL_147(__VA_ARGS__), XIEITE_AT(147, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_149(...) XIEITE_DETAIL_UNTIL_148(__VA_ARGS__), XIEITE_AT(148, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_150(...) XIEITE_DETAIL_UNTIL_149(__VA_ARGS__), XIEITE_AT(149, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_151(...) XIEITE_DETAIL_UNTIL_150(__VA_ARGS__), XIEITE_AT(150, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_152(...) XIEITE_DETAIL_UNTIL_151(__VA_ARGS__), XIEITE_AT(151, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_153(...) XIEITE_DETAIL_UNTIL_152(__VA_ARGS__), XIEITE_AT(152, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_154(...) XIEITE_DETAIL_UNTIL_153(__VA_ARGS__), XIEITE_AT(153, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_155(...) XIEITE_DETAIL_UNTIL_154(__VA_ARGS__), XIEITE_AT(154, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_156(...) XIEITE_DETAIL_UNTIL_155(__VA_ARGS__), XIEITE_AT(155, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_157(...) XIEITE_DETAIL_UNTIL_156(__VA_ARGS__), XIEITE_AT(156, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_158(...) XIEITE_DETAIL_UNTIL_157(__VA_ARGS__), XIEITE_AT(157, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_159(...) XIEITE_DETAIL_UNTIL_158(__VA_ARGS__), XIEITE_AT(158, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_160(...) XIEITE_DETAIL_UNTIL_159(__VA_ARGS__), XIEITE_AT(159, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_161(...) XIEITE_DETAIL_UNTIL_160(__VA_ARGS__), XIEITE_AT(160, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_162(...) XIEITE_DETAIL_UNTIL_161(__VA_ARGS__), XIEITE_AT(161, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_163(...) XIEITE_DETAIL_UNTIL_162(__VA_ARGS__), XIEITE_AT(162, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_164(...) XIEITE_DETAIL_UNTIL_163(__VA_ARGS__), XIEITE_AT(163, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_165(...) XIEITE_DETAIL_UNTIL_164(__VA_ARGS__), XIEITE_AT(164, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_166(...) XIEITE_DETAIL_UNTIL_165(__VA_ARGS__), XIEITE_AT(165, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_167(...) XIEITE_DETAIL_UNTIL_166(__VA_ARGS__), XIEITE_AT(166, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_168(...) XIEITE_DETAIL_UNTIL_167(__VA_ARGS__), XIEITE_AT(167, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_169(...) XIEITE_DETAIL_UNTIL_168(__VA_ARGS__), XIEITE_AT(168, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_170(...) XIEITE_DETAIL_UNTIL_169(__VA_ARGS__), XIEITE_AT(169, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_171(...) XIEITE_DETAIL_UNTIL_170(__VA_ARGS__), XIEITE_AT(170, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_172(...) XIEITE_DETAIL_UNTIL_171(__VA_ARGS__), XIEITE_AT(171, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_173(...) XIEITE_DETAIL_UNTIL_172(__VA_ARGS__), XIEITE_AT(172, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_174(...) XIEITE_DETAIL_UNTIL_173(__VA_ARGS__), XIEITE_AT(173, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_175(...) XIEITE_DETAIL_UNTIL_174(__VA_ARGS__), XIEITE_AT(174, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_176(...) XIEITE_DETAIL_UNTIL_175(__VA_ARGS__), XIEITE_AT(175, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_177(...) XIEITE_DETAIL_UNTIL_176(__VA_ARGS__), XIEITE_AT(176, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_178(...) XIEITE_DETAIL_UNTIL_177(__VA_ARGS__), XIEITE_AT(177, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_179(...) XIEITE_DETAIL_UNTIL_178(__VA_ARGS__), XIEITE_AT(178, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_180(...) XIEITE_DETAIL_UNTIL_179(__VA_ARGS__), XIEITE_AT(179, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_181(...) XIEITE_DETAIL_UNTIL_180(__VA_ARGS__), XIEITE_AT(180, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_182(...) XIEITE_DETAIL_UNTIL_181(__VA_ARGS__), XIEITE_AT(181, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_183(...) XIEITE_DETAIL_UNTIL_182(__VA_ARGS__), XIEITE_AT(182, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_184(...) XIEITE_DETAIL_UNTIL_183(__VA_ARGS__), XIEITE_AT(183, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_185(...) XIEITE_DETAIL_UNTIL_184(__VA_ARGS__), XIEITE_AT(184, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_186(...) XIEITE_DETAIL_UNTIL_185(__VA_ARGS__), XIEITE_AT(185, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_187(...) XIEITE_DETAIL_UNTIL_186(__VA_ARGS__), XIEITE_AT(186, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_188(...) XIEITE_DETAIL_UNTIL_187(__VA_ARGS__), XIEITE_AT(187, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_189(...) XIEITE_DETAIL_UNTIL_188(__VA_ARGS__), XIEITE_AT(188, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_190(...) XIEITE_DETAIL_UNTIL_189(__VA_ARGS__), XIEITE_AT(189, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_191(...) XIEITE_DETAIL_UNTIL_190(__VA_ARGS__), XIEITE_AT(190, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_192(...) XIEITE_DETAIL_UNTIL_191(__VA_ARGS__), XIEITE_AT(191, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_193(...) XIEITE_DETAIL_UNTIL_192(__VA_ARGS__), XIEITE_AT(192, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_194(...) XIEITE_DETAIL_UNTIL_193(__VA_ARGS__), XIEITE_AT(193, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_195(...) XIEITE_DETAIL_UNTIL_194(__VA_ARGS__), XIEITE_AT(194, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_196(...) XIEITE_DETAIL_UNTIL_195(__VA_ARGS__), XIEITE_AT(195, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_197(...) XIEITE_DETAIL_UNTIL_196(__VA_ARGS__), XIEITE_AT(196, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_198(...) XIEITE_DETAIL_UNTIL_197(__VA_ARGS__), XIEITE_AT(197, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_199(...) XIEITE_DETAIL_UNTIL_198(__VA_ARGS__), XIEITE_AT(198, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_200(...) XIEITE_DETAIL_UNTIL_199(__VA_ARGS__), XIEITE_AT(199, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_201(...) XIEITE_DETAIL_UNTIL_200(__VA_ARGS__), XIEITE_AT(200, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_202(...) XIEITE_DETAIL_UNTIL_201(__VA_ARGS__), XIEITE_AT(201, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_203(...) XIEITE_DETAIL_UNTIL_202(__VA_ARGS__), XIEITE_AT(202, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_204(...) XIEITE_DETAIL_UNTIL_203(__VA_ARGS__), XIEITE_AT(203, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_205(...) XIEITE_DETAIL_UNTIL_204(__VA_ARGS__), XIEITE_AT(204, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_206(...) XIEITE_DETAIL_UNTIL_205(__VA_ARGS__), XIEITE_AT(205, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_207(...) XIEITE_DETAIL_UNTIL_206(__VA_ARGS__), XIEITE_AT(206, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_208(...) XIEITE_DETAIL_UNTIL_207(__VA_ARGS__), XIEITE_AT(207, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_209(...) XIEITE_DETAIL_UNTIL_208(__VA_ARGS__), XIEITE_AT(208, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_210(...) XIEITE_DETAIL_UNTIL_209(__VA_ARGS__), XIEITE_AT(209, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_211(...) XIEITE_DETAIL_UNTIL_210(__VA_ARGS__), XIEITE_AT(210, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_212(...) XIEITE_DETAIL_UNTIL_211(__VA_ARGS__), XIEITE_AT(211, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_213(...) XIEITE_DETAIL_UNTIL_212(__VA_ARGS__), XIEITE_AT(212, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_214(...) XIEITE_DETAIL_UNTIL_213(__VA_ARGS__), XIEITE_AT(213, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_215(...) XIEITE_DETAIL_UNTIL_214(__VA_ARGS__), XIEITE_AT(214, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_216(...) XIEITE_DETAIL_UNTIL_215(__VA_ARGS__), XIEITE_AT(215, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_217(...) XIEITE_DETAIL_UNTIL_216(__VA_ARGS__), XIEITE_AT(216, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_218(...) XIEITE_DETAIL_UNTIL_217(__VA_ARGS__), XIEITE_AT(217, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_219(...) XIEITE_DETAIL_UNTIL_218(__VA_ARGS__), XIEITE_AT(218, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_220(...) XIEITE_DETAIL_UNTIL_219(__VA_ARGS__), XIEITE_AT(219, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_221(...) XIEITE_DETAIL_UNTIL_220(__VA_ARGS__), XIEITE_AT(220, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_222(...) XIEITE_DETAIL_UNTIL_221(__VA_ARGS__), XIEITE_AT(221, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_223(...) XIEITE_DETAIL_UNTIL_222(__VA_ARGS__), XIEITE_AT(222, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_224(...) XIEITE_DETAIL_UNTIL_223(__VA_ARGS__), XIEITE_AT(223, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_225(...) XIEITE_DETAIL_UNTIL_224(__VA_ARGS__), XIEITE_AT(224, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_226(...) XIEITE_DETAIL_UNTIL_225(__VA_ARGS__), XIEITE_AT(225, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_227(...) XIEITE_DETAIL_UNTIL_226(__VA_ARGS__), XIEITE_AT(226, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_228(...) XIEITE_DETAIL_UNTIL_227(__VA_ARGS__), XIEITE_AT(227, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_229(...) XIEITE_DETAIL_UNTIL_228(__VA_ARGS__), XIEITE_AT(228, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_230(...) XIEITE_DETAIL_UNTIL_229(__VA_ARGS__), XIEITE_AT(229, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_231(...) XIEITE_DETAIL_UNTIL_230(__VA_ARGS__), XIEITE_AT(230, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_232(...) XIEITE_DETAIL_UNTIL_231(__VA_ARGS__), XIEITE_AT(231, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_233(...) XIEITE_DETAIL_UNTIL_232(__VA_ARGS__), XIEITE_AT(232, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_234(...) XIEITE_DETAIL_UNTIL_233(__VA_ARGS__), XIEITE_AT(233, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_235(...) XIEITE_DETAIL_UNTIL_234(__VA_ARGS__), XIEITE_AT(234, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_236(...) XIEITE_DETAIL_UNTIL_235(__VA_ARGS__), XIEITE_AT(235, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_237(...) XIEITE_DETAIL_UNTIL_236(__VA_ARGS__), XIEITE_AT(236, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_238(...) XIEITE_DETAIL_UNTIL_237(__VA_ARGS__), XIEITE_AT(237, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_239(...) XIEITE_DETAIL_UNTIL_238(__VA_ARGS__), XIEITE_AT(238, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_240(...) XIEITE_DETAIL_UNTIL_239(__VA_ARGS__), XIEITE_AT(239, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_241(...) XIEITE_DETAIL_UNTIL_240(__VA_ARGS__), XIEITE_AT(240, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_242(...) XIEITE_DETAIL_UNTIL_241(__VA_ARGS__), XIEITE_AT(241, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_243(...) XIEITE_DETAIL_UNTIL_242(__VA_ARGS__), XIEITE_AT(242, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_244(...) XIEITE_DETAIL_UNTIL_243(__VA_ARGS__), XIEITE_AT(243, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_245(...) XIEITE_DETAIL_UNTIL_244(__VA_ARGS__), XIEITE_AT(244, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_246(...) XIEITE_DETAIL_UNTIL_245(__VA_ARGS__), XIEITE_AT(245, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_247(...) XIEITE_DETAIL_UNTIL_246(__VA_ARGS__), XIEITE_AT(246, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_248(...) XIEITE_DETAIL_UNTIL_247(__VA_ARGS__), XIEITE_AT(247, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_249(...) XIEITE_DETAIL_UNTIL_248(__VA_ARGS__), XIEITE_AT(248, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_250(...) XIEITE_DETAIL_UNTIL_249(__VA_ARGS__), XIEITE_AT(249, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_251(...) XIEITE_DETAIL_UNTIL_250(__VA_ARGS__), XIEITE_AT(250, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_252(...) XIEITE_DETAIL_UNTIL_251(__VA_ARGS__), XIEITE_AT(251, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_253(...) XIEITE_DETAIL_UNTIL_252(__VA_ARGS__), XIEITE_AT(252, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_254(...) XIEITE_DETAIL_UNTIL_253(__VA_ARGS__), XIEITE_AT(253, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_255(...) XIEITE_DETAIL_UNTIL_254(__VA_ARGS__), XIEITE_AT(254, __VA_ARGS__)
#define XIEITE_DETAIL_UNTIL_256(...) XIEITE_DETAIL_UNTIL_255(__VA_ARGS__), XIEITE_AT(255, __VA_ARGS__)