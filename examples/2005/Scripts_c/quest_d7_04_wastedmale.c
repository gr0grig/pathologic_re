// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_750();
			if(var_12_bool == 37513) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_855();
				object var_66_object = var_1_object;
				func_839(var_0_object);
			}
			if(var_12_bool == 37516) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_855();
				object var_96_object = var_1_object;
				func_839(var_0_object);
			}
			if(var_12_bool == 34726) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_855();
				object var_102_object = var_1_object;
				func_883(var_0_object);
				object var_126_object = var_1_object;
				func_904(var_0_object);
				object var_137_object = var_1_object;
				func_839(var_0_object);
			}
			if(var_12_bool == 37509) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_855();
				object var_143_object = var_1_object;
				func_839(var_0_object);
			}
			if(var_11_object == 34723) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(533203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_160_bool;
				func_915(var_1_object);
				if(var_160_bool != 0)
					var_0_object->AddReply(533204, 34725, 34724); //@t
				var_0_object->AddReply(533207, -1, 34727); //@t
				var_0_object->AddReply(535821, -1, 37514); //@t
				return 0;
			}
			if(var_11_object == 34725) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(533205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535813, 37511, 37505); //@t
				var_0_object->AddReply(535815, 37508, 37507); //@t
				return 0;
			}
			if(var_11_object == 37508) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535817, -1, 37509); //@t
				var_0_object->AddReply(535822, 37506, 37515); //@t
				return 0;
			}
			if(var_11_object == 37511) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535820, -1, 37513); //@t
				var_0_object->AddReply(535819, 37506, 37512); //@t
				return 0;
			}
			if(var_11_object == 37506) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535823, -1, 37516); //@t
				var_0_object->AddReply(533206, -1, 34726); //@t
				return 0;
			}
			var_3_string = true;
			bool var_217_bool;
			func_1080(var_217_bool);
			if(var_217_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_384((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		TaskCall(0);
		int var_12_int;
		func_0(var_14_object, var_12_int, var_13_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_409(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_528(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_461(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_757(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_490(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_739(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_384(float var_11_float, float var_12_float)
{
	
Label_385:
	for(;;) {
		bool var_15_bool;
		func_636(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_393;
		@Hold();
	}
	
Label_393:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_463(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_385;
}
EMIT "Return(); Pop(2)";


void func_641(bool var_23_bool, object var_24_object, float var_25_float)
{
	cvector var_36_cvector; bool var_43_bool;
	var_24_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_24_object->GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_44_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_45_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_48_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_48_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_763(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * var_25_float) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_23_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	bool var_65_bool;
	func_1080(var_65_bool);
	if(var_65_bool != 0) {
	} else {
		@HasAnimationTrack(var_43_bool, "head");
		if(var_43_bool == 0) goto Label_703;
		@LookAsyncCamera("head");
	}
Label_703:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_23_bool = true;
	
}


void func_0(object var_0_object, int var_12_int, object var_13_object)
{
	var_0_object = var_13_object;
	bool var_23_bool; object var_24_object;
	var_13_object = var_24_object;
	func_641(var_23_bool, var_24_object, 70.0);
	if(!var_23_bool) { //@nz
		var_12_int = -2;
		return 8;
	}
	object var_19_object;
	@CreateDialog(var_19_object);
	int var_70_int;
	func_1074(var_70_int);
	var_19_object->SetNPCName(var_70_int);
	int var_71_int;
	func_1072(var_71_int);
	var_19_object->SetNPCDescription(var_71_int);
	string var_72_string;
	func_1076(var_72_string);
	var_19_object->SetPhoto(var_72_string);
	string var_73_string;
	func_1078(var_73_string);
	var_19_object->SetPhoto2(var_73_string);
	int var_74_int;
	func_1031(var_74_int);
	var_19_object->SetPlayerName(var_74_int);
	bool var_20_bool;
	@IsOverrideActive(var_20_bool);
	if(var_20_bool != 0) {
		var_12_int = -2;
		return 8;
	}
	@DoDialog(var_19_object);
	object var_83_object; object var_84_object;
	var_13_object = var_83_object;
	var_19_object = var_84_object;
	TaskCall(1);
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	bool var_22_bool;
	var_19_object->IsDialogEnd(var_22_bool);
	
	for(;;) {
		var_133_bool = !var_22_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_19_object->IsDialogEnd(var_22_bool);
	}
	
Label_63:
	object var_134_object;
	var_13_object = var_134_object;
	func_709();
	@StopDialog(var_19_object);
	var_19_object->GetReturnValue(-1);
	int var_21_int = var_12_int;
}
EMIT "Stack[-4] = 0";


void func_773(int var_105_int, string var_106_string)
{
	int var_108_int;
	@GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
}


void func_1031(int var_74_int)
{
	int var_76_int;
	@GetVariable("branch", var_76_int);
	if(var_76_int == 0) {
		var_74_int = 1;
		return 2;
	EMIT "GOTO 0x416";
	}
	if(var_76_int == 1) {
		var_74_int = 2;
		return 2;
	}
	var_74_int = 3;
}


// @pe
void func_904(object var_126_object)
{
	@Trace("rifle ammo10 is given");
	object var_129_object;
	var_126_object = var_129_object;
	func_809(var_129_object, "rifle_ammo", 10);
}


void func_778(int var_121_int, int var_122_int)
{
	object var_124_object;
	@CreateIntVector(var_124_object);
	var_124_object->add(var_121_int);
	var_124_object->add(var_122_int);
	@SendWorldWndMessage(3, var_124_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_142(object var_2_object, string var_90_string)
{
	bool var_91_bool;
	func_1080(var_91_bool);
	if(!var_91_bool) //@nz
		return 0;
	if(var_90_string == var_2_object)
		return 0;
	string var_94_string; bool var_95_bool;
	var_90_string = var_94_string;
	if(var_90_string == "")
		var_95_bool = false;
	else
		var_95_bool = true;
	func_733(var_94_string, var_95_bool);
	var_2_object = var_90_string;
	
}


// @pe
void func_528(object var_2_object, string var_3_string)
{
	func_623();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_915(bool var_103_bool)
{
	int var_105_int;
	func_773(var_105_int, "d7q04");
	if(var_105_int == 1)
		var_103_bool = true;
	var_103_bool = false;
}


void func_790(object var_110_object, object var_111_object, int var_112_int)
{
	int var_116_int;
	var_111_object->GetItemID(var_116_int);
	int var_117_int;
	@GetInvItemProperty(var_117_int, var_116_int, "Category");
	bool var_118_bool;
	var_110_object->AddItem(var_118_bool, var_111_object, var_117_int, var_112_int);
	if(!var_118_bool) { //@nz
		var_110_object->DropItems(var_111_object, var_112_int);
	} else {
		int var_121_int; int var_122_int;
		var_116_int = var_121_int;
		var_112_int = var_122_int;
		func_778(var_121_int, var_122_int);
	}
	
}


void func_1048(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_409(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_461(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_757(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_542(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_636(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_1055(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_636(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_589;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_1048(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_618;
				}
			} else if(var_37_int != 0) {
				goto Label_618;
			}
			}
					bool var_70_bool;
					func_621(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_613;
			}
		}
	Label_618:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_613:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_927(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 639, 2, 533225);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_953(var_42_bool, var_43_object, 637);
}
EMIT "Stack[-1] = 0";


void func_1055(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_1048(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_809(object var_129_object, string var_130_string, int var_131_int)
{
	object var_133_object;
	@CreateInvItem(var_133_object);
	var_133_object->SetItemName(var_130_string);
	object var_134_object; object var_135_object; int var_136_int;
	var_129_object = var_134_object;
	var_133_object = var_135_object;
	var_131_int = var_136_int;
	func_790(var_134_object, var_135_object, var_136_int);
}
EMIT "Stack[-1] = 0";


void func_940(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_1072(int var_71_int)
{
	var_71_int = 515556;
}


void func_1074(int var_70_int)
{
	var_70_int = 503341;
}


void func_1076(string var_72_string)
{
	var_72_string = "ui/NPC_Citizen3.png";
}


void func_1078(string var_73_string)
{
	var_73_string = "ui/NPC_Citizen3_b.png";
}


void func_822(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1080(bool var_65_bool)
{
	var_65_bool = false;
}


void func_953(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_940(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_834(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_709(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_1080(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_725;
		@UnlookAsync("head");
	}
Label_725:
	
}


// @pe
void func_839(object var_67_object)
{
	object var_71_object;
	func_981(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_998(var_68_object, "pt_gatherer2", (float)2);
	object var_91_object;
	func_981(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_83_object, object var_84_object)
{
	var_0_object = var_84_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_84_object, "Neutral");
		var_0_object->SetMessage(533203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_103_bool;
		func_915(var_83_object);
		if(var_103_bool != 0)
			var_0_object->AddReply(533204, 34725, 34724); //@t
		var_0_object->AddReply(533207, -1, 34727); //@t
		var_0_object->AddReply(535821, -1, 37514); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_120_bool;
	func_1080(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_726(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_461(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_463(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_636(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_542();
	if(!false) //@nz
		@KillTimer(10);
}


void func_981(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_726(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


void func_855(void)
{
	@SetVariable("d7q04", 2);
	object var_23_object;
	func_981(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_834(var_34_float);
	var_20_object->AddMark("d7q04WastedGotoGatherer", "pt_gatherer2", 0, 508638, var_34_float);
	func_927();
	bool var_60_bool;
	func_822(var_60_bool, "quest_d7_04", "init_andrei");
}
EMIT "Stack[-1] = 0";


void func_733(string var_94_string, bool var_95_bool)
{
	float var_100_float; float var_101_float;
	@lshGetAnimTimes(var_94_string, var_100_float, var_101_float);
	@lshPlayAnimation(var_100_float, var_101_float, var_95_bool);
}


void func_739(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_998(object var_68_object, string var_69_string, float var_70_float)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	if(var_78_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_76_cvector;
	cvector var_77_cvector;
	bool var_79_bool;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_69_string) + " doesnt exist");
	var_78_object->GetMap(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	var_68_object->SetMapParams(var_89_float, var_90_float, var_70_float);
}
EMIT "Stack[-2] = 0";


void func_490(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_628(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_621(bool var_70_bool)
{
	var_70_bool = true;
}


void func_750(void)
{
	bool var_14_bool;
	func_1080(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_623(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_883(object var_102_object)
{
	@Trace("Rifle is given");
	object var_105_object;
	@CreateInvItem(var_105_object);
	var_105_object->SetItemName("Rifle");
	var_105_object->SetProperty("durability", 100);
	object var_110_object; object var_111_object;
	var_102_object = var_110_object;
	var_105_object = var_111_object;
	func_790(var_110_object, var_111_object, 1);
}
EMIT "Stack[-1] = 0";


void func_628(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_757(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_763(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_636(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


