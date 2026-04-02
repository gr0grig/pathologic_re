// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1126();
			if(var_8_bool == 34783) {
				object var_13_object = var_1_object;
				func_1266(var_0_object);
				object var_37_object = var_1_object;
				func_1310(var_0_object);
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1256();
			}
			if(var_8_bool == 34784) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_1256();
				object var_78_object = var_1_object;
				func_1277(var_0_object);
			}
			if(var_8_bool == 34785) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1256();
				object var_88_object = var_1_object;
				func_1288(var_0_object);
				object var_94_object = var_1_object;
				func_1299(var_0_object);
				object var_100_object = var_1_object;
				func_1299(var_0_object);
			}
			if(var_8_bool == 34786) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1256();
			}
			if(var_7_cvector == 34782) {
				bool var_108_bool = false;
				bool var_109_bool;
				func_1321(var_1_object);
				if(var_109_bool != 0) {
					bool var_117_bool;
					func_1333(var_1_object);
					if(var_117_bool != 0)
						var_108_bool = true;
				}
				if(var_108_bool != 0) {
					object var_123_object; object var_124_object;
					var_123_object = var_1_object;
					var_124_object = var_0_object;
					func_1243();
					object var_127_object; object var_128_object;
					var_127_object = var_1_object;
					var_128_object = var_0_object;
					func_1249();
					func_178(var_8_bool, "Isee");
					var_0_object->SetMessage(533268); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(534543, 36176, 36175); //@t
					return 0;
				}
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(533273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533274, -1, 34788); //@t
				var_0_object->AddReply(534553, -1, 36185); //@t
				return 0;
			}
			if(var_7_cvector == 36176) {
				func_178(var_8_bool, "Isee");
				var_0_object->SetMessage(534544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534545, 36178, 36177); //@t
				return 0;
			}
			if(var_7_cvector == 36178) {
				func_178(var_8_bool, "Isee");
				var_0_object->SetMessage(534546); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534547, 36180, 36179); //@t
				var_0_object->AddReply(535169, 36835, 36834); //@t
				return 0;
			}
			if(var_7_cvector == 36835) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(535170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535171, 36180, 36836); //@t
				return 0;
			}
			if(var_7_cvector == 36180) {
				func_178(var_8_bool, "Isee");
				var_0_object->SetMessage(534548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534549, 36182, 36181); //@t
				return 0;
			}
			if(var_7_cvector == 36182) {
				func_178(var_8_bool, "Threat");
				var_0_object->SetMessage(534550); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534551, 36841, 36183); //@t
				var_0_object->AddReply(535172, 36839, 36838); //@t
				return 0;
			}
			if(var_7_cvector == 36839) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(535173); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535174, 36184, 36840); //@t
				return 0;
			}
			if(var_7_cvector == 36841) {
				func_178(var_8_bool, "Threat");
				var_0_object->SetMessage(535175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535176, 36184, 36842); //@t
				bool var_216_bool;
				func_1345(var_1_object);
				if(var_216_bool != 0)
					var_0_object->AddReply(535177, -1, 36843); //@t
				return 0;
			}
			if(var_7_cvector == 36184) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(534552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533269, -1, 34783); //@t
				var_0_object->AddReply(533270, -1, 34784); //@t
				var_0_object->AddReply(533271, -1, 34785); //@t
				var_0_object->AddReply(533272, -1, 34786); //@t
				return 0;
			}
			var_3_string = true;
			bool var_241_bool;
			func_1436(var_241_bool);
			if(var_241_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc9";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_571(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1133(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1133(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_678();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_693();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_636();
			bool var_11_bool = false;
			bool var_12_bool;
			func_850(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_605(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_585(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1133(var_53_object);
					var_53_object = var_52_object;
					func_1000(var_51_bool, var_52_object);
				}
			} else {
				func_600(var_7_int);
				func_627();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_627();
		else
			func_1080("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_818();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_841(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_522(var_25_object);
			func_1080("Neutral");
			func_636();
			func_627();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_855(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1430(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1428(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1432(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1434(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1411(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1133(var_100_object);
	var_100_object = var_99_object;
	func_942(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_274_bool = !var_36_bool; //@nz
		if(var_274_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_275_object;
	var_27_object = var_275_object;
	func_924();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1154(int var_32_int, int var_33_int)
{
	object var_35_object;
	@CreateIntVector(var_35_object);
	var_35_object->add(var_32_int);
	var_35_object->add(var_33_int);
	@SendWorldWndMessage(3, var_35_object);
}
EMIT "Stack[-1] = 0";


void func_1411(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x592";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1288(object var_88_object)
{
	@Trace("feromicin is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_1185(var_91_object, "feromicin", 1);
}


// @pe
void func_522(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1037(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1210(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1111(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1166(object var_21_object, object var_22_object, int var_23_int)
{
	int var_27_int;
	var_22_object->GetItemID(var_27_int);
	int var_28_int;
	@GetInvItemProperty(var_28_int, var_27_int, "Category");
	bool var_29_bool;
	var_21_object->AddItem(var_29_bool, var_22_object, var_28_int, var_23_int);
	if(!var_29_bool) { //@nz
		var_21_object->DropItems(var_22_object, var_23_int);
	} else {
		int var_32_int; int var_33_int;
		var_27_int = var_32_int;
		var_23_int = var_33_int;
		func_1154(var_32_int, var_33_int);
	}
	
}


// @pe
void func_1299(object var_94_object)
{
	@Trace("neomicin is given");
	object var_97_object;
	var_94_object = var_97_object;
	func_1185(var_97_object, "neomicin", 1);
}


void func_1428(int var_86_int)
{
	var_86_int = 515527;
}


void func_1430(int var_85_int)
{
	var_85_int = 513334;
}


void func_1432(string var_87_string)
{
	var_87_string = "ui/NPC_Aglaja.png";
}


// @pe
void func_1277(object var_78_object)
{
	@Trace("whitevaccine is given");
	object var_81_object;
	var_78_object = var_81_object;
	func_1185(var_81_object, "white_vaccine", 1);
}


void func_1434(string var_88_string)
{
	var_88_string = "ui/NPC_Aglaja_b.png";
}


void func_924(void)
{
	bool var_277_bool;
	@CameraSwitchToNormal(true);
	bool var_279_bool;
	func_1436(var_279_bool);
	if(var_279_bool != 0) {
	} else {
		@HasAnimationTrack(var_277_bool, "head");
		if(var_277_bool == 0) goto Label_941;
		@UnlookAsync("head");
	}
Label_941:
	
}


void func_1436(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1310(object var_37_object)
{
	@Trace("samopal ammo5 is given");
	object var_40_object;
	var_37_object = var_40_object;
	func_1185(var_40_object, "samopal_ammo", 5);
}


void func_1185(object var_16_object, string var_17_string, int var_18_int)
{
	object var_20_object;
	@CreateInvItem(var_20_object);
	var_20_object->SetItemName(var_17_string);
	object var_21_object; object var_22_object; int var_23_int;
	var_16_object = var_21_object;
	var_20_object = var_22_object;
	var_18_int = var_23_int;
	func_1166(var_21_object, var_22_object, var_23_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_678(void)
{
	func_818();
	func_636();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1321(bool var_201_bool)
{
	int var_203_int;
	func_1149(var_203_int, "ood7AglajaPetr1");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_942(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1000(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1037(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1037(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1000(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_998;
	
Label_998:
	var_98_bool = true;
	
}


void func_1198(bool var_221_bool, string var_222_string, string var_223_string)
{
	object var_225_object;
	@FindActor(var_225_object, var_222_string);
	if(var_225_object == null)
		var_221_bool = false;
	@Trigger(var_225_object, var_223_string);
	var_221_bool = true;
}
EMIT "Stack[-1] = 0";


void func_816(bool var_45_bool)
{
	var_45_bool = true;
}


// @pe
void func_178(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_1436(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string; bool var_232_bool;
	var_227_string = var_231_string;
	if(var_227_string == "")
		var_232_bool = false;
	else
		var_232_bool = true;
	func_1096(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	
}


void func_818(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1333(bool var_209_bool)
{
	int var_211_int;
	func_1149(var_211_int, "d7q03");
	if(var_211_int == 4)
		var_209_bool = true;
	var_209_bool = false;
}


void func_693(void)
{
	@StopGroup0();
	func_636();
	func_1080("Neutral");
	func_627();
}


void func_823(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1080(string var_250_string)
{
	bool var_254_bool; float var_255_float; float var_256_float;
	@lshHasAnimation(var_254_bool, var_250_string);
	if(var_254_bool != 0) {
		@lshGetAnimTimes(var_250_string, var_255_float, var_256_float);
		@lshPlayAnimation(var_255_float, var_256_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_250_string);
	}
	
}


void func_1210(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_571(object var_0_object)
{
	bool var_7_bool;
	func_850(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_747();
	}
}
EMIT "Return(); Pop(0)";


void func_831(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


// @pe
void func_1345(bool var_216_bool)
{
	int var_218_int;
	func_1149(var_218_int, "d7q03");
	if(var_218_int == 1000)
		var_216_bool = true;
	var_216_bool = false;
}


void func_1219(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1096(string var_231_string, bool var_232_bool)
{
	bool var_238_bool; float var_239_float; float var_240_float;
	@lshHasAnimation(var_238_bool, var_231_string);
	if(var_238_bool != 0) {
		@lshGetAnimTimes(var_231_string, var_239_float, var_240_float);
		@lshPlayAnimation(var_239_float, var_240_float, var_232_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_231_string);
	}
	
}


void func_841(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_831(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_585(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_841(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1226(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1219(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1357(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 645, 2, 533279);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_1383(var_50_bool, var_51_object, 641);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool = false;
		bool var_201_bool;
		func_1321(var_1_object);
		if(var_201_bool != 0) {
			bool var_209_bool;
			func_1333(var_1_object);
			if(var_209_bool != 0)
				var_200_bool = true;
		}
		if(var_200_bool != 0) {
			object var_215_object; object var_216_object;
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_1243();
			object var_219_object; object var_220_object;
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_1249();
			func_178(var_194_object, "Isee");
			var_0_object->SetMessage(533268); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(534543, 36176, 36175); //@t
		} else {
					func_178(var_194_object, "Neutral");
					var_0_object->SetMessage(533273); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533274, -1, 34788); //@t
					var_0_object->AddReply(534553, -1, 36185); //@t
		}
	}
	for(;;) {
		bool var_248_bool;
		func_1436(var_248_bool);
		if(var_248_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1080(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_177;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_177:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_850(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_855(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1139(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1436(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_918;
		@LookAsyncCamera("head");
	}
Label_918:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_600(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1111(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1436(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1370(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1243(void)
{
	@SetVariable("ood7AglajaPetr1", 1);
}


void func_605(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_823(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1249(void)
{
	bool var_221_bool;
	func_1198(var_221_bool, "quest_d7_03", "remove_maria");
}


void func_1126(void)
{
	bool var_10_bool;
	func_1436(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1383(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_1370(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SendWorldWndMessage(7);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1256(void)
{
	func_1357();
	bool var_68_bool;
	func_1198(var_68_bool, "quest_d7_03", "completed");
}


void func_1000(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1111(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_747(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_850(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1226(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_850(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1219(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_802;
			goto Label_813;
			}
				Label_802:
					bool var_45_bool;
					func_816(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_808;
			}
		}
	Label_813:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_808:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1133(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1266(object var_13_object)
{
	@Trace("samopal is given");
	object var_16_object;
	var_13_object = var_16_object;
	func_1185(var_16_object, "Samopal", 1);
}


void func_627(void)
{
	float var_286_float;
	@rand(var_286_float, 8, 16);
	@SetTimer(10, var_286_float);
}


void func_1139(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_636(void)
{
	@KillTimer(10);
}


void func_1149(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


