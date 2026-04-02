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
			func_795();
			if(var_11_object == 41375) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_858();
			}
			if(var_11_object == 41380) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_867();
				object var_57_object = var_1_object;
				func_876(var_0_object);
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_882();
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_888();
			}
			if(var_10_bool == 41372) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539441); //@t
				var_0_object->ClearReplies(); //@t
				bool var_94_bool = true;
				bool var_95_bool = false;
				bool var_96_bool;
				func_907(var_1_object);
				if(var_96_bool != 0) {
					bool var_104_bool;
					func_919(var_1_object);
					if(!var_104_bool) //@nz
						var_95_bool = true;
				}
				if(var_95_bool != 1) {
					bool var_111_bool = false;
					bool var_112_bool;
					func_895(var_1_object);
					if(var_112_bool != 0) {
						bool var_118_bool;
						func_919(var_1_object);
						if(!var_118_bool) //@nz
							var_111_bool = true;
					}
					if(var_111_bool != 1)
						var_94_bool = false;
				}
				if(var_94_bool != 0)
					var_0_object->AddReply(539442, 41374, 41373); //@t
				bool var_124_bool = true;
				bool var_125_bool = false;
				bool var_126_bool = false;
				bool var_127_bool;
				func_907(var_1_object);
				if(var_127_bool != 0) {
					bool var_129_bool;
					func_919(var_1_object);
					if(var_129_bool != 0)
						var_126_bool = true;
				}
				if(var_126_bool != 0) {
					bool var_131_bool;
					func_931(var_131_bool, var_1_object);
					if(var_131_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 1) {
					bool var_140_bool = false;
					bool var_141_bool = false;
					bool var_142_bool;
					func_919(var_1_object);
					if(var_142_bool != 0) {
						bool var_144_bool;
						func_931(var_144_bool, var_1_object);
						if(var_144_bool != 0)
							var_141_bool = true;
					}
					if(var_141_bool != 0) {
						bool var_146_bool;
						func_895(var_1_object);
						if(var_146_bool != 0)
							var_140_bool = true;
					}
					if(var_140_bool != 1)
						var_124_bool = false;
				}
				if(var_124_bool != 0)
					var_0_object->AddReply(539445, 41377, 41376); //@t
				var_0_object->AddReply(539450, -1, 41381); //@t
				var_0_object->AddReply(540739, -1, 42777); //@t
				return 0;
			}
			if(var_10_bool == 41377) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540737, 42776, 42775); //@t
				return 0;
			}
			if(var_10_bool == 42776) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(540738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539447, 41379, 41378); //@t
				return 0;
			}
			if(var_10_bool == 41379) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539449, -1, 41380); //@t
				return 0;
			}
			if(var_10_bool == 41374) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539444, -1, 41375); //@t
				return 0;
			}
			var_3_string = true;
			bool var_185_bool;
			func_1044(var_185_bool);
			if(var_185_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_508(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_573(var_9_object, var_10_object);
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
			func_535(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_784(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_686(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_1038(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1036(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1040(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1042(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1019(var_76_int);
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
		var_181_bool = !var_24_bool; //@nz
		if(var_181_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_182_object;
	var_15_object = var_182_object;
	func_754();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_771(string var_170_string)
{
	float var_173_float; float var_174_float;
	@lshGetAnimTimes(var_170_string, var_173_float, var_174_float);
	@lshPlayAnimation(var_173_float, var_174_float, false);
}


void func_778(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


// @pe
void func_907(bool var_107_bool)
{
	int var_109_int;
	func_812(var_109_int, "k5q04");
	if(var_109_int == 3)
		var_107_bool = true;
	var_107_bool = false;
}


void func_1036(int var_73_int)
{
	var_73_int = 515572;
}


void func_1038(int var_72_int)
{
	var_72_int = 504031;
}


void func_1040(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_784(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_1042(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_1044(bool var_67_bool)
{
	var_67_bool = false;
}


void func_535(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_673(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_919(bool var_115_bool)
{
	int var_117_int;
	func_812(var_117_int, "k5q04_bring_water");
	if(var_117_int != 0) {
		var_115_bool = true;
		return 0;
	}
	var_115_bool = false;
}


void func_666(bool var_61_bool)
{
	var_61_bool = true;
}


void func_795(void)
{
	bool var_13_bool;
	func_1044(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_668(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_673(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_802(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_931(bool var_142_bool, object var_143_object)
{
	object var_145_object;
	var_143_object = var_145_object;
	bool var_144_bool;
	func_941(var_144_bool, var_145_object);
	if(var_144_bool != 0) {
		var_142_bool = true;
		return 0;
	}
	var_142_bool = false;
}


void func_681(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_812(int var_109_int, string var_110_string)
{
	int var_112_int;
	@GetVariable(var_110_string, var_112_int);
	var_112_int = var_109_int;
}


void func_941(bool var_144_bool, object var_145_object)
{
	int var_147_int;
	var_145_object->GetItemCountOfType(var_147_int, "bottle_water");
	if(var_147_int >= 20)
		var_144_bool = true;
	var_144_bool = false;
}


void func_686(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_802(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1044(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_748;
		@LookAsyncCamera("head");
	}
Label_748:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_817(string var_69_string, bool var_70_bool)
{
	object var_72_object;
	@FindActor(var_72_object, var_69_string);
	if(!var_72_object) //@nz
		@Trace(("Door " + var_69_string) + " not found");
	else
		var_72_object->SetProperty("locked", var_70_bool);
	
}
EMIT "Stack[-1] = 0";


void func_952(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 744, 2, 539461);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_991(var_25_bool, var_26_object, 740);
}
EMIT "Stack[-1] = 0";


// @pe
void func_573(object var_2_object, string var_3_string)
{
	func_668();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_834(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_965(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 745, 2, 539462);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_991(var_54_bool, var_55_object, 740);
}
EMIT "Stack[-1] = 0";


void func_841(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_834(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_226(var_86_object, "Neutral");
		var_0_object->SetMessage(539441); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool = true;
		bool var_106_bool = false;
		bool var_107_bool;
		func_907(var_1_object);
		if(var_107_bool != 0) {
			bool var_115_bool;
			func_919(var_1_object);
			if(!var_115_bool) //@nz
				var_106_bool = true;
		}
		if(var_106_bool != 1) {
			bool var_122_bool = false;
			bool var_123_bool;
			func_895(var_1_object);
			if(var_123_bool != 0) {
				bool var_129_bool;
				func_919(var_1_object);
				if(!var_129_bool) //@nz
					var_122_bool = true;
			}
			if(var_122_bool != 1)
				var_105_bool = false;
		}
		if(var_105_bool != 0)
			var_0_object->AddReply(539442, 41374, 41373); //@t
		bool var_135_bool = true;
		bool var_136_bool = false;
		bool var_137_bool = false;
		bool var_138_bool;
		func_907(var_1_object);
		if(var_138_bool != 0) {
			bool var_140_bool;
			func_919(var_1_object);
			if(var_140_bool != 0)
				var_137_bool = true;
		}
		if(var_137_bool != 0) {
			bool var_142_bool;
			func_931(var_142_bool, var_1_object);
			if(var_142_bool != 0)
				var_136_bool = true;
		}
		if(var_136_bool != 1) {
			bool var_151_bool = false;
			bool var_152_bool = false;
			bool var_153_bool;
			func_919(var_1_object);
			if(var_153_bool != 0) {
				bool var_155_bool;
				func_931(var_155_bool, var_1_object);
				if(var_155_bool != 0)
					var_152_bool = true;
			}
			if(var_152_bool != 0) {
				bool var_157_bool;
				func_895(var_1_object);
				if(var_157_bool != 0)
					var_151_bool = true;
			}
			if(var_151_bool != 1)
				var_135_bool = false;
		}
		if(var_135_bool != 0)
			var_0_object->AddReply(539445, 41377, 41376); //@t
		var_0_object->AddReply(539450, -1, 41381); //@t
		var_0_object->AddReply(540739, -1, 42777); //@t
		goto Label_196;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_196:
	bool var_168_bool;
	func_1044(var_168_bool);
	if(var_168_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_771(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_225;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_225:
		return 0;

	}
	
}


void func_587(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_681(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_841(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_681(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_634;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_834(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_663;
				}
			} else if(var_28_int != 0) {
				goto Label_663;
			}
			}
					bool var_61_bool;
					func_666(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_658;
			}
		}
	Label_663:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_658:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_978(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_858(void)
{
	@SetVariable("k5q04_bring_water", 1);
	func_952();
}


void func_991(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_978(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_226(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_1044(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_778(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


// @pe
void func_867(void)
{
	@SetVariable("k5q04", 4);
	func_965();
}


void func_876(object var_57_object)
{
	int var_60_int;
	var_57_object->RemoveItemByType(var_60_int, "bottle_water", 20);
}


void func_754(void)
{
	bool var_184_bool;
	@CameraSwitchToNormal();
	bool var_185_bool;
	func_1044(var_185_bool);
	if(var_185_bool != 0) {
	} else {
		@HasAnimationTrack(var_184_bool, "head");
		if(var_184_bool == 0) goto Label_770;
		@UnlookAsync("head");
	}
Label_770:
	
}


// @pe
void func_882(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_888(void)
{
	func_817("sobor@door1", false);
}


void func_1019(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x40a";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_508(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_681(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_587();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_895(bool var_123_bool)
{
	int var_125_int;
	func_812(var_125_int, "k5q04");
	if(var_125_int == 2)
		var_123_bool = true;
	var_123_bool = false;
}


