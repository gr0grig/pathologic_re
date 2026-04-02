// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_15(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		func_149(var_11_string, var_12_bool);
		object var_16_object;
		var_12_bool = var_16_object;
		func_1207(var_16_object);
	}

	// @pe
	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		if(var_12_bool == "cleanup")
			func_33(var_12_bool);
	}

	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_6_bool != 0)
			func_149(var_10_string, var_11_bool);
		bool var_16_bool = false;
		if(var_5_bool != 0) {
			bool var_18_bool;
			func_82(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_815(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			bool var_15_bool;
			func_111(var_10_object, var_11_string, var_12_bool, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_bool) { //@nz
					func_797(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int)
	{
		if(1 != 0) {
			func_808();
			if(var_13_int == 31789) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_int;
				var_19_object = var_0_int;
				func_930();
				object var_61_object = var_1_int;
				func_965(var_0_int);
			}
			if(var_13_int == 31791) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_int;
				var_90_object = var_0_int;
				func_953();
			}
			if(var_13_int == 31793) {
				object var_95_object = var_1_int;
				func_919(var_0_int);
				object var_119_object; object var_120_object;
				var_119_object = var_1_int;
				var_120_object = var_0_int;
				func_959();
			}
			if(var_13_int == 31795) {
				object var_125_object = var_1_int;
				func_919(var_0_int);
				object var_127_object; object var_128_object;
				var_127_object = var_1_int;
				var_128_object = var_0_int;
				func_959();
			}
			if(var_12_int == 31890) {
				bool var_131_bool;
				func_1074(var_1_int);
				if(!var_131_bool) { //@nz
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530543); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530544, -1, 31891); //@t
					return 0;
				}
				bool var_161_bool;
				func_1050(var_1_int);
				if(var_161_bool != 0) {
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530416); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530417, -1, 31789); //@t
					return 0;
				}
				func_446(var_13_int, "Neutral");
				var_0_int->SetMessage(530418); //@t
				var_0_int->ClearReplies(); //@t
				bool var_174_bool = false;
				bool var_175_bool = false;
				bool var_176_bool;
				func_1026(var_1_int);
				if(var_176_bool != 0) {
					bool var_182_bool;
					func_1038(var_1_int);
					if(!var_182_bool) //@nz
						var_175_bool = true;
				}
				if(var_175_bool != 0) {
					bool var_189_bool;
					func_1062(var_1_int);
					if(var_189_bool != 0)
						var_174_bool = true;
				}
				if(var_174_bool != 0)
					var_0_int->AddReply(530419, 31792, 31791); //@t
				var_0_int->AddReply(530424, -1, 31796); //@t
				return 0;
			}
			if(var_12_int == 31792) {
				bool var_203_bool;
				func_981(var_1_int);
				if(var_203_bool != 0) {
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530420); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530421, -1, 31793); //@t
					return 0;
				}
				bool var_229_bool;
				func_981(var_1_int);
				if(!var_229_bool) { //@nz
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530422); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530423, -1, 31795); //@t
					return 0;
				}
			}
			var_3_bool = true;
			bool var_237_bool;
			func_917(var_237_bool);
			if(var_237_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d5";
	
	}

}


// @pe
void func_1026(bool var_176_bool)
{
	int var_178_int;
	func_831(var_178_int, "b10q04MishkaTalk");
	if(var_178_int == 9)
		var_176_bool = true;
	var_176_bool = false;
}


void func_1157(object var_63_object, string var_64_string, float var_65_float)
{
	object var_73_object;
	@GetMainOutdoorScene(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_71_cvector;
	cvector var_72_cvector;
	bool var_74_bool;
	var_73_object->GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector);
	if(!var_74_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_64_string) + " doesnt exist");
	var_73_object->GetMap(var_63_object);
	if(var_63_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_84_float = GetByIndex(var_71_cvector, 0);
	var_85_float = GetByIndex(var_71_cvector, 2);
	var_63_object->SetMapParams(var_84_float, var_85_float, var_65_float);
}
EMIT "Stack[-2] = 0";


void func_909(int var_77_int)
{
	var_77_int = 521048;
}


// @pe
void func_1038(bool var_182_bool)
{
	int var_184_int;
	func_831(var_184_int, "b10q04");
	if(var_184_int == -1)
		var_182_bool = true;
	var_182_bool = false;
}


void func_911(int var_76_int)
{
	var_76_int = 521047;
}


void func_15(bool var_6_bool, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_bool = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_bool = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_84(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_bool = false;
	}
}
EMIT "Return(); Pop(4)";


void func_913(string var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
}


void func_782(string var_144_string, bool var_145_bool)
{
	bool var_151_bool; float var_152_float; float var_153_float;
	@lshHasAnimation(var_151_bool, var_144_string);
	if(var_151_bool != 0) {
		@lshGetAnimTimes(var_144_string, var_152_float, var_153_float);
		@lshPlayAnimation(var_152_float, var_153_float, var_145_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_144_string);
	}
	
}


void func_915(string var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
}


// @pe
void func_149(bool var_2_bool, bool var_3_bool)
{
	func_244();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_917(bool var_15_bool)
{
	var_15_bool = false;
}


// @pe
void func_919(object var_95_object)
{
	@Trace("avroks blood is given");
	object var_98_object;
	var_95_object = var_98_object;
	func_867(var_98_object, "avroks_blood", 1);
}


// @pe
void func_1050(bool var_161_bool)
{
	int var_163_int;
	func_831(var_163_int, "b10q04MishkaTalk");
	if(var_163_int == 0) {
		var_161_bool = true;
		return 0;
	}
	var_161_bool = false;
}


void func_666(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_797(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_33(bool var_5_bool)
{
	var_5_bool = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_674(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_82(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_815(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_674(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_163(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_674(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_892(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_674(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_210;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_885(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_239;
				}
			} else if(var_38_int != 0) {
				goto Label_239;
			}
			}
					bool var_71_bool;
					func_242(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_234;
			}
		}
	Label_239:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_234:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_930(void)
{
	@SetVariable("b10q04MishkaTalk", 1);
	object var_24_object;
	func_1140(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_880(var_35_float);
	var_21_object->AddMark("b10q04MorlokGotoMishka", "pt_map_mishka", 0, 530550, var_35_float);
	func_1086();
}
EMIT "Stack[-1] = 0";


void func_1190(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x4b5";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_679(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_821(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector, true);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	bool var_71_bool;
	func_917(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_742;
		@LookAsyncCamera("head");
	}
Label_742:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


// @pe
void func_1062(bool var_189_bool)
{
	int var_191_int;
	func_831(var_191_int, "oob10MorlokMishka1");
	if(var_191_int == 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


void func_808(void)
{
	bool var_15_bool;
	func_917(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_815(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1074(bool var_131_bool)
{
	int var_133_int;
	func_831(var_133_int, "b10q04MorlokTalk");
	if(var_133_int != 0) {
		var_131_bool = true;
		return 0;
	}
	var_131_bool = false;
}


void func_821(cvector var_55_cvector, cvector var_56_cvector)
{
	float var_59_float = sqrt(var_56_cvector | var_56_cvector);
	if(var_59_float < 0.000001)
		var_55_cvector = [0.0, 0.0, 0.0];
	var_55_cvector = var_56_cvector / var_59_float;
}


// @pe
void func_1207(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(1);
	int var_17_int;
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


// @pe
void func_953(void)
{
	@SetVariable("oob10MorlokMishka1", 1);
}


// @pe
void func_446(bool var_2_bool, string var_140_string)
{
	bool var_141_bool;
	func_917(var_141_bool);
	if(!var_141_bool) //@nz
		return 0;
	if(var_140_string == var_2_bool)
		return 0;
	string var_144_string; bool var_145_bool;
	var_140_string = var_144_string;
	if(var_140_string == "")
		var_145_bool = false;
	else
		var_145_bool = true;
	func_782(var_144_string, var_145_bool);
	var_2_bool = var_140_string;
	
}


// @pe
void func_959(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1086(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 549, 2, 530440);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_1112(var_43_bool, var_44_object, 545);
}
EMIT "Stack[-1] = 0";


void func_831(int var_133_int, string var_134_string)
{
	int var_136_int;
	@GetVariable(var_134_string, var_136_int);
	var_136_int = var_133_int;
}


// @pe
void func_323(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_89_object, object var_90_object)
{
	var_0_int = var_90_object;
	var_1_int = var_89_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_96_bool;
		func_1074(var_1_int);
		if(!var_96_bool) { //@nz
			func_446(var_90_object, "Neutral");
			var_0_int->SetMessage(530543); //@t
			var_0_int->ClearReplies(); //@t
			var_0_int->AddReply(530544, -1, 31891); //@t
		} else {
					bool var_144_bool;
					func_1050(var_1_int);
					if(var_144_bool == 0) goto Label_370;
					func_446(var_90_object, "Neutral");
					var_0_int->SetMessage(530416); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530417, -1, 31789); //@t
		}
	}
Label_416:
	for(;;) {
		bool var_126_bool;
		func_917(var_126_bool);
		if(var_126_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_766(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_445;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_445:
			return 0;

		}

	}
	
Label_370:
	func_446(var_90_object, "Neutral");
	var_0_int->SetMessage(530418); //@t
	var_0_int->ClearReplies(); //@t
	bool var_157_bool = false;
	bool var_158_bool = false;
	bool var_159_bool;
	func_1026(var_1_int);
	if(var_159_bool != 0) {
		bool var_165_bool;
		func_1038(var_1_int);
		if(!var_165_bool) //@nz
			var_158_bool = true;
	}
	if(var_158_bool != 0) {
		bool var_172_bool;
		func_1062(var_1_int);
		if(var_172_bool != 0)
			var_157_bool = true;
	}
	if(var_157_bool != 0)
		var_0_int->AddReply(530419, 31792, 31791); //@t
	var_0_int->AddReply(530424, -1, 31796); //@t
	goto Label_416;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x147";


void func_836(int var_114_int, int var_115_int)
{
	object var_117_object;
	@CreateIntVector(var_117_object);
	var_117_object->add(var_114_int);
	var_117_object->add(var_115_int);
	@SendWorldWndMessage(3, var_117_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_965(object var_62_object)
{
	object var_66_object;
	func_1140(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	func_1157(var_63_object, "pt_map_mishka", (float)2);
	object var_86_object;
	func_1140(var_86_object);
	var_62_object->ShowMap(var_86_object);
}


void func_1099(object var_52_object)
{
	object var_54_object;
	@GetDiaryRoot(var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_52_object = false;
	}
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


void func_848(object var_103_object, object var_104_object, int var_105_int)
{
	int var_109_int;
	var_104_object->GetItemID(var_109_int);
	int var_110_int;
	@GetInvItemProperty(var_110_int, var_109_int, "Category");
	bool var_111_bool;
	var_103_object->AddItem(var_111_bool, var_104_object, var_110_int, var_105_int);
	if(!var_111_bool) { //@nz
		var_103_object->DropItems(var_104_object, var_105_int);
	} else {
		int var_114_int; int var_115_int;
		var_109_int = var_114_int;
		var_105_int = var_115_int;
		func_836(var_114_int, var_115_int);
	}
	
}


void func_82(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_84(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_674(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_21_float;
	var_1_int = var_22_float;
	@SetTimer(10, 1.0);
	func_163();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_981(bool var_203_bool)
{
	bool var_205_bool = false;
	bool var_206_bool = false;
	bool var_207_bool = false;
	int var_208_int;
	func_831(var_208_int, "b10q04NotkinTalk");
	if(var_208_int == 9) {
		int var_212_int;
		func_831(var_212_int, "b10q04Spi4kaTalk");
		if(var_212_int == 9)
			var_207_bool = true;
	}
	if(var_207_bool != 0) {
		int var_216_int;
		func_831(var_216_int, "b10q04MishkaTalk");
		if(var_216_int == 9)
			var_206_bool = true;
	}
	if(var_206_bool != 0) {
		int var_220_int;
		func_831(var_220_int, "b10q04LaskaTalk");
		if(var_220_int == 9)
			var_205_bool = true;
	}
	if(var_205_bool != 0) {
		var_203_bool = true;
		return 0;
	}
	var_203_bool = false;
}


void func_1112(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_1099(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	object var_50_object;
	var_49_object->Find(var_45_int, var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_45_int);
		var_43_bool = false;
	}
	var_50_object->AddChild(var_44_object);
	@SendWorldWndMessage(7);
	int var_51_int;
	var_44_object->GetCategory(var_51_int);
	@SetDiarySection(var_51_int);
	var_43_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_867(object var_98_object, string var_99_string, int var_100_int)
{
	object var_102_object;
	@CreateInvItem(var_102_object);
	var_102_object->SetItemName(var_99_string);
	object var_103_object; object var_104_object; int var_105_int;
	var_98_object = var_103_object;
	var_102_object = var_104_object;
	var_100_int = var_105_int;
	func_848(var_103_object, var_104_object, var_105_int);
}
EMIT "Stack[-1] = 0";


void func_748(void)
{
	bool var_187_bool;
	@CameraSwitchToNormal(true);
	bool var_189_bool;
	func_917(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		@HasAnimationTrack(var_187_bool, "head");
		if(var_187_bool == 0) goto Label_765;
		@UnlookAsync("head");
	}
Label_765:
	
}


void func_111(int var_0_int, int var_1_int, object var_4_object, bool var_15_bool)
{
	if(var_4_object == null)
		var_15_bool = false;
	float var_19_float;
	func_666(var_19_float, var_4_object);
	float var_17_float = sqrt(var_19_float);
	if(var_2_bool != 0)
		var_17_float -= var_1_int;
	var_15_bool = var_17_float < var_0_int;
}


void func_880(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_242(bool var_71_bool)
{
	var_71_bool = true;
}


void func_244(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_885(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_1140(object var_24_object)
{
	object var_27_object; object var_28_object;
	@GetMainOutdoorScene(var_27_object);
	if(var_27_object == null) {
		@Trace("Can't find main outdoor scene");
		var_28_object = null;
		var_28_object = var_24_object;
	}
	var_27_object->GetMap(var_28_object);
	var_28_object = var_24_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_249(int var_0_int, int var_17_int, object var_18_object)
{
	var_0_int = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_679(var_28_bool, var_29_object, 110.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_911(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_909(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_913(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_915(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1190(var_80_int);
	var_24_object->SetPlayerName(var_80_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_89_object; object var_90_object;
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(2);
	func_323(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_184_bool = !var_27_bool; //@nz
		if(var_184_bool == 0) goto Label_312;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_312:
	object var_185_object;
	var_18_object = var_185_object;
	func_748();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_892(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_885(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_766(string var_128_string)
{
	bool var_132_bool; float var_133_float; float var_134_float;
	@lshHasAnimation(var_132_bool, var_128_string);
	if(var_132_bool != 0) {
		@lshGetAnimTimes(var_128_string, var_133_float, var_134_float);
		@lshPlayAnimation(var_133_float, var_134_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_128_string);
	}
	
}


