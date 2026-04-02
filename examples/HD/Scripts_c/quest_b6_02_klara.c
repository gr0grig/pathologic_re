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
			func_1129();
			if(var_8_bool == 22381) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1307();
				object var_70_object = var_1_object;
				func_1371(var_0_object);
			}
			if(var_8_bool == 29741) {
				object var_98_object = var_1_object;
				func_1387(var_0_object);
			}
			if(var_8_bool == 22389) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_1307();
				object var_142_object = var_1_object;
				func_1371(var_0_object);
			}
			if(var_8_bool == 22392) {
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_1338();
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_1354();
				object var_163_object = var_1_object;
				func_1360(var_0_object);
			}
			if(var_7_cvector == 22380) {
				bool var_189_bool;
				func_1418(var_1_object);
				if(var_189_bool != 0) {
					object var_197_object; object var_198_object;
					var_197_object = var_1_object;
					var_198_object = var_0_object;
					func_1348();
					func_189(var_8_bool, "Fear");
					var_0_object->SetMessage(521178); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528362, 29735, 29734); //@t
					return 0;
				}
				func_189(var_8_bool, "Fear");
				var_0_object->SetMessage(521184); //@t
				var_0_object->ClearReplies(); //@t
				bool var_224_bool;
				func_1430(var_1_object);
				if(var_224_bool != 0)
					var_0_object->AddReply(521185, 22388, 22387); //@t
				bool var_233_bool = false;
				bool var_234_bool;
				func_1406(var_1_object);
				if(var_234_bool != 0) {
					bool var_240_bool;
					func_1394(var_1_object);
					if(!var_240_bool) //@nz
						var_233_bool = true;
				}
				if(var_233_bool != 0)
					var_0_object->AddReply(521188, 22391, 22390); //@t
				var_0_object->AddReply(521191, -1, 22393); //@t
				return 0;
			}
			if(var_7_cvector == 22391) {
				func_189(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(521189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528371, 29744, 29743); //@t
				var_0_object->AddReply(528373, 29744, 29745); //@t
				return 0;
			}
			if(var_7_cvector == 29744) {
				func_189(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(528372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521190, -1, 22392); //@t
				return 0;
			}
			if(var_7_cvector == 22388) {
				func_189(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(521186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521187, -1, 22389); //@t
				return 0;
			}
			if(var_7_cvector == 29735) {
				func_189(var_8_bool, "Fear");
				var_0_object->SetMessage(528363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528364, 29737, 29736); //@t
				return 0;
			}
			if(var_7_cvector == 29737) {
				func_189(var_8_bool, "Fear");
				var_0_object->SetMessage(528365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528366, 29739, 29738); //@t
				return 0;
			}
			if(var_7_cvector == 29739) {
				func_189(var_8_bool, "Fear");
				var_0_object->SetMessage(528367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521183, 29740, 22385); //@t
				return 0;
			}
			if(var_7_cvector == 29740) {
				func_189(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(528368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521179, -1, 22381); //@t
				var_0_object->AddReply(528369, -1, 29741); //@t
				return 0;
			}
			var_3_string = true;
			bool var_308_bool;
			func_1597(var_308_bool);
			if(var_308_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd4";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_540(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1136(var_13_object);
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
			func_1136(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_647();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_662();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_605();
			bool var_11_bool = false;
			bool var_12_bool;
			func_853(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_574(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_554(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1136(var_53_object);
					var_53_object = var_52_object;
					func_1003(var_51_bool, var_52_object);
				}
			} else {
				func_569(var_7_int);
				func_596();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_596();
		else
			func_1083("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_787();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_844(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_491(var_25_object);
			func_1083("Neutral");
			func_605();
			func_596();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_858(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1591(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1589(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1593(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1595(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1572(var_89_int);
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
	func_1136(var_100_object);
	var_100_object = var_99_object;
	func_945(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_282_bool = !var_36_bool; //@nz
		if(var_282_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_283_object;
	var_27_object = var_283_object;
	func_927();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1539(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_1283(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1290(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1283(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1040(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1274(var_153_int);
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
		func_1114(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_785(bool var_45_bool)
{
	var_45_bool = true;
}


void func_787(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_792(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1307(void)
{
	@SetVariable("b6q02", 1);
	object var_19_object;
	func_1522(var_19_object);
	object var_16_object;
	var_19_object = var_16_object;
	float var_30_float;
	func_1269(var_30_float);
	var_16_object->AddMark("b6q02KlaraGotoRat", "pt_map_theater", 0, 521207, var_30_float);
	func_1442();
	func_1468();
	bool var_64_bool;
	func_1257(var_64_bool, "quest_b6_02", "init_maze");
}
EMIT "Stack[-1] = 0";


void func_540(object var_0_object)
{
	bool var_7_bool;
	func_853(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_716();
	}
}
EMIT "Return(); Pop(0)";


void func_800(bool var_119_bool, object var_120_object, string var_121_string)
{
	var_126_bool = IsFuncExist(var_120_object, "HasProperty", 2);
	if(!var_126_bool) { //@nz
		var_119_bool = false;
		return 2;
	}
	bool var_123_bool;
	var_120_object->HasProperty(var_121_string, var_123_bool);
	var_123_bool = var_119_bool;
}


void func_1572(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x633";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_554(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_844(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_812(bool var_111_bool, object var_112_object, string var_113_string, float var_114_float, float var_115_float, float var_116_float)
{
	object var_120_object;
	var_112_object = var_120_object;
	string var_121_string;
	var_113_string = var_121_string;
	bool var_119_bool;
	func_800(var_119_bool, var_120_object, var_121_string);
	if(!var_119_bool) //@nz
		var_111_bool = false;
	float var_118_float;
	var_112_object->GetProperty(var_113_string, var_118_float);
	float var_129_float; float var_131_float; float var_132_float;
	var_115_float = var_131_float;
	var_116_float = var_132_float;
	func_1152(var_129_float, (var_118_float + var_114_float), var_131_float, var_132_float);
	var_112_object->SetProperty(var_113_string, var_129_float);
	var_111_bool = true;
}


void func_1589(int var_86_int)
{
	var_86_int = 515540;
}


void func_1591(int var_85_int)
{
	var_85_int = 502865;
}


void func_1593(string var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
}


// @pe
void func_1338(void)
{
	func_1455();
	bool var_156_bool;
	func_1257(var_156_bool, "quest_b6_02", "completed");
}


void func_1083(string var_235_string)
{
	bool var_239_bool; float var_240_float; float var_241_float;
	@lshHasAnimation(var_239_bool, var_235_string);
	if(var_239_bool != 0) {
		@lshGetAnimTimes(var_235_string, var_240_float, var_241_float);
		@lshPlayAnimation(var_240_float, var_241_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_235_string);
	}
	
}


void func_1595(string var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
}


void func_1597(bool var_80_bool)
{
	var_80_bool = true;
}


void func_574(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_792(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_569(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_834(bool var_15_bool, cvector var_16_cvector)
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
void func_1348(void)
{
	@SetVariable("oob6Klara2_1", 1);
}


// @pe
void func_1354(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1099(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_844(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_834(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


// @pe
void func_1360(object var_163_object)
{
	@Trace("recipe7 is given");
	object var_166_object;
	var_163_object = var_166_object;
	func_1199(var_166_object, "recipe7", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1418(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1348();
			func_189(var_194_object, "Fear");
			var_0_object->SetMessage(521178); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528362, 29735, 29734); //@t
		} else {
					func_189(var_194_object, "Fear");
					var_0_object->SetMessage(521184); //@t
					var_0_object->ClearReplies(); //@t
					bool var_253_bool;
					func_1430(var_1_object);
					if(var_253_bool != 0)
						var_0_object->AddReply(521185, 22388, 22387); //@t
					bool var_262_bool = false;
					bool var_263_bool;
					func_1406(var_1_object);
					if(var_263_bool != 0) {
						bool var_269_bool;
						func_1394(var_1_object);
						if(!var_269_bool) //@nz
							var_262_bool = true;
					}
					if(var_262_bool != 0)
						var_0_object->AddReply(521188, 22391, 22390); //@t
					var_0_object->AddReply(521191, -1, 22393); //@t
		}
	}
	for(;;) {
		bool var_233_bool;
		func_1597(var_233_bool);
		if(var_233_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1083(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_188;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_188:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_596(void)
{
	float var_294_float;
	@rand(var_294_float, 8, 16);
	@SetTimer(10, var_294_float);
}


void func_853(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_858(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1142(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1597(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_921;
		@LookAsyncCamera("head");
	}
Label_921:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


// @pe
void func_1371(object var_71_object)
{
	object var_75_object;
	func_1522(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_1539(var_72_object, "pt_map_theater", (float)2);
	object var_95_object;
	func_1522(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


void func_1114(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1597(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_605(void)
{
	@KillTimer(10);
}


void func_1129(void)
{
	bool var_10_bool;
	func_1597(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1387(object var_98_object)
{
	object var_101_object;
	var_98_object = var_101_object;
	bool var_100_bool;
	func_1212(var_100_bool, var_101_object, -0.1);
}


void func_1136(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1394(bool var_269_bool)
{
	int var_271_int;
	func_1163(var_271_int, "b6q02");
	if(var_271_int == 1000)
		var_269_bool = true;
	var_269_bool = false;
}


void func_1142(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1406(bool var_263_bool)
{
	int var_265_int;
	func_1163(var_265_int, "b6q02");
	if(var_265_int == 2)
		var_263_bool = true;
	var_263_bool = false;
}


// @pe
void func_1152(float var_129_float, float var_130_float, float var_131_float, float var_132_float)
{
	if(var_130_float < var_131_float) {
		var_131_float = var_129_float;
		return 0;
	}
	if(var_130_float > var_132_float) {
		var_132_float = var_129_float;
		return 0;
	}
	var_130_float = var_129_float;
}


// @pe
void func_647(void)
{
	func_787();
	func_605();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1418(bool var_200_bool)
{
	int var_202_int;
	func_1163(var_202_int, "oob6Klara2_1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1163(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1168(int var_182_int, int var_183_int)
{
	object var_185_object;
	@CreateIntVector(var_185_object);
	var_185_object->add(var_182_int);
	var_185_object->add(var_183_int);
	@SendWorldWndMessage(3, var_185_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1430(bool var_253_bool)
{
	int var_255_int;
	func_1163(var_255_int, "b6q02");
	if(var_255_int == 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


void func_662(void)
{
	@StopGroup0();
	func_605();
	func_1083("Neutral");
	func_596();
}


void func_1180(object var_171_object, object var_172_object, int var_173_int)
{
	int var_177_int;
	var_172_object->GetItemID(var_177_int);
	int var_178_int;
	@GetInvItemProperty(var_178_int, var_177_int, "Category");
	bool var_179_bool;
	var_171_object->AddItem(var_179_bool, var_172_object, var_178_int, var_173_int);
	if(!var_179_bool) { //@nz
		var_171_object->DropItems(var_172_object, var_173_int);
	} else {
		int var_182_int; int var_183_int;
		var_177_int = var_182_int;
		var_173_int = var_183_int;
		func_1168(var_182_int, var_183_int);
	}
	
}


void func_927(void)
{
	bool var_285_bool;
	@CameraSwitchToNormal(true);
	bool var_287_bool;
	func_1597(var_287_bool);
	if(var_287_bool != 0) {
	} else {
		@HasAnimationTrack(var_285_bool, "head");
		if(var_285_bool == 0) goto Label_944;
		@UnlookAsync("head");
	}
Label_944:
	
}


void func_1442(void)
{
	object var_34_object;
	@CreateDiaryEntry(var_34_object, 266, 2, 521193);
	bool var_38_bool; object var_39_object;
	var_34_object = var_39_object;
	func_1494(var_38_bool, var_39_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1455(void)
{
	object var_149_object;
	@CreateDiaryEntry(var_149_object, 269, 2, 521196);
	bool var_153_bool; object var_154_object;
	var_149_object = var_154_object;
	func_1494(var_153_bool, var_154_object, 266);
}
EMIT "Stack[-1] = 0";


void func_1199(object var_166_object, string var_167_string, int var_168_int)
{
	object var_170_object;
	@CreateInvItem(var_170_object);
	var_170_object->SetItemName(var_167_string);
	object var_171_object; object var_172_object; int var_173_int;
	var_166_object = var_171_object;
	var_170_object = var_172_object;
	var_168_int = var_173_int;
	func_1180(var_171_object, var_172_object, var_173_int);
}
EMIT "Stack[-1] = 0";


void func_945(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1003(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1040(var_140_bool, var_141_object);
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
		func_1040(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1003(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1001;
	
Label_1001:
	var_98_bool = true;
	
}


void func_1468(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 267, 2, 521194);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_1494(var_61_bool, var_62_object, 266);
}
EMIT "Stack[-1] = 0";


// @pe
void func_189(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1597(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_1099(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


// @pe
void func_1212(bool var_100_bool, object var_101_object, float var_102_float)
{
	if(!var_101_object) { //@nz
		var_100_bool = false;
		return 0;
	}
	if(var_102_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_102_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_107_float;
		var_102_float = var_107_float;
		func_1247(var_107_float);
		bool var_111_bool; object var_112_object; float var_114_float;
		var_101_object = var_112_object;
		var_102_float = var_114_float;
		func_812(var_111_bool, var_112_object, "reputation", var_114_float, (float)0, (float)1);
		var_100_bool = true;
		return 0;

	}
	
	var_100_bool = false;
}


void func_1481(object var_47_object)
{
	object var_49_object;
	@GetDiaryRoot(var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_47_object = false;
	}
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


void func_716(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_853(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1290(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_853(var_41_bool);
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
			func_1283(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_771;
			goto Label_782;
			}
				Label_771:
					bool var_45_bool;
					func_785(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_777;
			}
		}
	Label_782:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_777:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1494(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_1481(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	object var_45_object;
	var_44_object->Find(var_40_int, var_45_object);
	if(!var_45_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_40_int);
		var_38_bool = false;
	}
	var_45_object->AddChild(var_39_object);
	@SendWorldWndMessage(7);
	int var_46_int;
	var_39_object->GetCategory(var_46_int);
	@SetDiarySection(var_46_int);
	var_38_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1247(float var_107_float)
{
	object var_109_object;
	@CreateFloatVector(var_109_object);
	var_109_object->add(var_107_float);
	@SendWorldWndMessage(16, var_109_object);
}
EMIT "Stack[-1] = 0";


void func_1257(bool var_64_bool, string var_65_string, string var_66_string)
{
	object var_68_object;
	@FindActor(var_68_object, var_65_string);
	if(var_68_object == null)
		var_64_bool = false;
	@Trigger(var_68_object, var_66_string);
	var_64_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1003(bool var_109_bool, object var_110_object)
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
		func_1114(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_491(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1522(object var_19_object)
{
	object var_22_object; object var_23_object;
	@GetMainOutdoorScene(var_22_object);
	if(var_22_object == null) {
		@Trace("Can't find main outdoor scene");
		var_23_object = null;
		var_23_object = var_19_object;
	}
	var_22_object->GetMap(var_23_object);
	var_23_object = var_19_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1269(float var_30_float)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	var_32_float = var_30_float;
}


void func_1274(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


