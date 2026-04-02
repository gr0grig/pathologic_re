// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1128();
			if(var_8_bool == 22381) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1306();
				object var_70_object = var_1_object;
				func_1370(var_0_object);
			}
			if(var_8_bool == 29741) {
				object var_98_object = var_1_object;
				func_1386(var_0_object);
			}
			if(var_8_bool == 22389) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_1306();
				object var_142_object = var_1_object;
				func_1370(var_0_object);
			}
			if(var_8_bool == 22392) {
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_1337();
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_1353();
				object var_163_object = var_1_object;
				func_1359(var_0_object);
			}
			if(var_7_cvector == 22380) {
				bool var_189_bool;
				func_1417(var_1_object);
				if(var_189_bool != 0) {
					object var_197_object; object var_198_object;
					var_197_object = var_1_object;
					var_198_object = var_0_object;
					func_1347();
					func_202(var_8_bool, "Neutral");
					var_0_object->SetMessage(521178); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528362, 29735, 29734); //@t
					return 0;
				}
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(521184); //@t
				var_0_object->ClearReplies(); //@t
				bool var_219_bool;
				func_1429(var_1_object);
				if(var_219_bool != 0)
					var_0_object->AddReply(521185, 22388, 22387); //@t
				bool var_228_bool = false;
				bool var_229_bool;
				func_1405(var_1_object);
				if(var_229_bool != 0) {
					bool var_235_bool;
					func_1393(var_1_object);
					if(!var_235_bool) //@nz
						var_228_bool = true;
				}
				if(var_228_bool != 0)
					var_0_object->AddReply(521188, 22391, 22390); //@t
				var_0_object->AddReply(521191, -1, 22393); //@t
				return 0;
			}
			if(var_7_cvector == 22391) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(521189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528371, 29744, 29743); //@t
				var_0_object->AddReply(528373, 29744, 29745); //@t
				return 0;
			}
			if(var_7_cvector == 29744) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(528372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521190, -1, 22392); //@t
				return 0;
			}
			if(var_7_cvector == 22388) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(521186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521187, -1, 22389); //@t
				return 0;
			}
			if(var_7_cvector == 29735) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(528363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528364, 29737, 29736); //@t
				return 0;
			}
			if(var_7_cvector == 29737) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(528365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528366, 29739, 29738); //@t
				return 0;
			}
			if(var_7_cvector == 29739) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(528367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521183, 29740, 22385); //@t
				return 0;
			}
			if(var_7_cvector == 29740) {
				func_202(var_8_bool, "Neutral");
				var_0_object->SetMessage(528368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521179, -1, 22381); //@t
				var_0_object->AddReply(528369, -1, 29741); //@t
				return 0;
			}
			var_3_string = true;
			bool var_303_bool;
			func_1596(var_303_bool);
			if(var_303_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe1";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_553(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1135(var_13_object);
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
			func_1135(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_666();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_681();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_624();
			bool var_11_bool = false;
			bool var_12_bool;
			func_872(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_593(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_573(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1135(var_53_object);
					var_53_object = var_52_object;
					func_1020(var_51_bool, var_52_object);
				}
			} else {
				func_588(var_7_int);
				func_615();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_615();
		else
			func_1100("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_806();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_863(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_504(var_25_object);
			func_1100("Neutral");
			func_624();
			func_615();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_872(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1282(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1538(object var_72_object, string var_73_string, float var_74_float)
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


void func_1289(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1282(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1135(var_39_object);
	var_39_object = var_38_object;
	func_962(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_877(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1590(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1588(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1592(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1594(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1571(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_271_bool = !var_36_bool; //@nz
		if(var_271_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_272_object;
	var_27_object = var_272_object;
	func_945();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1306(void)
{
	@SetVariable("b6q02", 1);
	object var_19_object;
	func_1521(var_19_object);
	object var_16_object;
	var_19_object = var_16_object;
	float var_30_float;
	func_1268(var_30_float);
	var_16_object->AddMark("b6q02KlaraGotoRat", "pt_map_theater", 0, 521207, var_30_float);
	func_1441();
	func_1467();
	bool var_64_bool;
	func_1256(var_64_bool, "quest_b6_02", "init_maze");
}
EMIT "Stack[-1] = 0";


void func_1057(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1273(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1113(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1571(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x632";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_804(bool var_59_bool)
{
	var_59_bool = true;
}


void func_806(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_553(object var_0_object)
{
	bool var_7_bool;
	func_872(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_549();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_735();
	}
}
EMIT "Return(); Pop(0)";


void func_811(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_819(bool var_119_bool, object var_120_object, string var_121_string)
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


void func_1588(int var_180_int)
{
	var_180_int = 515540;
}


void func_1590(int var_179_int)
{
	var_179_int = 502865;
}


void func_1592(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


// @pe
void func_1337(void)
{
	func_1454();
	bool var_156_bool;
	func_1256(var_156_bool, "quest_b6_02", "completed");
}


void func_1594(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


void func_1596(bool var_75_bool)
{
	var_75_bool = true;
}


void func_573(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_863(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_831(bool var_111_bool, object var_112_object, string var_113_string, float var_114_float, float var_115_float, float var_116_float)
{
	object var_120_object;
	var_112_object = var_120_object;
	string var_121_string;
	var_113_string = var_121_string;
	bool var_119_bool;
	func_819(var_119_bool, var_120_object, var_121_string);
	if(!var_119_bool) //@nz
		var_111_bool = false;
	float var_118_float;
	var_112_object->GetProperty(var_113_string, var_118_float);
	float var_129_float; float var_131_float; float var_132_float;
	var_115_float = var_131_float;
	var_116_float = var_132_float;
	func_1151(var_129_float, (var_118_float + var_114_float), var_131_float, var_132_float);
	var_112_object->SetProperty(var_113_string, var_129_float);
	var_111_bool = true;
}


// @pe
void func_1347(void)
{
	@SetVariable("oob6Klara2_1", 1);
}


// @pe
void func_1353(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1100(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_588(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


// @pe
void func_1359(object var_163_object)
{
	@Trace("recipe7 is given");
	object var_166_object;
	var_163_object = var_166_object;
	func_1198(var_166_object, "recipe7", 1);
}


void func_593(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_811(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1107(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_853(bool var_15_bool, cvector var_16_cvector)
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


void func_1113(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1596(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


// @pe
void func_1370(object var_71_object)
{
	object var_75_object;
	func_1521(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_1538(var_72_object, "pt_map_theater", (float)2);
	object var_95_object;
	func_1521(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1417(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1347();
			func_202(var_193_object, "Neutral");
			var_0_object->SetMessage(521178); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528362, 29735, 29734); //@t
		} else {
					func_202(var_193_object, "Neutral");
					var_0_object->SetMessage(521184); //@t
					var_0_object->ClearReplies(); //@t
					bool var_242_bool;
					func_1429(var_1_object);
					if(var_242_bool != 0)
						var_0_object->AddReply(521185, 22388, 22387); //@t
					bool var_251_bool = false;
					bool var_252_bool;
					func_1405(var_1_object);
					if(var_252_bool != 0) {
						bool var_258_bool;
						func_1393(var_1_object);
						if(!var_258_bool) //@nz
							var_251_bool = true;
					}
					if(var_251_bool != 0)
						var_0_object->AddReply(521188, 22391, 22390); //@t
					var_0_object->AddReply(521191, -1, 22393); //@t
		}
	}
	for(;;) {
		bool var_227_bool;
		func_1596(var_227_bool);
		if(var_227_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1100(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_201;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_201:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_863(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_853(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_615(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_872(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1128(void)
{
	bool var_10_bool;
	func_1596(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1386(object var_98_object)
{
	object var_101_object;
	var_98_object = var_101_object;
	bool var_100_bool;
	func_1211(var_100_bool, var_101_object, -0.1);
}


void func_877(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1141(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1596(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_939;
		@LookAsyncCamera("head");
	}
Label_939:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1135(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_624(void)
{
	@KillTimer(10);
}


// @pe
void func_1393(bool var_258_bool)
{
	int var_260_int;
	func_1162(var_260_int, "b6q02");
	if(var_260_int == 1000)
		var_258_bool = true;
	var_258_bool = false;
}


void func_1141(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1405(bool var_252_bool)
{
	int var_254_int;
	func_1162(var_254_int, "b6q02");
	if(var_254_int == 2)
		var_252_bool = true;
	var_252_bool = false;
}


// @pe
void func_1151(float var_129_float, float var_130_float, float var_131_float, float var_132_float)
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
void func_1417(bool var_199_bool)
{
	int var_201_int;
	func_1162(var_201_int, "oob6Klara2_1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_1162(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1167(int var_182_int, int var_183_int)
{
	object var_185_object;
	@CreateIntVector(var_185_object);
	var_185_object->add(var_182_int);
	var_185_object->add(var_183_int);
	@SendWorldWndMessage(3, var_185_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1429(bool var_242_bool)
{
	int var_244_int;
	func_1162(var_244_int, "b6q02");
	if(var_244_int == 0) {
		var_242_bool = true;
		return 0;
	}
	var_242_bool = false;
}


// @pe
void func_666(void)
{
	func_806();
	func_624();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1179(object var_171_object, object var_172_object, int var_173_int)
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
		func_1167(var_182_int, var_183_int);
	}
	
}


void func_1441(void)
{
	object var_34_object;
	@CreateDiaryEntry(var_34_object, 266, 2, 521193);
	bool var_38_bool; object var_39_object;
	var_34_object = var_39_object;
	func_1493(var_38_bool, var_39_object, -1);
}
EMIT "Stack[-1] = 0";


void func_681(void)
{
	@StopGroup0();
	func_624();
	func_1100("Neutral");
	func_615();
}


void func_1454(void)
{
	object var_149_object;
	@CreateDiaryEntry(var_149_object, 269, 2, 521196);
	bool var_153_bool; object var_154_object;
	var_149_object = var_154_object;
	func_1493(var_153_bool, var_154_object, 266);
}
EMIT "Stack[-1] = 0";


void func_1198(object var_166_object, string var_167_string, int var_168_int)
{
	object var_170_object;
	@CreateInvItem(var_170_object);
	var_170_object->SetItemName(var_167_string);
	object var_171_object; object var_172_object; int var_173_int;
	var_166_object = var_171_object;
	var_170_object = var_172_object;
	var_168_int = var_173_int;
	func_1179(var_171_object, var_172_object, var_173_int);
}
EMIT "Stack[-1] = 0";


void func_945(void)
{
	bool var_274_bool;
	@CameraSwitchToNormal();
	bool var_275_bool;
	func_1596(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		@HasAnimationTrack(var_274_bool, "head");
		if(var_274_bool == 0) goto Label_961;
		@UnlookAsync("head");
	}
Label_961:
	
}


void func_1467(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 267, 2, 521194);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_1493(var_61_bool, var_62_object, 266);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1211(bool var_100_bool, object var_101_object, float var_102_float)
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
		func_1246(var_107_float);
		bool var_111_bool; object var_112_object; float var_114_float;
		var_101_object = var_112_object;
		var_102_float = var_114_float;
		func_831(var_111_bool, var_112_object, "reputation", var_114_float, (float)0, (float)1);
		var_100_bool = true;
		return 0;

	}
	
	var_100_bool = false;
}


void func_962(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1020(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1057(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1057(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1020(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1018;
	
Label_1018:
	var_37_bool = true;
	
}


void func_1480(object var_47_object)
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


// @pe
void func_202(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1596(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_1107(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1493(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_1480(var_47_object);
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


void func_1246(float var_107_float)
{
	object var_109_object;
	@CreateFloatVector(var_109_object);
	var_109_object->add(var_107_float);
	@SendWorldWndMessage(16, var_109_object);
}
EMIT "Stack[-1] = 0";


void func_735(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_872(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1289(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_872(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1282(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_790;
			goto Label_801;
			}
				Label_790:
					bool var_59_bool;
					func_804(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_796;
			}
		}
	Label_801:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_796:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1256(bool var_64_bool, string var_65_string, string var_66_string)
{
	object var_68_object;
	@FindActor(var_68_object, var_65_string);
	if(var_68_object == null)
		var_64_bool = false;
	@Trigger(var_68_object, var_66_string);
	var_64_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1521(object var_19_object)
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


void func_1268(float var_30_float)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	var_32_float = var_30_float;
}


// @pe
void func_504(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1273(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1020(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1113(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


