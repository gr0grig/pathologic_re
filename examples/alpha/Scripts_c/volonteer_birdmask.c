// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_537();
			if(var_6_int == 15324) {
				object var_11_object = var_1_object;
				func_621(var_0_object);
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_627();
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_597();
			}
			if(var_6_int == 15327) {
				object var_35_object = var_1_object;
				func_615(var_0_object);
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_627();
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_597();
			}
			if(var_5_int == 15312) {
				bool var_47_bool;
				func_660(var_47_bool, var_1_object);
				if(var_47_bool != 0) {
					object var_61_object; object var_62_object;
					var_61_object = var_1_object;
					var_62_object = var_0_object;
					func_603();
					func_161(var_6_int, "Neutral");
					var_0_object->SetMessage(14075); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14076, 15314, 15313); //@t
					return 0;
				}
				func_161(var_6_int, "Neutral");
				var_0_object->SetMessage(14079); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool;
				func_638(var_92_bool, var_1_object);
				if(var_92_bool != 0)
					var_0_object->AddReply(14080, 15318, 15317); //@t
				bool var_104_bool;
				func_649(var_104_bool, var_1_object);
				if(var_104_bool != 0)
					var_0_object->AddReply(14110, 15326, 15325); //@t
				var_0_object->AddReply(14082, -1, 15319); //@t
				return 0;
			}
			if(var_5_int == 15326) {
				func_161(var_6_int, "Neutral");
				var_0_object->SetMessage(14111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14112, -1, 15327); //@t
				return 0;
			}
			if(var_5_int == 15318) {
				func_161(var_6_int, "Neutral");
				var_0_object->SetMessage(14081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14109, -1, 15324); //@t
				return 0;
			}
			if(var_5_int == 15314) {
				func_161(var_6_int, "Neutral");
				var_0_object->SetMessage(14077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14078, -1, 15315); //@t
				return 0;
			}
			var_3_string = true;
			bool var_136_bool;
			func_1074(var_136_bool);
			if(var_136_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb2";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_385();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		string var_7_string;
		@GetProperty("npc", var_7_string);
		@Trace(var_7_string);
		int var_9_int; string var_10_string;
		var_7_string = var_10_string;
		func_700(var_9_int, var_10_string);
		@Trace(var_9_int);
		bool var_153_bool; int var_154_int;
		int var_155_int; string var_156_string;
		var_7_string = var_156_string;
		func_700(var_155_int, var_156_string);
		var_155_int = var_154_int;
		func_1060(var_153_bool, var_154_int);
		if(var_153_bool != 0) {
			int var_164_int; object var_165_object;
			var_5_object = var_165_object;
			TaskCall(0);
			func_0(var_166_object, var_164_int, var_165_object);
			TaskReturn();
		}
	}

}


void func_0(object var_0_object, int var_164_int, object var_165_object)
{
	var_0_object = var_165_object;
	bool var_175_bool; object var_176_object;
	var_165_object = var_176_object;
	func_459(var_175_bool, var_176_object);
	if(!var_175_bool) { //@nz
		var_164_int = -2;
		return 8;
	}
	object var_171_object;
	@CreateDialog(var_171_object);
	int var_216_int;
	func_1070(var_216_int);
	var_171_object->SetNPCName(var_216_int);
	string var_217_string;
	func_1072(var_217_string);
	var_171_object->SetPhoto(var_217_string);
	int var_218_int;
	func_683(var_218_int);
	var_171_object->SetPlayerName(var_218_int);
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	@DoDialog(var_171_object);
	object var_227_object; object var_228_object;
	var_165_object = var_227_object;
	var_171_object = var_228_object;
	TaskCall(1);
	func_63(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object);
	TaskReturn();
	bool var_174_bool;
	var_171_object->IsDialogEnd(var_174_bool);
	
	for(;;) {
		var_310_bool = !var_174_bool; //@nz
		if(var_310_bool == 0) goto Label_52;
		@sync();
		var_171_object->IsDialogEnd(var_174_bool);
	}
	
Label_52:
	object var_311_object;
	var_165_object = var_311_object;
	func_515();
	@StopDialog(var_171_object);
	var_171_object->GetReturnValue(-1);
	int var_173_int = var_164_int;
}
EMIT "Stack[-4] = 0";


void func_385(void)
{
	int var_15_int; int var_16_int; bool var_17_bool; float var_18_float; bool var_19_bool;
	@WaitForAnimEnd();
	bool var_20_bool;
	func_454(var_20_bool);
	if(!var_20_bool) //@nz
		return 14;
	int var_24_int;
	func_580(var_24_int);
	int var_13_int;
	var_24_int = var_13_int;
	int var_14_int = 0;
	
	for(;;) {
		bool var_37_bool = false;
		if(var_14_int < 5) {
			bool var_40_bool;
			func_454(var_40_bool);
			if(var_40_bool != 0)
				var_37_bool = true;
		}
		if(var_37_bool != 0) {
			@irand(var_15_int, 3);
			if(var_15_int == 0) {
				if(var_13_int == 0) goto Label_432;
				@irand(var_16_int, var_13_int);
				string var_46_string; int var_47_int;
				var_16_int = var_47_int;
				func_573(var_46_string, var_47_int);
				@PlayAnimation("all", var_46_string);
				@WaitForAnimEnd(var_17_bool);
				if(!var_17_bool) { //@nz
				} else {
			} else {
			if(var_15_int == 1) {
				@rand(var_18_float, 4);
				@Sleep((var_18_float + 1), var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_453;
				}
			} else if(var_14_int != 0) {
				goto Label_453;
			}
			}
				var_14_int += 1;
			}
		}
	Label_453:
		return 14;

	}
	
}


// @pe
void func_515(void)
{
	@CameraSwitchToNormal();
}


void func_580(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string; int var_31_int;
		var_27_int = var_31_int;
		func_573(var_30_string, var_31_int);
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


void func_454(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_519(string var_262_string)
{
	@Trace("playing " + var_262_string);
	float var_265_float;
	float var_266_float;
	@lshGetAnimTimes(var_262_string, var_265_float, var_266_float);
	@lshPlayAnimation(var_265_float, var_266_float);
	@Trace("start: " + var_265_float);
	@Trace("end: " + var_266_float);
}


// @pe
void func_649(bool var_299_bool, object var_300_object)
{
	object var_302_object;
	var_300_object = var_302_object;
	bool var_301_bool;
	func_554(var_301_bool, var_302_object, "powder");
	if(var_301_bool != 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


void func_459(bool var_175_bool, object var_176_object)
{
	cvector var_186_cvector;
	var_176_object->GetPosition(var_186_cvector);
	float var_185_float;
	var_176_object->GetEyesHeight(var_185_float);
	var_193_float = GetByIndex(var_186_cvector, 1);
	SetByIndex(var_186_cvector, 1) = (var_193_float + var_185_float);
	cvector var_187_cvector;
	@GetPosition(var_187_cvector);
	@GetEyesHeight(var_185_float);
	var_194_float = GetByIndex(var_187_cvector, 1);
	SetByIndex(var_187_cvector, 1) = (var_194_float + var_185_float);
	cvector var_188_cvector = var_186_cvector - var_187_cvector;
	var_195_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (float)0;
	var_197_float = sqrt(var_188_cvector | var_188_cvector);
	var_188_cvector /= var_197_float;
	cvector var_189_cvector = -var_188_cvector;
	cvector var_200_cvector;
	func_544(var_200_cvector, (var_189_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_190_cvector = ((var_188_cvector * 70) + (var_200_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_192_bool;
	@IsOverrideActive(var_192_bool);
	if(var_192_bool != 0)
		var_175_bool = false;
	@StopWorld();
	@CameraTransit((var_187_cvector + var_190_cvector), var_189_cvector);
	var_213_float = GetByIndex(var_190_cvector, 0);
	var_214_float = GetByIndex(var_190_cvector, 2);
	@Rotate(var_213_float, var_214_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_175_bool = true;
}


// @pe
void func_660(bool var_234_bool, object var_235_object)
{
	object var_237_object;
	var_235_object = var_237_object;
	func_670(var_237_object);
	bool var_236_bool;
	if(var_236_bool != 0) {
		var_234_bool = true;
		return 0;
	}
	var_234_bool = false;
}


// @pe
void func_597(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_537(void)
{
	bool var_8_bool;
	func_1074(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_603(void)
{
	string var_251_string;
	@GetProperty("npc", var_251_string);
	@SetVariable((("oo" + var_251_string) + "1"), 1);
}


void func_670(bool var_236_bool)
{
	string var_240_string;
	@GetProperty("npc", var_240_string);
	int var_241_int;
	@GetVariable((("oo" + var_240_string) + "1"), var_241_int);
	var_236_bool = var_241_int == 0;
}


void func_544(cvector var_200_cvector, cvector var_201_cvector)
{
	float var_204_float = sqrt(var_201_cvector | var_201_cvector);
	if(var_204_float < 0.000001)
		var_200_cvector = [0.0, 0.0, 0.0];
	var_200_cvector = var_201_cvector / var_204_float;
}


// @pe
void func_161(object var_2_object, string var_258_string)
{
	bool var_259_bool;
	func_1074(var_259_bool);
	if(!var_259_bool) //@nz
		return 0;
	if(var_258_string == var_2_object)
		return 0;
	string var_262_string;
	func_519(var_262_string);
	var_2_object = var_262_string;
}


void func_1060(bool var_153_bool, int var_154_int)
{
	int var_158_int;
	@GetVariable(("vol_" + var_154_int), var_158_int);
	var_153_bool = (var_158_int & 4) != 0;
}


void func_615(object var_35_object)
{
	int var_38_int;
	var_35_object->RemoveItemByType(var_38_int, "powder", 1);
}


void func_554(bool var_289_bool, object var_290_object, string var_291_string)
{
	int var_294_int;
	@GetInvItemByName(var_294_int, var_291_string);
	bool var_295_bool;
	var_290_object->HasItem(var_294_int, var_295_bool);
	var_295_bool = var_289_bool;
}


void func_683(int var_218_int)
{
	int var_220_int;
	@GetVariable("player", var_220_int);
	if(var_220_int == 0) {
		var_218_int = 200001;
		return 2;
	EMIT "GOTO 0x2ba";
	}
	if(var_220_int == 1) {
		var_218_int = 200002;
		return 2;
	}
	var_218_int = 200003;
}


void func_621(object var_11_object)
{
	int var_14_int;
	var_11_object->RemoveItemByType(var_14_int, "burah_serum", 1);
}


void func_1070(int var_216_int)
{
	var_216_int = 4029;
}


void func_1072(string var_217_string)
{
	var_217_string = "ui/NPC_Black.png";
}


void func_561(bool var_22_bool, string var_23_string, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_23_string);
	if(var_27_object == null)
		var_22_bool = false;
	@Trigger(var_27_object, var_24_string, var_25_string);
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1074(bool var_259_bool)
{
	var_259_bool = false;
}


void func_627(void)
{
	string var_20_string;
	@GetProperty("npc", var_20_string);
	bool var_22_bool; string var_25_string;
	var_20_string = var_25_string;
	func_561(var_22_bool, "volonteers_danko", "rescue", var_25_string);
}


// @pe
void func_700(int var_9_int, string var_10_string)
{
	@_strlwr(var_10_string);
	if(var_10_string == "alexandr") {
		var_9_int = 1;
		return 0;
	}
	if(var_10_string == "andrei") {
		var_9_int = 2;
		return 0;
	}
	if(var_10_string == "anna") {
		var_9_int = 3;
		return 0;
	}
	if(var_10_string == "bigvlad") {
		var_9_int = 4;
		return 0;
	}
	if(var_10_string == "eva") {
		var_9_int = 5;
		return 0;
	}
	if(var_10_string == "georg") {
		var_9_int = 6;
		return 0;
	}
	if(var_10_string == "grif") {
		var_9_int = 7;
		return 0;
	}
	if(var_10_string == "han") {
		var_9_int = 8;
		return 0;
	}
	if(var_10_string == "julia") {
		var_9_int = 9;
		return 0;
	}
	if(var_10_string == "kapella") {
		var_9_int = 10;
		return 0;
	}
	if(var_10_string == "katerina") {
		var_9_int = 11;
		return 0;
	}
	if(var_10_string == "klara") {
		var_9_int = 12;
		return 0;
	}
	if(var_10_string == "lara") {
		var_9_int = 13;
		return 0;
	}
	if(var_10_string == "laska") {
		var_9_int = 14;
		return 0;
	}
	if(var_10_string == "maria") {
		var_9_int = 15;
		return 0;
	}
	if(var_10_string == "mark") {
		var_9_int = 16;
		return 0;
	}
	if(var_10_string == "mat") {
		var_9_int = 17;
		return 0;
	}
	if(var_10_string == "mishka") {
		var_9_int = 18;
		return 0;
	}
	if(var_10_string == "mladvlad") {
		var_9_int = 19;
		return 0;
	}
	if(var_10_string == "notkin") {
		var_9_int = 20;
		return 0;
	}
	if(var_10_string == "ospina") {
		var_9_int = 21;
		return 0;
	}
	if(var_10_string == "petr") {
		var_9_int = 22;
		return 0;
	}
	if(var_10_string == "rubin") {
		var_9_int = 23;
		return 0;
	}
	if(var_10_string == "spi4ka") {
		var_9_int = 24;
		return 0;
	}
	if(var_10_string == "starshina") {
		var_9_int = 25;
		return 0;
	}
	if(var_10_string == "viktor") {
		var_9_int = 26;
		return 0;
	}
	if(var_10_string == "wasted_woman") {
		var_9_int = 27;
		return 0;
	}
	if(var_10_string == "wasted_male") {
		var_9_int = 28;
		return 0;
	}
	if(var_10_string == "alkash") {
		var_9_int = 29;
		return 0;
	}
	if(var_10_string == "boy") {
		var_9_int = 30;
		return 0;
	}
	if(var_10_string == "girl") {
		var_9_int = 31;
		return 0;
	}
	if(var_10_string == "littleboy") {
		var_9_int = 32;
		return 0;
	}
	if(var_10_string == "littlegirl") {
		var_9_int = 33;
		return 0;
	}
	if(var_10_string == "butcher") {
		var_9_int = 34;
		return 0;
	}
	if(var_10_string == "dohodyaga") {
		var_9_int = 35;
		return 0;
	}
	if(var_10_string == "unosha") {
		var_9_int = 36;
		return 0;
	}
	if(var_10_string == "vaxxabit") {
		var_9_int = 37;
		return 0;
	}
	if(var_10_string == "vaxxabitka") {
		var_9_int = 38;
		return 0;
	}
	if(var_10_string == "woman") {
		var_9_int = 39;
		return 0;
	}
	if(var_10_string == "worker") {
		var_9_int = 40;
		return 0;
	}
	if(var_10_string == "whitemask") {
		var_9_int = 42;
		return 0;
	}
	if(var_10_string == "birdmask") {
		var_9_int = 43;
		return 0;
	}
	if(var_10_string == "birdmask") {
		var_9_int = 44;
		return 0;
	}
	if(var_10_string == "patrol") {
		var_9_int = 46;
		return 0;
	}
	if(var_10_string == "danko") {
		var_9_int = 47;
		return 0;
	}
	if(var_10_string == "alkash_d") {
		var_9_int = 48;
		return 0;
	}
	if(var_10_string == "boy_d") {
		var_9_int = 49;
		return 0;
	}
	if(var_10_string == "butcher_d") {
		var_9_int = 50;
		return 0;
	}
	if(var_10_string == "dohodyaga_d") {
		var_9_int = 51;
		return 0;
	}
	if(var_10_string == "girl_d") {
		var_9_int = 52;
		return 0;
	}
	if(var_10_string == "littleboy_d") {
		var_9_int = 53;
		return 0;
	}
	if(var_10_string == "littlegirl_d") {
		var_9_int = 54;
		return 0;
	}
	if(var_10_string == "unosha2") {
		var_9_int = 55;
		return 0;
	}
	if(var_10_string == "unosha_d") {
		var_9_int = 56;
		return 0;
	}
	if(var_10_string == "unosha2_d") {
		var_9_int = 57;
		return 0;
	}
	if(var_10_string == "vaxxabit_d") {
		var_9_int = 58;
		return 0;
	}
	if(var_10_string == "vaxxabitka_d") {
		var_9_int = 59;
		return 0;
	}
	if(var_10_string == "wasted_male_d") {
		var_9_int = 60;
		return 0;
	}
	if(var_10_string == "wasted_woman_d") {
		var_9_int = 61;
		return 0;
	}
	if(var_10_string == "woman_d") {
		var_9_int = 62;
		return 0;
	}
	if(var_10_string == "worker2") {
		var_9_int = 63;
		return 0;
	}
	if(var_10_string == "worker_d") {
		var_9_int = 64;
		return 0;
	}
	if(var_10_string == "worker2_d") {
		var_9_int = 65;
		return 0;
	}
	if(var_10_string == "burah") {
		var_9_int = 66;
		return 0;
	}
	if(var_10_string == "gorbun_daughter") {
		var_9_int = 67;
		return 0;
	}
	if(var_10_string == "gorbun") {
		var_9_int = 68;
		return 0;
	}
	if(var_10_string == "albinos") {
		var_9_int = 69;
		return 0;
	}
	if(var_10_string == "aglaja") {
		var_9_int = 70;
		return 0;
	}
	if(var_10_string == "nude") {
		var_9_int = 71;
		return 0;
	}
	if(var_10_string == "block") {
		var_9_int = 72;
		return 0;
	}
	if(var_10_string == "officer") {
		var_9_int = 73;
		return 0;
	}
	var_9_int = -1;
}


void func_573(string var_30_string, int var_31_int)
{
	string var_33_string = "idle";
	if(var_31_int != 0)
		var_33_string += var_31_int;
	var_33_string = var_30_string;
}


// @pe
void func_638(bool var_287_bool, object var_288_object)
{
	object var_290_object;
	var_288_object = var_290_object;
	bool var_289_bool;
	func_554(var_289_bool, var_290_object, "burah_serum");
	if(var_289_bool != 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_227_object, object var_228_object)
{
	var_0_object = var_228_object;
	var_1_object = var_227_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_234_bool;
		func_660(var_234_bool, var_1_object);
		if(var_234_bool != 0) {
			object var_248_object; object var_249_object;
			var_248_object = var_1_object;
			var_249_object = var_0_object;
			func_603();
			func_161(var_228_object, "Neutral");
			var_0_object->SetMessage(14075); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14076, 15314, 15313); //@t
		} else {
					func_161(var_228_object, "Neutral");
					var_0_object->SetMessage(14079); //@t
					var_0_object->ClearReplies(); //@t
					bool var_287_bool;
					func_638(var_287_bool, var_1_object);
					if(var_287_bool != 0)
						var_0_object->AddReply(14080, 15318, 15317); //@t
					bool var_299_bool;
					func_649(var_299_bool, var_1_object);
					if(var_299_bool != 0)
						var_0_object->AddReply(14110, 15326, 15325); //@t
					var_0_object->AddReply(14082, -1, 15319); //@t
		}
	}
	for(;;) {
		bool var_277_bool;
		func_1074(var_277_bool);
		if(var_277_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_519(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_160;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_160:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


