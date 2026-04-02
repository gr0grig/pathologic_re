// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_716();
			if(var_13_bool == 31870) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_795();
				object var_67_object = var_1_object;
				func_823(var_0_object);
			}
			if(var_12_bool == 31863) {
				bool var_95_bool;
				func_839(var_1_object);
				if(var_95_bool != 0) {
					func_157(var_13_bool, "Neutral");
					var_0_object->SetMessage(530504); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530505, 31865, 31864); //@t
					var_0_object->AddReply(531423, -1, 32766); //@t
					return 0;
				}
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(530512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530513, -1, 31872); //@t
				var_0_object->AddReply(531422, -1, 32765); //@t
				return 0;
			}
			if(var_12_bool == 31865) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(530506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530507, 31867, 31866); //@t
				var_0_object->AddReply(531424, 31869, 32767); //@t
				return 0;
			}
			if(var_12_bool == 31867) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(530508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530509, 31869, 31868); //@t
				var_0_object->AddReply(531425, -1, 32769); //@t
				return 0;
			}
			if(var_12_bool == 31869) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(530510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530511, -1, 31870); //@t
				return 0;
			}
			var_3_string = true;
			bool var_162_bool;
			func_793(var_162_bool);
			if(var_162_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_340(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_474(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_358(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_474(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_407(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_723(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_436(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_705(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_587(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_787(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_785(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_789(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_791(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_955(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_153_bool = !var_26_bool; //@nz
		if(var_153_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_154_object;
	var_17_object = var_154_object;
	func_656();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_768(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_761(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_905(object var_24_object)
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


void func_656(void)
{
	bool var_156_bool;
	@CameraSwitchToNormal(true);
	bool var_158_bool;
	func_793(var_158_bool);
	if(var_158_bool != 0) {
	} else {
		@HasAnimationTrack(var_156_bool, "head");
		if(var_156_bool == 0) goto Label_673;
		@UnlookAsync("head");
	}
Label_673:
	
}


void func_785(int var_76_int)
{
	var_76_int = 530494;
}


void func_787(int var_75_int)
{
	var_75_int = 530493;
}


void func_789(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
}


void func_407(bool var_18_bool)
{
	var_18_bool = true;
}


void func_791(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
}


// @pe
void func_409(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_582(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_488();
	if(!false) //@nz
		@KillTimer(10);
}


void func_793(bool var_70_bool)
{
	var_70_bool = false;
}


void func_922(object var_69_object, string var_70_string, float var_71_float)
{
	object var_79_object;
	@GetMainOutdoorScene(var_79_object);
	if(var_79_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_77_cvector;
	cvector var_78_cvector;
	bool var_80_bool;
	var_79_object->GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector);
	if(!var_80_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_70_string) + " doesnt exist");
	var_79_object->GetMap(var_69_object);
	if(var_69_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_90_float = GetByIndex(var_77_cvector, 0);
	var_91_float = GetByIndex(var_77_cvector, 2);
	var_69_object->SetMapParams(var_90_float, var_91_float, var_71_float);
}
EMIT "Stack[-2] = 0";


void func_795(void)
{
	@SetVariable("b11q04", 2);
	object var_24_object;
	func_905(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_756(var_35_float);
	var_21_object->AddMark("b11q04SanitarGotoOfficer", "pt_gmap_vagon_army", 0, 530531, var_35_float);
	func_851();
	bool var_61_bool;
	func_744(var_61_bool, "quest_b11_04", "place_officer");
}
EMIT "Stack[-1] = 0";


// @pe
void func_157(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_793(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string; bool var_108_bool;
	var_103_string = var_107_string;
	if(var_103_string == "")
		var_108_bool = false;
	else
		var_108_bool = true;
	func_690(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


void func_674(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


void func_690(string var_107_string, bool var_108_bool)
{
	bool var_114_bool; float var_115_float; float var_116_float;
	@lshHasAnimation(var_114_bool, var_107_string);
	if(var_114_bool != 0) {
		@lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		@lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_107_string);
	}
	
}


void func_436(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_574(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_567(bool var_71_bool)
{
	var_71_bool = true;
}


// @pe
void func_823(object var_68_object)
{
	object var_72_object;
	func_905(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	func_922(var_69_object, "pt_gmap_vagon_army", (float)2);
	object var_92_object;
	func_905(var_92_object);
	var_68_object->ShowMap(var_92_object);
}


void func_569(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_955(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3ca";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_574(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_705(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_582(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


// @pe
void func_839(bool var_95_bool)
{
	int var_97_int;
	func_739(var_97_int, "b11q04");
	if(var_97_int == 1)
		var_95_bool = true;
	var_95_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_839(var_88_object);
		if(var_95_bool != 0) {
			func_157(var_89_object, "Neutral");
			var_0_object->SetMessage(530504); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530505, 31865, 31864); //@t
			var_0_object->AddReply(531423, -1, 32766); //@t
		} else {
					func_157(var_89_object, "Neutral");
					var_0_object->SetMessage(530512); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530513, -1, 31872); //@t
					var_0_object->AddReply(531422, -1, 32765); //@t
		}
	}
	for(;;) {
		bool var_127_bool;
		func_793(var_127_bool);
		if(var_127_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_674(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_587(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_729(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_793(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_650;
		@LookAsyncCamera("head");
	}
Label_650:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_716(void)
{
	bool var_15_bool;
	func_793(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_723(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_340(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_409(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_851(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 553, 2, 530528);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_877(var_43_bool, var_44_object, 551);
}
EMIT "Stack[-1] = 0";


void func_729(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_474(object var_2_object, string var_3_string)
{
	func_569();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_864(object var_52_object)
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


void func_739(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_358(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_582(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_407(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_723(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_488(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_582(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_768(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_582(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_535;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_761(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_564;
				}
			} else if(var_38_int != 0) {
				goto Label_564;
			}
			}
					bool var_71_bool;
					func_567(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_559;
			}
		}
	Label_564:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_559:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_744(bool var_61_bool, string var_62_string, string var_63_string)
{
	object var_65_object;
	@FindActor(var_65_object, var_62_string);
	if(var_65_object == null)
		var_61_bool = false;
	@Trigger(var_65_object, var_63_string);
	var_61_bool = true;
}
EMIT "Stack[-1] = 0";


void func_877(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_864(var_52_object);
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


void func_756(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_761(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


