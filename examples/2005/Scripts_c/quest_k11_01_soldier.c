// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_744();
			if(var_10_bool == 29382) {
				bool var_16_bool = false;
				bool var_17_bool = false;
				bool var_18_bool;
				func_824(var_1_object);
				if(var_18_bool != 0) {
					bool var_26_bool;
					func_812(var_1_object);
					if(var_26_bool != 0)
						var_17_bool = true;
				}
				if(var_17_bool != 0) {
					bool var_32_bool;
					func_836(var_1_object);
					if(!var_32_bool) //@nz
						var_16_bool = true;
				}
				if(var_16_bool != 0) {
					object var_39_object; object var_40_object;
					var_39_object = var_1_object;
					var_40_object = var_0_object;
					func_800();
					func_229(var_11_object, "Neutral");
					var_0_object->SetMessage(528020); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528021, 31634, 29383); //@t
					var_0_object->AddReply(530245, 31634, 31633); //@t
					return 0;
				}
				bool var_62_bool = false;
				bool var_63_bool = false;
				bool var_64_bool;
				func_848(var_1_object);
				if(var_64_bool != 0) {
					bool var_70_bool;
					func_812(var_1_object);
					if(var_70_bool != 0)
						var_63_bool = true;
				}
				if(var_63_bool != 0) {
					bool var_72_bool;
					func_836(var_1_object);
					if(var_72_bool != 0)
						var_62_bool = true;
				}
				if(var_62_bool != 0) {
					object var_74_object; object var_75_object;
					var_74_object = var_1_object;
					var_75_object = var_0_object;
					func_806();
					func_229(var_11_object, "Neutral");
					var_0_object->SetMessage(528028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530244, -1, 31632); //@t
					var_0_object->AddReply(528029, -1, 29391); //@t
					return 0;
				}
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(528022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528023, -1, 29385); //@t
				var_0_object->AddReply(530243, -1, 31631); //@t
				return 0;
			}
			if(var_10_bool == 31634) {
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(530246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530247, 31636, 31635); //@t
				var_0_object->AddReply(530249, 31636, 31637); //@t
				return 0;
			}
			if(var_10_bool == 31636) {
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(530248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530250, -1, 31639); //@t
				var_0_object->AddReply(530251, -1, 31640); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_774(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_457(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_522(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_484(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_733(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_768(int var_72_int)
{
	var_72_int = 527720;
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_635(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_768(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_766(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_770(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_772(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_860(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_183_bool = !var_24_bool; //@nz
		if(var_183_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_184_object;
	var_15_object = var_184_object;
	func_703();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_770(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
}


void func_772(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
}


void func_774(bool var_67_bool)
{
	var_67_bool = false;
}


void func_776(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


// @pe
void func_522(object var_2_object, string var_3_string)
{
	func_617();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_783(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_776(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_536(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_630(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_783(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_630(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_583;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_776(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_612;
				}
			} else if(var_27_int != 0) {
				goto Label_612;
			}
			}
					bool var_60_bool;
					func_615(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_607;
			}
		}
	Label_612:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_607:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


// @pe
void func_800(void)
{
	@SetVariable("ook11Soldier1", 1);
}


// @pe
void func_806(void)
{
	@SetVariable("ook11Soldier2", 1);
}


// @pe
void func_812(bool var_102_bool)
{
	int var_104_int;
	func_761(var_104_int, "k11q01");
	if(var_104_int == 2)
		var_102_bool = true;
	var_102_bool = false;
}


// @pe
void func_824(bool var_94_bool)
{
	int var_96_int;
	func_761(var_96_int, "ook11Soldier1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_703(void)
{
	bool var_186_bool;
	@CameraSwitchToNormal();
	bool var_187_bool;
	func_774(var_187_bool);
	if(var_187_bool != 0) {
	} else {
		@HasAnimationTrack(var_186_bool, "head");
		if(var_186_bool == 0) goto Label_719;
		@UnlookAsync("head");
	}
Label_719:
	
}


// @pe
void func_836(bool var_108_bool)
{
	int var_110_int;
	func_761(var_110_int, "k11q01Cured");
	if(var_110_int != 0) {
		var_108_bool = true;
		return 0;
	}
	var_108_bool = false;
}


// @pe
void func_457(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_630(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_536();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool = false;
		bool var_93_bool = false;
		bool var_94_bool;
		func_824(var_1_object);
		if(var_94_bool != 0) {
			bool var_102_bool;
			func_812(var_1_object);
			if(var_102_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			bool var_108_bool;
			func_836(var_1_object);
			if(!var_108_bool) //@nz
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			object var_115_object; object var_116_object;
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_800();
			func_229(var_86_object, "Neutral");
			var_0_object->SetMessage(528020); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528021, 31634, 29383); //@t
			var_0_object->AddReply(530245, 31634, 31633); //@t
		} else {
					bool var_151_bool = false;
					bool var_152_bool = false;
					bool var_153_bool;
					func_848(var_1_object);
					if(var_153_bool != 0) {
						bool var_159_bool;
						func_812(var_1_object);
						if(var_159_bool != 0)
							var_152_bool = true;
					}
					if(var_152_bool != 0) {
						bool var_161_bool;
						func_836(var_1_object);
						if(var_161_bool != 0)
							var_151_bool = true;
					}
					if(var_151_bool == 0) goto Label_177;
					object var_163_object; object var_164_object;
					var_163_object = var_1_object;
					var_164_object = var_0_object;
					func_806();
					func_229(var_86_object, "Neutral");
					var_0_object->SetMessage(528028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530244, -1, 31632); //@t
					var_0_object->AddReply(528029, -1, 29391); //@t
		}
	}
Label_199:
	for(;;) {
		bool var_138_bool;
		func_774(var_138_bool);
		if(var_138_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_720(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_228;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_228:
			return 0;

		}

	}
	
Label_177:
	func_229(var_86_object, "Neutral");
	var_0_object->SetMessage(528022); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(528023, -1, 29385); //@t
	var_0_object->AddReply(530243, -1, 31631); //@t
	goto Label_199;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_848(bool var_153_bool)
{
	int var_155_int;
	func_761(var_155_int, "ook11Soldier2");
	if(var_155_int == 0) {
		var_153_bool = true;
		return 0;
	}
	var_153_bool = false;
}


void func_720(string var_140_string)
{
	float var_143_float; float var_144_float;
	@lshGetAnimTimes(var_140_string, var_143_float, var_144_float);
	@lshPlayAnimation(var_143_float, var_144_float, false);
}


void func_727(string var_123_string, bool var_124_bool)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_123_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, var_124_bool);
}


void func_860(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x36b";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_733(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_484(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_622(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_229(object var_2_object, string var_119_string)
{
	bool var_120_bool;
	func_774(var_120_bool);
	if(!var_120_bool) //@nz
		return 0;
	if(var_119_string == var_2_object)
		return 0;
	string var_123_string; bool var_124_bool;
	var_119_string = var_123_string;
	if(var_119_string == "")
		var_124_bool = false;
	else
		var_124_bool = true;
	func_727(var_123_string, var_124_bool);
	var_2_object = var_119_string;
	
}


void func_615(bool var_60_bool)
{
	var_60_bool = true;
}


void func_744(void)
{
	bool var_13_bool;
	func_774(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_617(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_622(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_751(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_630(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_761(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_635(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_751(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_774(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_697;
		@LookAsyncCamera("head");
	}
Label_697:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_766(int var_73_int)
{
	var_73_int = 527721;
}


