task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x94 PushI
	if(var_9_int == 0) goto Label_414; // 0x95 JumpB
	func_566(); // 0x97 Call
	var_11_int = 7988; // 0x99 PushI
	var_12_bool = var_8_bool == var_11_int; // 0x9a Eq
	if(var_12_bool == 0) goto Label_166; // 0x9b JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0x9c PushV
	var_13_object = var_1_object; // 0x9d MovT
	var_14_object = var_0_object; // 0x9e MovT
	func_599(); // 0x9f Call
	var_17_object = Obj(); var_18_object = Obj(); // 0xa1 PushV
	var_17_object = var_1_object; // 0xa2 MovT
	var_18_object = var_0_object; // 0xa3 MovT
	func_605(); // 0xa4 Call
	
Label_166:
	var_67_int = 7990; // 0xa6 PushI
	var_68_bool = var_8_bool == var_67_int; // 0xa7 Eq
	if(var_68_bool == 0) goto Label_179; // 0xa8 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0xa9 PushV
	var_69_object = var_1_object; // 0xaa MovT
	var_70_object = var_0_object; // 0xab MovT
	func_599(); // 0xac Call
	var_71_object = Obj(); var_72_object = Obj(); // 0xae PushV
	var_71_object = var_1_object; // 0xaf MovT
	var_72_object = var_0_object; // 0xb0 MovT
	func_605(); // 0xb1 Call
	
Label_179:
	var_73_int = 7991; // 0xb3 PushI
	var_74_bool = var_8_bool == var_73_int; // 0xb4 Eq
	if(var_74_bool == 0) goto Label_192; // 0xb5 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xb6 PushV
	var_75_object = var_1_object; // 0xb7 MovT
	var_76_object = var_0_object; // 0xb8 MovT
	func_599(); // 0xb9 Call
	var_77_object = Obj(); var_78_object = Obj(); // 0xbb PushV
	var_77_object = var_1_object; // 0xbc MovT
	var_78_object = var_0_object; // 0xbd MovT
	func_605(); // 0xbe Call
	
Label_192:
	var_79_int = 7992; // 0xc0 PushI
	var_80_bool = var_8_bool == var_79_int; // 0xc1 Eq
	if(var_80_bool == 0) goto Label_200; // 0xc2 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0xc3 PushV
	var_81_object = var_1_object; // 0xc4 MovT
	var_82_object = var_0_object; // 0xc5 MovT
	func_599(); // 0xc6 Call
	
Label_200:
	var_83_int = 7616; // 0xc8 PushI
	var_84_bool = var_7_bool == var_83_int; // 0xc9 Eq
	if(var_84_bool == 0) goto Label_233; // 0xca JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0xcb PushV
	var_86_object = var_1_object; // 0xcc MovT
	func_649(var_86_object); // 0xcd Call
	if(var_85_bool == 0) goto Label_233; // 0xcf JumpB
	var_93_string = ""; // 0xd0 PushV
	var_93_string = "Neutral"; // 0xd1 MovS
	func_131(var_8_bool, var_93_string); // 0xd2 Call
	var_108_int = 6910; // 0xd4 PushI
	SetMessage(var_108_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_109_int = 6911; // 0xd9 PushI
	var_110_int = 7618; // 0xda PushI
	var_111_int = 7617; // 0xdb PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xdc TObjFunc
	var_112_bool = 0; var_113_object = Obj(); // 0xde PushV
	var_113_object = var_1_object; // 0xdf MovT
	func_637(var_113_object); // 0xe0 Call
	if(var_112_bool == 0) goto Label_232; // 0xe2 JumpB
	var_118_int = 7249; // 0xe3 PushI
	var_119_int = 7993; // 0xe4 PushI
	var_120_int = 7989; // 0xe5 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xe6 TObjFunc
	
Label_232:
	return 0; // 0xe8 Return
	
Label_233:
	var_121_int = 7993; // 0xe9 PushI
	var_122_bool = var_7_bool == var_121_int; // 0xea Eq
	if(var_122_bool == 0) goto Label_251; // 0xeb JumpB
	var_123_string = ""; // 0xec PushV
	var_123_string = "Neutral"; // 0xed MovS
	func_131(var_8_bool, var_123_string); // 0xee Call
	var_124_int = 7253; // 0xf0 PushI
	SetMessage(var_124_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_125_int = 7254; // 0xf5 PushI
	var_126_int = 7995; // 0xf6 PushI
	var_127_int = 7994; // 0xf7 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_128_int = 7995; // 0xfb PushI
	var_129_bool = var_7_bool == var_128_int; // 0xfc Eq
	if(var_129_bool == 0) goto Label_269; // 0xfd JumpB
	var_130_string = ""; // 0xfe PushV
	var_130_string = "Neutral"; // 0xff MovS
	func_131(var_8_bool, var_130_string); // 0x100 Call
	var_131_int = 7255; // 0x102 PushI
	SetMessage(var_131_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_132_int = 7256; // 0x107 PushI
	var_133_int = 7997; // 0x108 PushI
	var_134_int = 7996; // 0x109 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_135_int = 7997; // 0x10d PushI
	var_136_bool = var_7_bool == var_135_int; // 0x10e Eq
	if(var_136_bool == 0) goto Label_292; // 0x10f JumpB
	var_137_string = ""; // 0x110 PushV
	var_137_string = "Neutral"; // 0x111 MovS
	func_131(var_8_bool, var_137_string); // 0x112 Call
	var_138_int = 7257; // 0x114 PushI
	SetMessage(var_138_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_139_int = 7258; // 0x119 PushI
	var_140_int = 7999; // 0x11a PushI
	var_141_int = 7998; // 0x11b PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x11c TObjFunc
	var_142_int = 7261; // 0x11e PushI
	var_143_int = 7618; // 0x11f PushI
	var_144_int = 8002; // 0x120 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_145_int = 7999; // 0x124 PushI
	var_146_bool = var_7_bool == var_145_int; // 0x125 Eq
	if(var_146_bool == 0) goto Label_310; // 0x126 JumpB
	var_147_string = ""; // 0x127 PushV
	var_147_string = "Neutral"; // 0x128 MovS
	func_131(var_8_bool, var_147_string); // 0x129 Call
	var_148_int = 7259; // 0x12b PushI
	SetMessage(var_148_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_149_int = 7260; // 0x130 PushI
	var_150_int = 7618; // 0x131 PushI
	var_151_int = 8000; // 0x132 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_152_int = 7618; // 0x136 PushI
	var_153_bool = var_7_bool == var_152_int; // 0x137 Eq
	if(var_153_bool == 0) goto Label_338; // 0x138 JumpB
	var_154_string = ""; // 0x139 PushV
	var_154_string = "Neutral"; // 0x13a MovS
	func_131(var_8_bool, var_154_string); // 0x13b Call
	var_155_int = 6912; // 0x13d PushI
	SetMessage(var_155_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_156_int = 7242; // 0x142 PushI
	var_157_int = 7983; // 0x143 PushI
	var_158_int = 7982; // 0x144 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x145 TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x147 PushV
	var_160_object = var_1_object; // 0x148 MovT
	func_661(var_160_object); // 0x149 Call
	if(var_159_bool == 0) goto Label_337; // 0x14b JumpB
	var_165_int = 7252; // 0x14c PushI
	var_166_int = -1; // 0x14d PushI
	var_167_int = 7992; // 0x14e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x14f TObjFunc
	
Label_337:
	return 0; // 0x151 Return
	
Label_338:
	var_168_int = 7983; // 0x152 PushI
	var_169_bool = var_7_bool == var_168_int; // 0x153 Eq
	if(var_169_bool == 0) goto Label_361; // 0x154 JumpB
	var_170_string = ""; // 0x155 PushV
	var_170_string = "Neutral"; // 0x156 MovS
	func_131(var_8_bool, var_170_string); // 0x157 Call
	var_171_int = 7243; // 0x159 PushI
	SetMessage(var_171_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_172_int = 7244; // 0x15e PushI
	var_173_int = 7985; // 0x15f PushI
	var_174_int = 7984; // 0x160 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x161 TObjFunc
	var_175_int = 7251; // 0x163 PushI
	var_176_int = -1; // 0x164 PushI
	var_177_int = 7991; // 0x165 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_178_int = 7985; // 0x169 PushI
	var_179_bool = var_7_bool == var_178_int; // 0x16a Eq
	if(var_179_bool == 0) goto Label_384; // 0x16b JumpB
	var_180_string = ""; // 0x16c PushV
	var_180_string = "Neutral"; // 0x16d MovS
	func_131(var_8_bool, var_180_string); // 0x16e Call
	var_181_int = 7245; // 0x170 PushI
	SetMessage(var_181_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_182_int = 7246; // 0x175 PushI
	var_183_int = 7987; // 0x176 PushI
	var_184_int = 7986; // 0x177 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x178 TObjFunc
	var_185_int = 7250; // 0x17a PushI
	var_186_int = -1; // 0x17b PushI
	var_187_int = 7990; // 0x17c PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_188_int = 7987; // 0x180 PushI
	var_189_bool = var_7_bool == var_188_int; // 0x181 Eq
	if(var_189_bool == 0) goto Label_402; // 0x182 JumpB
	var_190_string = ""; // 0x183 PushV
	var_190_string = "Neutral"; // 0x184 MovS
	func_131(var_8_bool, var_190_string); // 0x185 Call
	var_191_int = 7247; // 0x187 PushI
	SetMessage(var_191_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_192_int = 7248; // 0x18c PushI
	var_193_int = -1; // 0x18d PushI
	var_194_int = 7988; // 0x18e PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_3_string = 1; // 0x192 TMovB
	var_195_bool = 0; // 0x193 PushV
	func_769(var_195_bool); // 0x194 Call
	if(var_195_bool == 0) goto Label_410; // 0x196 JumpB
	lshStopAnimation(); // 0x197 Func
	goto Label_412; // 0x199 Jump
	
Label_412:
	return 0; // 0x19c Return
	
Label_410:
	StopAnimation(); // 0x19a Func
	
Label_414:
	return 0; // 0x19e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x1a4 PushV
	var_10_object = var_1_object; // 0x1a5 PushT
	if(var_10_object == 0) goto Label_424; // 0x1a6 JumpB
	return 2; // 0x1a7 Return
	
Label_424:
	var_11_string = "d2q03"; // 0x1a8 PushS
	GetVariable(var_11_string, var_9_int); // 0x1a9 Func
	var_12_int = -1; // 0x1ab PushI
	var_13_bool = var_9_int != var_12_int; // 0x1ac Neq
	if(var_13_bool == 0) goto Label_437; // 0x1ad JumpB
	var_14_int = 0; var_15_object = Obj(); // 0x1ae PushV
	var_15_object = var_7_object; // 0x1af Mov
	TaskCall(0); // 0x1b0 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1b1 Call
	TaskReturn(); // 0x1b2 TaskReturn
	var_1_object = 1; // 0x1b4 TMovB
	
Label_437:
	return 2; // 0x1b5 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1ba PushV
	var_10_string = "cleanup"; // 0x1bb PushS
	var_11_bool = var_7_string == var_10_string; // 0x1bc Eq
	if(var_11_bool == 0) goto Label_465; // 0x1bd JumpB
	var_0_object = 1; // 0x1be TMovB
	IsLoaded(var_9_bool); // 0x1bf Func
	var_12_bool = 0; // 0x1c1 PushV
	var_12_bool = 0; // 0x1c2 MovB
	var_13_bool = var_9_bool == 0; // 0x1c3 Not
	if(var_13_bool == 0) goto Label_458; // 0x1c4 JumpB
	var_14_bool = 0; // 0x1c5 PushV
	func_486(var_14_bool); // 0x1c6 Call
	if(var_14_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_12_bool = 1; // 0x1c9 MovB
	
Label_458:
	if(var_12_bool == 0) goto Label_464; // 0x1ca JumpB
	var_15_object = Obj(); // 0x1cb PushV
	func_573(var_15_object); // 0x1cc Call
	RemoveActor(var_15_object); // 0x1ce Func
	
Label_464:
	goto Label_469; // 0x1d0 Jump
	
Label_469:
	return 2; // 0x1d5 Return
	
Label_465:
	var_18_string = "restore"; // 0x1d1 PushS
	var_19_bool = var_7_string == var_18_string; // 0x1d2 Eq
	if(var_19_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_0_object = 0; // 0x1d4 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x1d6 PushV
	var_7_bool = 0; // 0x1d7 MovB
	var_8_object = var_0_object; // 0x1d8 PushT
	if(var_8_object == 0) goto Label_479; // 0x1d9 JumpB
	var_9_bool = 0; // 0x1da PushV
	func_486(var_9_bool); // 0x1db Call
	if(var_9_bool == 0) goto Label_479; // 0x1dd JumpB
	var_7_bool = 1; // 0x1de MovB
	
Label_479:
	if(var_7_bool == 0) goto Label_485; // 0x1df JumpB
	var_10_object = Obj(); // 0x1e0 PushV
	func_573(var_10_object); // 0x1e1 Call
	RemoveActor(var_10_object); // 0x1e3 Func
	
Label_485:
	return 0; // 0x1e5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0x19f TMovB
	func_438(); // 0x1a1 Call
	return 0; // 0x1a3 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	func_488(var_26_object); // 0x4 Call
	var_65_bool = var_25_bool == 0; // 0x6 Not
	if(var_65_bool == 0) goto Label_10; // 0x7 JumpB
	var_14_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_21_object); // 0xa Func
	var_66_int = 0; // 0xc PushV
	func_765(var_66_int); // 0xd Call
	SetNPCName(var_66_int); // 0xf ObjFunc
	var_67_string = ""; // 0x11 PushV
	func_767(var_67_string); // 0x12 Call
	SetPhoto(var_67_string); // 0x14 ObjFunc
	var_68_int = 0; // 0x16 PushV
	func_732(var_68_int); // 0x17 Call
	SetPlayerName(var_68_int); // 0x19 ObjFunc
	var_23_int = -1; // 0x1b MovI
	IsOverrideActive(var_22_bool); // 0x1c Func
	var_76_bool = var_22_bool; // 0x1e Push
	if(var_76_bool == 0) goto Label_34; // 0x1f JumpB
	var_14_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_21_object); // 0x22 Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x24 PushV
	var_77_object = var_15_object; // 0x25 Mov
	var_78_object = var_21_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_24_bool); // 0x2b ObjFunc
	
Label_45:
	var_128_bool = var_24_bool == 0; // 0x2d Not
	if(var_128_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_24_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_129_object = Obj(); // 0x34 PushV
	var_129_object = var_15_object; // 0x35 Mov
	func_544(); // 0x36 Call
	StopDialog(var_21_object); // 0x38 Func
	GetReturnValue(var_23_int); // 0x3a ObjFunc
	var_14_int = var_23_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_769(var_93_bool)
{
	var_93_bool = 0; // 0x301 MovB
	return 0; // 0x302 Return
}


func_131(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x84 PushV
	func_769(var_93_bool); // 0x85 Call
	var_94_bool = var_93_bool == 0; // 0x87 Not
	if(var_94_bool == 0) goto Label_138; // 0x88 JumpB
	return 0; // 0x89 Return
	
Label_138:
	var_95_bool = var_92_string == var_2_object; // 0x8a Eq
	if(var_95_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_96_string = ""; // 0x8d PushV
	var_96_string = var_92_string; // 0x8e Mov
	func_548(var_96_string); // 0x8f Call
	var_2_object = var_92_string; // 0x91 TMov
	return 0; // 0x92 Return
}


func_573(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x23d PushV
	self(var_12_object); // 0x23e Func
	var_10_object = var_12_object; // 0x240 Mov
	return 2; // 0x241 Return
}


func_579(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x243 PushV
	var_55_int = var_51_cvector | var_51_cvector; // 0x244 Or
	var_54_float = sqrt(var_55_int); // 0x245 Sqrt2
	var_56_float = 0.0; // 0x246 PushF
	var_57_bool = var_54_float < var_56_float; // 0x247 LT
	if(var_57_bool == 0) goto Label_587; // 0x248 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x249 MovV
	return 2; // 0x24a Return
	
Label_587:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x24b Div2
	return 2; // 0x24c Return
}


func_649(var_84_bool)
{
	var_86_int = 0; var_87_string = ""; // 0x28a PushV
	var_87_string = "ood2Birdmask1"; // 0x28b MovS
	func_589(var_86_int, var_87_string); // 0x28c Call
	var_90_int = 0; // 0x28e PushI
	var_91_bool = var_86_int == var_90_int; // 0x28f Eq
	if(var_91_bool == 0) goto Label_659; // 0x290 JumpB
	var_84_bool = 1; // 0x291 MovB
	return 0; // 0x292 Return
	
Label_659:
	var_84_bool = 0; // 0x293 MovB
	return 0; // 0x294 Return
}


func_765(var_66_int)
{
	var_66_int = 4029; // 0x2fd MovI
	return 0; // 0x2fe Return
}


func_715(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x2cb PushV
	GetMainOutdoorScene(var_26_object); // 0x2cc Func
	var_28_bool = var_26_object == 0; // 0x2ce NullEq
	if(var_28_bool == 0) goto Label_726; // 0x2cf JumpB
	var_29_string = "Can't find main outdoor scene"; // 0x2d0 PushS
	Trace(var_29_string); // 0x2d1 Func
	var_27_object = 0; // 0x2d3 SetNull
	var_23_object = var_27_object; // 0x2d4 Mov
	return 4; // 0x2d5 Return
	
Label_726:
	GetMap(var_27_object); // 0x2d6 ObjFunc
	var_23_object = var_27_object; // 0x2d8 Mov
	return 4; // 0x2d9 Return
}


func_589(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0; // 0x24d PushV
	GetVariable(var_87_string, var_89_int); // 0x24e Func
	var_86_int = var_89_int; // 0x250 Mov
	return 2; // 0x251 Return
}


func_594(var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x252 PushV
	GetGameTime(var_36_float); // 0x253 Func
	var_34_float = var_36_float; // 0x255 Mov
	return 2; // 0x256 Return
}


func_767(var_67_string)
{
	var_67_string = "ui/NPC_Black.png"; // 0x2ff MovS
	return 0; // 0x300 Return
}


func_661(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x296 PushV
	var_162_string = "d2q03"; // 0x297 MovS
	func_589(var_161_int, var_162_string); // 0x298 Call
	var_163_int = 3; // 0x29a PushI
	var_164_bool = var_161_int == var_163_int; // 0x29b Eq
	if(var_164_bool == 0) goto Label_671; // 0x29c JumpB
	var_159_bool = 1; // 0x29d MovB
	return 0; // 0x29e Return
	
Label_671:
	var_159_bool = 0; // 0x29f MovB
	return 0; // 0x2a0 Return
}


func_599()
{
	var_15_string = "ood2Birdmask1"; // 0x258 PushS
	var_16_int = 1; // 0x259 PushI
	SetVariable(var_15_string, var_16_int); // 0x25a Func
	return 0; // 0x25c Return
}


func_732(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x2dc PushV
	var_71_string = "player"; // 0x2dd PushS
	GetVariable(var_71_string, var_70_int); // 0x2de Func
	var_72_int = 0; // 0x2e0 PushI
	var_73_bool = var_70_int == var_72_int; // 0x2e1 Eq
	if(var_73_bool == 0) goto Label_742; // 0x2e2 JumpB
	var_68_int = 200001; // 0x2e3 MovI
	return 2; // 0x2e4 Return
	
Label_742:
	var_74_int = 1; // 0x2e6 PushI
	var_75_bool = var_70_int == var_74_int; // 0x2e7 Eq
	if(var_75_bool == 0) goto Label_747; // 0x2e8 JumpB
	var_68_int = 200002; // 0x2e9 MovI
	return 2; // 0x2ea Return
	
Label_747:
	var_68_int = 200003; // 0x2eb MovI
	return 2; // 0x2ec Return
}


func_605()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x25d PushV
	var_21_string = "d2q03"; // 0x25e PushS
	var_22_int = 3; // 0x25f PushI
	SetVariable(var_21_string, var_22_int); // 0x260 Func
	var_23_object = Obj(); // 0x262 PushV
	func_715(var_23_object); // 0x263 Call
	var_20_object = var_23_object; // 0x264 Mov
	var_30_string = "d2q03BirdmaskGotoLara"; // 0x266 PushS
	var_31_string = "pt_map_lara"; // 0x267 PushS
	var_32_int = 0; // 0x268 PushI
	var_33_int = 15293; // 0x269 PushI
	var_34_float = 0; // 0x26a PushV
	func_594(var_34_float); // 0x26b Call
	AddMark(var_30_string, var_31_string, var_32_int, var_33_int, var_34_float); // 0x26d ObjFunc
	var_37_string = "d2q03BirdmaskGotoLaraSelf"; // 0x26f PushS
	var_38_string = ""; // 0x270 PushS
	var_39_int = 0; // 0x271 PushI
	var_40_int = 15292; // 0x272 PushI
	var_41_float = 0; // 0x273 PushV
	func_594(var_41_float); // 0x274 Call
	AddMark(var_37_string, var_38_string, var_39_int, var_40_int, var_41_float); // 0x276 ObjFunc
	func_749(); // 0x279 Call
	return 2; // 0x27b Return
}


func_544()
{
	CameraSwitchToNormal(); // 0x221 Func
	return 0; // 0x223 Return
}


func_673(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x2a1 PushV
	GetDiaryRoot(var_59_object); // 0x2a2 Func
	var_60_bool = var_59_object == 0; // 0x2a4 Not
	if(var_60_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_61_string = "Can't retrieve diary root"; // 0x2a6 PushS
	Trace(var_61_string); // 0x2a7 Func
	var_57_object = 0; // 0x2a9 MovB
	return 2; // 0x2aa Return
	
Label_683:
	var_57_object = var_59_object; // 0x2ab Mov
	return 2; // 0x2ac Return
}


func_548(var_96_string)
{
	var_97_float = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0; // 0x224 PushV
	var_101_string = "playing "; // 0x225 PushS
	var_102_int = var_101_string + var_96_string; // 0x226 Add
	Trace(var_102_int); // 0x227 Func
	lshGetAnimTimes(var_96_string, var_99_float, var_100_float); // 0x229 Func
	lshPlayAnimation(var_99_float, var_100_float); // 0x22b Func
	var_103_string = "start: "; // 0x22d PushS
	var_104_int = var_103_string + var_99_float; // 0x22e Add
	Trace(var_104_int); // 0x22f Func
	var_105_string = "end: "; // 0x231 PushS
	var_106_int = var_105_string + var_100_float; // 0x232 Add
	Trace(var_106_int); // 0x233 Func
	return 4; // 0x235 Return
}


func_486(var_9_bool)
{
	var_9_bool = 1; // 0x1e6 MovB
	return 0; // 0x1e7 Return
}


func_488(var_25_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; // 0x1e8 PushV
	GetPosition(var_36_cvector); // 0x1e9 ObjFunc
	GetEyesHeight(var_35_float); // 0x1eb ObjFunc
	var_43_float = GetByIndex(var_36_cvector, 1); // 0x1ed PushE
	var_43_float = var_43_float + var_35_float; // 0x1ee Add2
	SetByIndex(var_36_cvector, 1) = var_43_float; // 0x1ef PopE
	GetPosition(var_37_cvector); // 0x1f0 Func
	GetEyesHeight(var_35_float); // 0x1f2 Func
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x1f4 PushE
	var_44_float = var_44_float + var_35_float; // 0x1f5 Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x1f6 PopE
	var_38_cvector = var_36_cvector - var_37_cvector; // 0x1f7 Sub2
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x1f8 PushE
	var_45_float = 0; // 0x1f9 MovI
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x1fa PopE
	var_46_int = var_38_cvector | var_38_cvector; // 0x1fb Or
	var_47_float = sqrt(var_46_int); // 0x1fc Sqrt
	var_38_cvector = var_38_cvector / var_38_cvector; // 0x1fd Div2
	var_39_cvector = -var_38_cvector; // 0x1fe Neg2
	var_48_int = 70; // 0x1ff PushI
	var_49_float = var_38_cvector * var_48_int; // 0x200 Mult
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x201 PushV
	var_52_cvector = CVector(0.0, 1.0, 0.0); // 0x202 PushVec
	var_51_cvector = var_39_cvector ^ var_52_cvector; // 0x203 Xor2
	func_579(var_50_cvector, var_51_cvector); // 0x204 Call
	var_58_int = 25; // 0x206 PushI
	var_59_float = var_50_cvector * var_58_int; // 0x207 Mult
	var_60_int = var_49_float + var_59_float; // 0x208 Add
	var_61_cvector = CVector(0.0, 10.0, 0.0); // 0x209 PushVec
	var_40_cvector = var_60_int - var_61_cvector; // 0x20a Sub2
	var_41_cvector = var_37_cvector + var_40_cvector; // 0x20b Add2
	IsOverrideActive(var_42_bool); // 0x20c Func
	var_62_bool = var_42_bool; // 0x20e Push
	if(var_62_bool == 0) goto Label_530; // 0x20f JumpB
	var_25_bool = 0; // 0x210 MovB
	return 16; // 0x211 Return
	
Label_530:
	StopWorld(); // 0x212 Func
	CameraTransit(var_41_cvector, var_39_cvector); // 0x214 Func
	var_63_float = GetByIndex(var_40_cvector, 0); // 0x216 PushE
	var_64_float = GetByIndex(var_40_cvector, 2); // 0x217 PushE
	Rotate(var_63_float, var_64_float); // 0x218 Func
	CameraWaitForPlayFinish(); // 0x21a Func
	ResumeWorld(); // 0x21c Func
	var_25_bool = 1; // 0x21e MovB
	return 16; // 0x21f Return
}


func_749()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x2ed PushV
	var_44_string = "Adding diary entry"; // 0x2ee PushS
	Trace(var_44_string); // 0x2ef Func
	var_45_int = 133; // 0x2f1 PushI
	var_46_int = 2; // 0x2f2 PushI
	var_47_int = 15270; // 0x2f3 PushI
	CreateDiaryEntry(var_43_object, var_45_int, var_46_int, var_47_int); // 0x2f4 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x2f6 PushV
	var_49_object = var_43_object; // 0x2f7 Mov
	var_50_int = 12; // 0x2f8 MovI
	func_686(var_48_bool, var_49_object, var_50_int); // 0x2f9 Call
	return 2; // 0x2fb Return
}


func_686(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x2ae PushV
	var_57_object = Obj(); // 0x2af PushV
	func_673(var_57_object); // 0x2b0 Call
	var_54_object = var_57_object; // 0x2b1 Mov
	Find(var_50_int, var_55_object); // 0x2b3 ObjFunc
	var_62_bool = var_55_object == 0; // 0x2b5 Not
	if(var_62_bool == 0) goto Label_701; // 0x2b6 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x2b7 PushS
	var_64_int = var_63_string + var_50_int; // 0x2b8 Add
	Trace(var_64_int); // 0x2b9 Func
	var_48_bool = 0; // 0x2bb MovB
	return 6; // 0x2bc Return
	
Label_701:
	AddChild(var_49_object); // 0x2bd ObjFunc
	var_65_string = "player_diary"; // 0x2bf PushS
	var_66_int = 1; // 0x2c0 PushI
	SetVariable(var_65_string, var_66_int); // 0x2c1 Func
	GetCategory(var_56_int); // 0x2c3 ObjFunc
	SetDiarySection(var_56_int); // 0x2c5 Func
	var_48_bool = 0; // 0x2c7 MovB
	return 6; // 0x2c8 Return
}


func_566()
{
	var_10_bool = 0; // 0x236 PushV
	func_769(var_10_bool); // 0x237 Call
	if(var_10_bool == 0) goto Label_572; // 0x239 JumpB
	lshStopSpeech(); // 0x23a Func
	
Label_572:
	return 0; // 0x23c Return
}


func_438()
{
	
Label_438:
	Hold(); // 0x1b6 Func
	goto Label_438; // 0x1b8 Jump
}


func_637(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x27e PushV
	var_114_string = "KnowTheater"; // 0x27f MovS
	func_589(var_113_int, var_114_string); // 0x280 Call
	var_115_int = 1; // 0x282 PushI
	var_116_bool = var_113_int == var_115_int; // 0x283 Eq
	if(var_116_bool == 0) goto Label_647; // 0x284 JumpB
	var_111_bool = 1; // 0x285 MovB
	return 0; // 0x286 Return
	
Label_647:
	var_111_bool = 0; // 0x287 MovB
	return 0; // 0x288 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x40 TMov
	var_1_object = var_77_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_83_int = 1; // 0x43 PushI
	if(var_83_int == 0) goto Label_101; // 0x44 JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x45 PushV
	var_85_object = var_1_object; // 0x46 MovT
	func_649(var_85_object); // 0x47 Call
	if(var_84_bool == 0) goto Label_99; // 0x49 JumpB
	var_92_string = ""; // 0x4a PushV
	var_92_string = "Neutral"; // 0x4b MovS
	func_131(var_78_object, var_92_string); // 0x4c Call
	var_107_int = 6910; // 0x4e PushI
	SetMessage(var_107_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_108_int = 6911; // 0x53 PushI
	var_109_int = 7618; // 0x54 PushI
	var_110_int = 7617; // 0x55 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x56 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x58 PushV
	var_112_object = var_1_object; // 0x59 MovT
	func_637(var_112_object); // 0x5a Call
	if(var_111_bool == 0) goto Label_98; // 0x5c JumpB
	var_117_int = 7249; // 0x5d PushI
	var_118_int = 7993; // 0x5e PushI
	var_119_int = 7989; // 0x5f PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x60 TObjFunc
	
Label_98:
	goto Label_101; // 0x62 Jump
	
Label_101:
	var_120_bool = 0; // 0x65 PushV
	func_769(var_120_bool); // 0x66 Call
	if(var_120_bool == 0) goto Label_116; // 0x68 JumpB
	
Label_105:
	lshWaitForAnimEnd(); // 0x69 Func
	var_121_string = var_3_string; // 0x6b PushT
	if(var_121_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_115:
	goto Label_130; // 0x73 Jump
	
Label_130:
	return 0; // 0x82 Return
	
Label_110:
	var_122_string = ""; // 0x6e PushV
	var_122_string = var_2_object; // 0x6f MovT
	func_548(var_122_string); // 0x70 Call
	goto Label_105; // 0x72 Jump
	
Label_116:
	var_123_string = "all"; // 0x74 PushS
	var_124_string = "idle"; // 0x75 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x76 Func
	
Label_120:
	WaitForAnimEnd(); // 0x78 Func
	var_125_string = var_3_string; // 0x7a PushT
	if(var_125_string == 0) goto Label_125; // 0x7b JumpB
	goto Label_130; // 0x7c Jump
	
Label_125:
	var_126_string = "all"; // 0x7d PushS
	var_127_string = "idle"; // 0x7e PushS
	PlayAnimation(var_126_string, var_127_string); // 0x7f Func
	goto Label_120; // 0x81 Jump
	
Label_99:
	return 0; // 0x63 Return
}


