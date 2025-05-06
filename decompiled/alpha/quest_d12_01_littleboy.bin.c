task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc1 PushI
	if(var_8_int == 0) goto Label_608; // 0xc2 JumpB
	func_839(); // 0xc4 Call
	var_10_int = 16245; // 0xc6 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc7 Eq
	if(var_11_bool == 0) goto Label_206; // 0xc8 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc9 PushV
	var_12_object = var_1_object; // 0xca MovT
	var_13_object = var_0_object; // 0xcb MovT
	func_873(); // 0xcc Call
	
Label_206:
	var_16_int = 16256; // 0xce PushI
	var_17_bool = var_7_bool == var_16_int; // 0xcf Eq
	if(var_17_bool == 0) goto Label_214; // 0xd0 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xd1 PushV
	var_18_object = var_1_object; // 0xd2 MovT
	var_19_object = var_0_object; // 0xd3 MovT
	func_873(); // 0xd4 Call
	
Label_214:
	var_20_int = 16209; // 0xd6 PushI
	var_21_bool = var_6_int == var_20_int; // 0xd7 Eq
	if(var_21_bool == 0) goto Label_292; // 0xd8 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xd9 PushV
	var_23_object = var_1_object; // 0xda MovT
	func_885(var_23_object); // 0xdb Call
	if(var_22_bool == 0) goto Label_257; // 0xdd JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xde PushV
	var_30_object = var_1_object; // 0xdf MovT
	var_31_object = var_0_object; // 0xe0 MovT
	func_867(); // 0xe1 Call
	var_34_object = Obj(); var_35_object = Obj(); // 0xe3 PushV
	var_34_object = var_1_object; // 0xe4 MovT
	var_35_object = var_0_object; // 0xe5 MovT
	func_879(); // 0xe6 Call
	var_38_string = ""; // 0xe8 PushV
	var_38_string = "Neutral"; // 0xe9 MovS
	func_176(var_7_bool, var_38_string); // 0xea Call
	var_53_int = 14956; // 0xec PushI
	SetMessage(var_53_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_54_int = 14957; // 0xf1 PushI
	var_55_int = 16211; // 0xf2 PushI
	var_56_int = 16210; // 0xf3 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xf4 TObjFunc
	var_57_int = 14975; // 0xf6 PushI
	var_58_int = 16231; // 0xf7 PushI
	var_59_int = 16230; // 0xf8 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xf9 TObjFunc
	var_60_int = 14977; // 0xfb PushI
	var_61_int = 16233; // 0xfc PushI
	var_62_int = 16232; // 0xfd PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_63_string = ""; // 0x101 PushV
	var_63_string = "Neutral"; // 0x102 MovS
	func_176(var_7_bool, var_63_string); // 0x103 Call
	var_64_int = 14988; // 0x105 PushI
	SetMessage(var_64_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_65_bool = 0; var_66_object = Obj(); // 0x10a PushV
	var_66_object = var_1_object; // 0x10b MovT
	func_897(var_66_object); // 0x10c Call
	if(var_65_bool == 0) goto Label_276; // 0x10e JumpB
	var_71_int = 14990; // 0x10f PushI
	var_72_int = 16246; // 0x110 PushI
	var_73_int = 16245; // 0x111 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x112 TObjFunc
	
Label_276:
	var_74_bool = 0; var_75_object = Obj(); // 0x114 PushV
	var_75_object = var_1_object; // 0x115 MovT
	func_897(var_75_object); // 0x116 Call
	if(var_74_bool == 0) goto Label_286; // 0x118 JumpB
	var_76_int = 15000; // 0x119 PushI
	var_77_int = 16257; // 0x11a PushI
	var_78_int = 16256; // 0x11b PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x11c TObjFunc
	
Label_286:
	var_79_int = 14989; // 0x11e PushI
	var_80_int = -1; // 0x11f PushI
	var_81_int = 16244; // 0x120 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_82_int = 16257; // 0x124 PushI
	var_83_bool = var_6_int == var_82_int; // 0x125 Eq
	if(var_83_bool == 0) goto Label_315; // 0x126 JumpB
	var_84_string = ""; // 0x127 PushV
	var_84_string = "Neutral"; // 0x128 MovS
	func_176(var_7_bool, var_84_string); // 0x129 Call
	var_85_int = 15001; // 0x12b PushI
	SetMessage(var_85_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_86_int = 15002; // 0x130 PushI
	var_87_int = 16251; // 0x131 PushI
	var_88_int = 16258; // 0x132 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x133 TObjFunc
	var_89_int = 15003; // 0x135 PushI
	var_90_int = 16248; // 0x136 PushI
	var_91_int = 16260; // 0x137 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_92_int = 16246; // 0x13b PushI
	var_93_bool = var_6_int == var_92_int; // 0x13c Eq
	if(var_93_bool == 0) goto Label_338; // 0x13d JumpB
	var_94_string = ""; // 0x13e PushV
	var_94_string = "Neutral"; // 0x13f MovS
	func_176(var_7_bool, var_94_string); // 0x140 Call
	var_95_int = 14991; // 0x142 PushI
	SetMessage(var_95_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_96_int = 14992; // 0x147 PushI
	var_97_int = 16248; // 0x148 PushI
	var_98_int = 16247; // 0x149 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x14a TObjFunc
	var_99_int = 14999; // 0x14c PushI
	var_100_int = 16248; // 0x14d PushI
	var_101_int = 16254; // 0x14e PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_102_int = 16248; // 0x152 PushI
	var_103_bool = var_6_int == var_102_int; // 0x153 Eq
	if(var_103_bool == 0) goto Label_361; // 0x154 JumpB
	var_104_string = ""; // 0x155 PushV
	var_104_string = "Neutral"; // 0x156 MovS
	func_176(var_7_bool, var_104_string); // 0x157 Call
	var_105_int = 14993; // 0x159 PushI
	SetMessage(var_105_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_106_int = 14994; // 0x15e PushI
	var_107_int = -1; // 0x15f PushI
	var_108_int = 16249; // 0x160 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x161 TObjFunc
	var_109_int = 14995; // 0x163 PushI
	var_110_int = 16251; // 0x164 PushI
	var_111_int = 16250; // 0x165 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_112_int = 16251; // 0x169 PushI
	var_113_bool = var_6_int == var_112_int; // 0x16a Eq
	if(var_113_bool == 0) goto Label_384; // 0x16b JumpB
	var_114_string = ""; // 0x16c PushV
	var_114_string = "Neutral"; // 0x16d MovS
	func_176(var_7_bool, var_114_string); // 0x16e Call
	var_115_int = 14996; // 0x170 PushI
	SetMessage(var_115_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_116_int = 14997; // 0x175 PushI
	var_117_int = -1; // 0x176 PushI
	var_118_int = 16252; // 0x177 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x178 TObjFunc
	var_119_int = 14998; // 0x17a PushI
	var_120_int = -1; // 0x17b PushI
	var_121_int = 16253; // 0x17c PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_122_int = 16233; // 0x180 PushI
	var_123_bool = var_6_int == var_122_int; // 0x181 Eq
	if(var_123_bool == 0) goto Label_407; // 0x182 JumpB
	var_124_string = ""; // 0x183 PushV
	var_124_string = "Neutral"; // 0x184 MovS
	func_176(var_7_bool, var_124_string); // 0x185 Call
	var_125_int = 14978; // 0x187 PushI
	SetMessage(var_125_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_126_int = 14979; // 0x18c PushI
	var_127_int = 16235; // 0x18d PushI
	var_128_int = 16234; // 0x18e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x18f TObjFunc
	var_129_int = 14987; // 0x191 PushI
	var_130_int = -1; // 0x192 PushI
	var_131_int = 16242; // 0x193 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_132_int = 16235; // 0x197 PushI
	var_133_bool = var_6_int == var_132_int; // 0x198 Eq
	if(var_133_bool == 0) goto Label_430; // 0x199 JumpB
	var_134_string = ""; // 0x19a PushV
	var_134_string = "Neutral"; // 0x19b MovS
	func_176(var_7_bool, var_134_string); // 0x19c Call
	var_135_int = 14980; // 0x19e PushI
	SetMessage(var_135_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_136_int = 14981; // 0x1a3 PushI
	var_137_int = 16237; // 0x1a4 PushI
	var_138_int = 16236; // 0x1a5 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x1a6 TObjFunc
	var_139_int = 14986; // 0x1a8 PushI
	var_140_int = -1; // 0x1a9 PushI
	var_141_int = 16241; // 0x1aa PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_142_int = 16237; // 0x1ae PushI
	var_143_bool = var_6_int == var_142_int; // 0x1af Eq
	if(var_143_bool == 0) goto Label_458; // 0x1b0 JumpB
	var_144_string = ""; // 0x1b1 PushV
	var_144_string = "Neutral"; // 0x1b2 MovS
	func_176(var_7_bool, var_144_string); // 0x1b3 Call
	var_145_int = 14982; // 0x1b5 PushI
	SetMessage(var_145_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_146_int = 14983; // 0x1ba PushI
	var_147_int = -1; // 0x1bb PushI
	var_148_int = 16238; // 0x1bc PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1bd TObjFunc
	var_149_int = 14984; // 0x1bf PushI
	var_150_int = -1; // 0x1c0 PushI
	var_151_int = 16239; // 0x1c1 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1c2 TObjFunc
	var_152_int = 14985; // 0x1c4 PushI
	var_153_int = -1; // 0x1c5 PushI
	var_154_int = 16240; // 0x1c6 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_155_int = 16231; // 0x1ca PushI
	var_156_bool = var_6_int == var_155_int; // 0x1cb Eq
	if(var_156_bool == 0) goto Label_471; // 0x1cc JumpB
	var_157_string = ""; // 0x1cd PushV
	var_157_string = "Neutral"; // 0x1ce MovS
	func_176(var_7_bool, var_157_string); // 0x1cf Call
	var_158_int = 14976; // 0x1d1 PushI
	SetMessage(var_158_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_159_int = 16211; // 0x1d7 PushI
	var_160_bool = var_6_int == var_159_int; // 0x1d8 Eq
	if(var_160_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_161_string = ""; // 0x1da PushV
	var_161_string = "Neutral"; // 0x1db MovS
	func_176(var_7_bool, var_161_string); // 0x1dc Call
	var_162_int = 14958; // 0x1de PushI
	SetMessage(var_162_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_163_int = 14959; // 0x1e3 PushI
	var_164_int = 16213; // 0x1e4 PushI
	var_165_int = 16212; // 0x1e5 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1e6 TObjFunc
	var_166_int = 14974; // 0x1e8 PushI
	var_167_int = 16213; // 0x1e9 PushI
	var_168_int = 16228; // 0x1ea PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_169_int = 16213; // 0x1ee PushI
	var_170_bool = var_6_int == var_169_int; // 0x1ef Eq
	if(var_170_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_171_string = ""; // 0x1f1 PushV
	var_171_string = "Neutral"; // 0x1f2 MovS
	func_176(var_7_bool, var_171_string); // 0x1f3 Call
	var_172_int = 14960; // 0x1f5 PushI
	SetMessage(var_172_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_173_int = 14961; // 0x1fa PushI
	var_174_int = 16215; // 0x1fb PushI
	var_175_int = 16214; // 0x1fc PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1fd TObjFunc
	var_176_int = 14973; // 0x1ff PushI
	var_177_int = 16215; // 0x200 PushI
	var_178_int = 16226; // 0x201 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_179_int = 16215; // 0x205 PushI
	var_180_bool = var_6_int == var_179_int; // 0x206 Eq
	if(var_180_bool == 0) goto Label_540; // 0x207 JumpB
	var_181_string = ""; // 0x208 PushV
	var_181_string = "Neutral"; // 0x209 MovS
	func_176(var_7_bool, var_181_string); // 0x20a Call
	var_182_int = 14962; // 0x20c PushI
	SetMessage(var_182_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_183_int = 14963; // 0x211 PushI
	var_184_int = 16217; // 0x212 PushI
	var_185_int = 16216; // 0x213 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x214 TObjFunc
	var_186_int = 14968; // 0x216 PushI
	var_187_int = 16222; // 0x217 PushI
	var_188_int = 16221; // 0x218 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_189_int = 16222; // 0x21c PushI
	var_190_bool = var_6_int == var_189_int; // 0x21d Eq
	if(var_190_bool == 0) goto Label_568; // 0x21e JumpB
	var_191_string = ""; // 0x21f PushV
	var_191_string = "Neutral"; // 0x220 MovS
	func_176(var_7_bool, var_191_string); // 0x221 Call
	var_192_int = 14969; // 0x223 PushI
	SetMessage(var_192_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_193_int = 14970; // 0x228 PushI
	var_194_int = -1; // 0x229 PushI
	var_195_int = 16223; // 0x22a PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x22b TObjFunc
	var_196_int = 14971; // 0x22d PushI
	var_197_int = -1; // 0x22e PushI
	var_198_int = 16224; // 0x22f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x230 TObjFunc
	var_199_int = 14972; // 0x232 PushI
	var_200_int = -1; // 0x233 PushI
	var_201_int = 16225; // 0x234 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_202_int = 16217; // 0x238 PushI
	var_203_bool = var_6_int == var_202_int; // 0x239 Eq
	if(var_203_bool == 0) goto Label_596; // 0x23a JumpB
	var_204_string = ""; // 0x23b PushV
	var_204_string = "Neutral"; // 0x23c MovS
	func_176(var_7_bool, var_204_string); // 0x23d Call
	var_205_int = 14964; // 0x23f PushI
	SetMessage(var_205_int); // 0x240 TObjFunc
	ClearReplies(); // 0x242 TObjFunc
	var_206_int = 14965; // 0x244 PushI
	var_207_int = -1; // 0x245 PushI
	var_208_int = 16218; // 0x246 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x247 TObjFunc
	var_209_int = 14966; // 0x249 PushI
	var_210_int = -1; // 0x24a PushI
	var_211_int = 16219; // 0x24b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x24c TObjFunc
	var_212_int = 14967; // 0x24e PushI
	var_213_int = -1; // 0x24f PushI
	var_214_int = 16220; // 0x250 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_3_string = 1; // 0x254 TMovB
	var_215_bool = 0; // 0x255 PushV
	func_930(var_215_bool); // 0x256 Call
	if(var_215_bool == 0) goto Label_604; // 0x258 JumpB
	lshStopAnimation(); // 0x259 Func
	goto Label_606; // 0x25b Jump
	
Label_606:
	return 0; // 0x25e Return
	
Label_604:
	StopAnimation(); // 0x25c Func
	
Label_608:
	return 0; // 0x260 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_751(); // 0x263 Call
	var_7_int = 0; var_8_object = Obj(); // 0x265 PushV
	var_8_object = var_6_object; // 0x266 Mov
	TaskCall(0); // 0x267 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x268 Call
	TaskReturn(); // 0x269 TaskReturn
	return 0; // 0x26b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x27c PushV
	var_9_string = "cleanup"; // 0x27d PushS
	var_10_bool = var_6_string == var_9_string; // 0x27e Eq
	if(var_10_bool == 0) goto Label_658; // 0x27f JumpB
	var_0_object = 1; // 0x280 TMovB
	IsLoaded(var_8_bool); // 0x281 Func
	var_11_bool = 0; // 0x283 PushV
	var_11_bool = 0; // 0x284 MovB
	var_12_bool = var_8_bool == 0; // 0x285 Not
	if(var_12_bool == 0) goto Label_652; // 0x286 JumpB
	var_13_bool = 0; // 0x287 PushV
	func_680(var_13_bool); // 0x288 Call
	if(var_13_bool == 0) goto Label_652; // 0x28a JumpB
	var_11_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_11_bool == 0) goto Label_658; // 0x28c JumpB
	var_14_object = Obj(); // 0x28d PushV
	func_846(var_14_object); // 0x28e Call
	RemoveActor(var_14_object); // 0x290 Func
	
Label_658:
	return 2; // 0x292 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x293 Func
	sync(); // 0x295 Func
	return 0; // 0x297 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x298 PushV
	var_6_bool = 0; // 0x299 MovB
	var_7_object = var_0_object; // 0x29a PushT
	if(var_7_object == 0) goto Label_673; // 0x29b JumpB
	var_8_bool = 0; // 0x29c PushV
	func_680(var_8_bool); // 0x29d Call
	if(var_8_bool == 0) goto Label_673; // 0x29f JumpB
	var_6_bool = 1; // 0x2a0 MovB
	
Label_673:
	if(var_6_bool == 0) goto Label_679; // 0x2a1 JumpB
	var_9_object = Obj(); // 0x2a2 PushV
	func_846(var_9_object); // 0x2a3 Call
	RemoveActor(var_9_object); // 0x2a5 Func
	
Label_679:
	return 0; // 0x2a7 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_620:
	var_6_bool = 0; // 0x26c PushV
	func_756(var_6_bool); // 0x26d Call
	var_9_bool = var_6_bool == 0; // 0x26f Not
	if(var_9_bool == 0) goto Label_628; // 0x270 JumpB
	Hold(); // 0x271 Func
	goto Label_620; // 0x273 Jump
	
Label_628:
	var_10_int = 3; // 0x274 PushI
	Sleep(var_10_int); // 0x275 Func
	func_682(); // 0x278 Call
	goto Label_620; // 0x27a Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_761(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_926(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_928(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_909(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_145_bool = var_17_bool == 0; // 0x2d Not
	if(var_145_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_146_object = Obj(); // 0x34 PushV
	var_146_object = var_8_object; // 0x35 Mov
	func_817(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_897(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x382 PushV
	var_131_string = "ood12Littleboy2"; // 0x383 MovS
	func_862(var_130_int, var_131_string); // 0x384 Call
	var_132_int = 0; // 0x386 PushI
	var_133_bool = var_130_int == var_132_int; // 0x387 Eq
	if(var_133_bool == 0) goto Label_907; // 0x388 JumpB
	var_128_bool = 1; // 0x389 MovB
	return 0; // 0x38a Return
	
Label_907:
	var_128_bool = 0; // 0x38b MovB
	return 0; // 0x38c Return
}


func_909(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x38d PushV
	var_64_string = "player"; // 0x38e PushS
	GetVariable(var_64_string, var_63_int); // 0x38f Func
	var_65_int = 0; // 0x391 PushI
	var_66_bool = var_63_int == var_65_int; // 0x392 Eq
	if(var_66_bool == 0) goto Label_919; // 0x393 JumpB
	var_61_int = 200001; // 0x394 MovI
	return 2; // 0x395 Return
	
Label_919:
	var_67_int = 1; // 0x397 PushI
	var_68_bool = var_63_int == var_67_int; // 0x398 Eq
	if(var_68_bool == 0) goto Label_924; // 0x399 JumpB
	var_61_int = 200002; // 0x39a MovI
	return 2; // 0x39b Return
	
Label_924:
	var_61_int = 200003; // 0x39c MovI
	return 2; // 0x39d Return
}


func_926(var_59_int)
{
	var_59_int = 3345; // 0x39e MovI
	return 0; // 0x39f Return
}


func_928(var_60_string)
{
	var_60_string = "ui/NPC_None.png"; // 0x3a0 MovS
	return 0; // 0x3a1 Return
}


func_930(var_94_bool)
{
	var_94_bool = 0; // 0x3a2 MovB
	return 0; // 0x3a3 Return
}


func_932(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = ""; // 0x3a4 PushV
	var_36_string = "idle"; // 0x3a5 MovS
	var_37_int = var_34_int; // 0x3a6 Push
	if(var_37_int == 0) goto Label_937; // 0x3a7 JumpB
	var_36_string = var_36_string + var_34_int; // 0x3a8 Add2
	
Label_937:
	var_33_string = var_36_string; // 0x3a9 Mov
	return 2; // 0x3aa Return
}


func_680(var_8_bool)
{
	var_8_bool = 1; // 0x2a8 MovB
	return 0; // 0x2a9 Return
}


func_682()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x2aa PushV
	WaitForAnimEnd(); // 0x2ab Func
	var_25_bool = 0; // 0x2ad PushV
	func_756(var_25_bool); // 0x2ae Call
	var_26_bool = var_25_bool == 0; // 0x2b0 Not
	if(var_26_bool == 0) goto Label_691; // 0x2b1 JumpB
	return 14; // 0x2b2 Return
	
Label_691:
	var_27_int = 0; // 0x2b3 PushV
	func_939(var_27_int); // 0x2b4 Call
	var_18_int = var_27_int; // 0x2b5 Mov
	var_19_int = 0; // 0x2b7 MovI
	
Label_696:
	var_40_bool = 0; // 0x2b8 PushV
	var_40_bool = 0; // 0x2b9 MovB
	var_41_int = 5; // 0x2ba PushI
	var_42_bool = var_19_int < var_41_int; // 0x2bb LT
	if(var_42_bool == 0) goto Label_706; // 0x2bc JumpB
	var_43_bool = 0; // 0x2bd PushV
	func_756(var_43_bool); // 0x2be Call
	if(var_43_bool == 0) goto Label_706; // 0x2c0 JumpB
	var_40_bool = 1; // 0x2c1 MovB
	
Label_706:
	if(var_40_bool == 0) goto Label_750; // 0x2c2 JumpB
	var_44_int = 3; // 0x2c3 PushI
	irand(var_20_int, var_44_int); // 0x2c4 Func
	var_45_int = 0; // 0x2c6 PushI
	var_46_bool = var_20_int == var_45_int; // 0x2c7 Eq
	if(var_46_bool == 0) goto Label_730; // 0x2c8 JumpB
	var_47_int = var_18_int; // 0x2c9 Push
	if(var_47_int == 0) goto Label_729; // 0x2ca JumpB
	irand(var_21_int, var_18_int); // 0x2cb Func
	var_48_string = "all"; // 0x2cd PushS
	var_49_string = ""; var_50_int = 0; // 0x2ce PushV
	var_50_int = var_21_int; // 0x2cf Mov
	func_932(var_49_string, var_50_int); // 0x2d0 Call
	PlayAnimation(var_48_string, var_49_string); // 0x2d2 Func
	WaitForAnimEnd(var_22_bool); // 0x2d4 Func
	var_51_bool = var_22_bool == 0; // 0x2d6 Not
	if(var_51_bool == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_750; // 0x2d8 Jump
	
Label_750:
	return 14; // 0x2ee Return
	
Label_729:
	goto Label_747; // 0x2d9 Jump
	
Label_747:
	var_52_int = 1; // 0x2eb PushI
	var_19_int = var_19_int + var_52_int; // 0x2ec Add2
	goto Label_696; // 0x2ed Jump
	
Label_730:
	var_53_int = 1; // 0x2da PushI
	var_54_bool = var_20_int == var_53_int; // 0x2db Eq
	if(var_54_bool == 0) goto Label_744; // 0x2dc JumpB
	var_55_int = 4; // 0x2dd PushI
	rand(var_23_float, var_55_int); // 0x2de Func
	var_56_int = 1; // 0x2e0 PushI
	var_57_int = var_23_float + var_56_int; // 0x2e1 Add
	Sleep(var_57_int, var_24_bool); // 0x2e2 Func
	var_58_bool = var_24_bool == 0; // 0x2e4 Not
	if(var_58_bool == 0) goto Label_743; // 0x2e5 JumpB
	goto Label_750; // 0x2e6 Jump
	
Label_743:
	goto Label_747; // 0x2e7 Jump
	
Label_744:
	var_59_int = var_19_int; // 0x2e8 Push
	if(var_59_int == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_750; // 0x2ea Jump
}


func_939(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x3ab PushV
	var_30_int = 0; // 0x3ac MovI
	
Label_941:
	var_32_string = "all"; // 0x3ad PushS
	var_33_string = ""; var_34_int = 0; // 0x3ae PushV
	var_34_int = var_30_int; // 0x3af Mov
	func_932(var_33_string, var_34_int); // 0x3b0 Call
	HasAnimation(var_31_bool, var_32_string, var_33_string); // 0x3b2 Func
	var_38_bool = var_31_bool == 0; // 0x3b4 Not
	if(var_38_bool == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_954; // 0x3b6 Jump
	
Label_954:
	var_27_int = var_30_int; // 0x3ba Mov
	return 4; // 0x3bb Return
	
Label_951:
	var_39_int = 1; // 0x3b7 PushI
	var_30_int = var_30_int + var_39_int; // 0x3b8 Add2
	goto Label_941; // 0x3b9 Jump
}


func_176(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0xb1 PushV
	func_930(var_94_bool); // 0xb2 Call
	var_95_bool = var_94_bool == 0; // 0xb4 Not
	if(var_95_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_96_bool = var_93_string == var_2_object; // 0xb7 Eq
	if(var_96_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_97_string = ""; // 0xba PushV
	var_97_string = var_93_string; // 0xbb Mov
	func_821(var_97_string); // 0xbc Call
	var_2_object = var_93_string; // 0xbe TMov
	return 0; // 0xbf Return
}


func_817()
{
	CameraSwitchToNormal(); // 0x332 Func
	return 0; // 0x334 Return
}


func_821(var_97_string)
{
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0; // 0x335 PushV
	var_102_string = "playing "; // 0x336 PushS
	var_103_int = var_102_string + var_97_string; // 0x337 Add
	Trace(var_103_int); // 0x338 Func
	lshGetAnimTimes(var_97_string, var_100_float, var_101_float); // 0x33a Func
	lshPlayAnimation(var_100_float, var_101_float); // 0x33c Func
	var_104_string = "start: "; // 0x33e PushS
	var_105_int = var_104_string + var_100_float; // 0x33f Add
	Trace(var_105_int); // 0x340 Func
	var_106_string = "end: "; // 0x342 PushS
	var_107_int = var_106_string + var_101_float; // 0x343 Add
	Trace(var_107_int); // 0x344 Func
	return 4; // 0x346 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_146; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_885(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_109; // 0x49 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x4a PushV
	var_85_object = var_1_object; // 0x4b MovT
	var_86_object = var_0_object; // 0x4c MovT
	func_867(); // 0x4d Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x4f PushV
	var_89_object = var_1_object; // 0x50 MovT
	var_90_object = var_0_object; // 0x51 MovT
	func_879(); // 0x52 Call
	var_93_string = ""; // 0x54 PushV
	var_93_string = "Neutral"; // 0x55 MovS
	func_176(var_71_object, var_93_string); // 0x56 Call
	var_108_int = 14956; // 0x58 PushI
	SetMessage(var_108_int); // 0x59 TObjFunc
	ClearReplies(); // 0x5b TObjFunc
	var_109_int = 14957; // 0x5d PushI
	var_110_int = 16211; // 0x5e PushI
	var_111_int = 16210; // 0x5f PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x60 TObjFunc
	var_112_int = 14975; // 0x62 PushI
	var_113_int = 16231; // 0x63 PushI
	var_114_int = 16230; // 0x64 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x65 TObjFunc
	var_115_int = 14977; // 0x67 PushI
	var_116_int = 16233; // 0x68 PushI
	var_117_int = 16232; // 0x69 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x6a TObjFunc
	goto Label_146; // 0x6c Jump
	
Label_146:
	var_118_bool = 0; // 0x92 PushV
	func_930(var_118_bool); // 0x93 Call
	if(var_118_bool == 0) goto Label_161; // 0x95 JumpB
	
Label_150:
	lshWaitForAnimEnd(); // 0x96 Func
	var_119_string = var_3_string; // 0x98 PushT
	if(var_119_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_160:
	goto Label_175; // 0xa0 Jump
	
Label_175:
	return 0; // 0xaf Return
	
Label_155:
	var_120_string = ""; // 0x9b PushV
	var_120_string = var_2_object; // 0x9c MovT
	func_821(var_120_string); // 0x9d Call
	goto Label_150; // 0x9f Jump
	
Label_161:
	var_121_string = "all"; // 0xa1 PushS
	var_122_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_121_string, var_122_string); // 0xa3 Func
	
Label_165:
	WaitForAnimEnd(); // 0xa5 Func
	var_123_string = var_3_string; // 0xa7 PushT
	if(var_123_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_170:
	var_124_string = "all"; // 0xaa PushS
	var_125_string = "idle"; // 0xab PushS
	PlayAnimation(var_124_string, var_125_string); // 0xac Func
	goto Label_165; // 0xae Jump
	
Label_109:
	var_126_string = ""; // 0x6d PushV
	var_126_string = "Neutral"; // 0x6e MovS
	func_176(var_71_object, var_126_string); // 0x6f Call
	var_127_int = 14988; // 0x71 PushI
	SetMessage(var_127_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_128_bool = 0; var_129_object = Obj(); // 0x76 PushV
	var_129_object = var_1_object; // 0x77 MovT
	func_897(var_129_object); // 0x78 Call
	if(var_128_bool == 0) goto Label_128; // 0x7a JumpB
	var_134_int = 14990; // 0x7b PushI
	var_135_int = 16246; // 0x7c PushI
	var_136_int = 16245; // 0x7d PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x7e TObjFunc
	
Label_128:
	var_137_bool = 0; var_138_object = Obj(); // 0x80 PushV
	var_138_object = var_1_object; // 0x81 MovT
	func_897(var_138_object); // 0x82 Call
	if(var_137_bool == 0) goto Label_138; // 0x84 JumpB
	var_139_int = 15000; // 0x85 PushI
	var_140_int = 16257; // 0x86 PushI
	var_141_int = 16256; // 0x87 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x88 TObjFunc
	
Label_138:
	var_142_int = 14989; // 0x8a PushI
	var_143_int = -1; // 0x8b PushI
	var_144_int = 16244; // 0x8c PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x8d TObjFunc
	goto Label_146; // 0x8f Jump
}


func_839()
{
	var_9_bool = 0; // 0x347 PushV
	func_930(var_9_bool); // 0x348 Call
	if(var_9_bool == 0) goto Label_845; // 0x34a JumpB
	lshStopSpeech(); // 0x34b Func
	
Label_845:
	return 0; // 0x34d Return
}


func_846(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x34e PushV
	self(var_11_object); // 0x34f Func
	var_9_object = var_11_object; // 0x351 Mov
	return 2; // 0x352 Return
}


func_852(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x354 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x355 Or
	var_47_float = sqrt(var_48_int); // 0x356 Sqrt2
	var_49_float = 0.0; // 0x357 PushF
	var_50_bool = var_47_float < var_49_float; // 0x358 LT
	if(var_50_bool == 0) goto Label_860; // 0x359 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x35a MovV
	return 2; // 0x35b Return
	
Label_860:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x35c Div2
	return 2; // 0x35d Return
}


func_862(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x35e PushV
	GetVariable(var_80_string, var_82_int); // 0x35f Func
	var_79_int = var_82_int; // 0x361 Mov
	return 2; // 0x362 Return
}


func_867()
{
	var_87_string = "ood12Littleboy1"; // 0x364 PushS
	var_88_int = 1; // 0x365 PushI
	SetVariable(var_87_string, var_88_int); // 0x366 Func
	return 0; // 0x368 Return
}


func_873()
{
	var_14_string = "ood12Littleboy2"; // 0x36a PushS
	var_15_int = 1; // 0x36b PushI
	SetVariable(var_14_string, var_15_int); // 0x36c Func
	return 0; // 0x36e Return
}


func_879()
{
	var_91_string = "d12q01DankoKnowHeIsToy"; // 0x370 PushS
	var_92_int = 1; // 0x371 PushI
	SetVariable(var_91_string, var_92_int); // 0x372 Func
	return 0; // 0x374 Return
}


func_751()
{
	StopAnimation(); // 0x2ef Func
	StopGroup0(); // 0x2f1 Func
	return 0; // 0x2f3 Return
}


func_756(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2f4 PushV
	IsLoaded(var_8_bool); // 0x2f5 Func
	var_6_bool = var_8_bool; // 0x2f7 Mov
	return 2; // 0x2f8 Return
}


func_885(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x376 PushV
	var_80_string = "ood12Littleboy1"; // 0x377 MovS
	func_862(var_79_int, var_80_string); // 0x378 Call
	var_83_int = 0; // 0x37a PushI
	var_84_bool = var_79_int == var_83_int; // 0x37b Eq
	if(var_84_bool == 0) goto Label_895; // 0x37c JumpB
	var_77_bool = 1; // 0x37d MovB
	return 0; // 0x37e Return
	
Label_895:
	var_77_bool = 0; // 0x37f MovB
	return 0; // 0x380 Return
}


func_761(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x2f9 PushV
	GetPosition(var_29_cvector); // 0x2fa ObjFunc
	GetEyesHeight(var_28_float); // 0x2fc ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x2fe PushE
	var_36_float = var_36_float + var_28_float; // 0x2ff Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x300 PopE
	GetPosition(var_30_cvector); // 0x301 Func
	GetEyesHeight(var_28_float); // 0x303 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x305 PushE
	var_37_float = var_37_float + var_28_float; // 0x306 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x307 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x308 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x309 PushE
	var_38_float = 0; // 0x30a MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x30b PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x30c Or
	var_40_float = sqrt(var_39_int); // 0x30d Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x30e Div2
	var_32_cvector = -var_31_cvector; // 0x30f Neg2
	var_41_int = 70; // 0x310 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x311 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x312 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x313 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x314 Xor2
	func_852(var_43_cvector, var_44_cvector); // 0x315 Call
	var_51_int = 25; // 0x317 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x318 Mult
	var_53_int = var_42_float + var_52_float; // 0x319 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x31a PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x31b Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x31c Add2
	IsOverrideActive(var_35_bool); // 0x31d Func
	var_55_bool = var_35_bool; // 0x31f Push
	if(var_55_bool == 0) goto Label_803; // 0x320 JumpB
	var_18_bool = 0; // 0x321 MovB
	return 16; // 0x322 Return
	
Label_803:
	StopWorld(); // 0x323 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x325 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x327 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x328 PushE
	Rotate(var_56_float, var_57_float); // 0x329 Func
	CameraWaitForPlayFinish(); // 0x32b Func
	ResumeWorld(); // 0x32d Func
	var_18_bool = 1; // 0x32f MovB
	return 16; // 0x330 Return
}


