// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_904();
			if(var_7_bool == 21843) {
				object var_12_object = var_1_object;
				func_980(var_0_object);
			}
			if(var_7_bool == 21844) {
				object var_17_object = var_1_object;
				func_980(var_0_object);
			}
			if(var_7_bool == 21846) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_974();
			}
			if(var_7_bool == 21856) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_985();
			}
			if(var_7_bool == 21861) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_985();
			}
			if(var_6_int == 21840) {
				bool var_58_bool = false;
				bool var_59_bool;
				func_1012(var_1_object);
				if(var_59_bool != 0) {
					bool var_67_bool;
					func_990(var_67_bool, var_1_object);
					if(var_67_bool != 0)
						var_58_bool = true;
				}
				if(var_58_bool != 0) {
					func_206(var_7_bool, "Neutral");
					var_0_object->SetMessage(520631); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520632, 21842, 21841); //@t
					var_0_object->AddReply(520635, -1, 21844); //@t
					return 0;
				}
				bool var_111_bool = false;
				bool var_112_bool;
				func_1012(var_1_object);
				if(var_112_bool != 0) {
					bool var_114_bool;
					func_990(var_114_bool, var_1_object);
					if(!var_114_bool) //@nz
						var_111_bool = true;
				}
				if(var_111_bool != 0) {
					func_206(var_7_bool, "Neutral");
					var_0_object->SetMessage(520636); //@t
					var_0_object->ClearReplies(); //@t
					bool var_119_bool;
					func_1000(var_1_object);
					if(var_119_bool != 0)
						var_0_object->AddReply(520637, 21847, 21846); //@t
					var_0_object->AddReply(520693, -1, 21903); //@t
					return 0;
				}
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520695, -1, 21905); //@t
				var_0_object->AddReply(520696, -1, 21906); //@t
				return 0;
			}
			if(var_6_int == 21847) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520639, 21849, 21848); //@t
				return 0;
			}
			if(var_6_int == 21849) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520641, 21851, 21850); //@t
				var_0_object->AddReply(520654, 21858, 21864); //@t
				return 0;
			}
			if(var_6_int == 21851) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520642); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520643, 21853, 21852); //@t
				var_0_object->AddReply(520653, 21858, 21862); //@t
				return 0;
			}
			if(var_6_int == 21853) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520645, 21855, 21854); //@t
				var_0_object->AddReply(520648, 21858, 21857); //@t
				return 0;
			}
			if(var_6_int == 21858) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520650, 21860, 21859); //@t
				return 0;
			}
			if(var_6_int == 21860) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520652, -1, 21861); //@t
				return 0;
			}
			if(var_6_int == 21855) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520647, -1, 21856); //@t
				return 0;
			}
			if(var_6_int == 21842) {
				func_206(var_7_bool, "Neutral");
				var_0_object->SetMessage(520633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520634, -1, 21843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_204_bool;
			func_1135(var_204_bool);
			if(var_204_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_644:
		for(;;) {
			bool var_8_bool;
			func_801(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_652;
			@Hold();
		}
	
	Label_652:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_715();
		goto Label_644;
	}
	EMIT "Return(); Pop(2)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_19_object; object var_20_object; int var_21_int; int var_22_int; object var_23_object; int var_24_int; bool var_25_bool; int var_26_int; int var_27_int; object var_28_object; object var_29_object; int var_30_int;
		func_796();
		int var_31_int; object var_32_object;
		var_6_object = var_32_object;
		TaskCall(0);
		func_0(var_33_object, var_31_int, var_32_object);
		TaskReturn();
		if(var_33_object == 1) {
			object var_213_object;
			func_927(var_213_object);
			var_213_object = var_19_object;
			@CreateIntVector(var_20_object);
			var_6_object->GetItemCount(var_21_int, 4);
			var_22_int = 0;

			for(;;) {
				if(var_22_int < var_21_int) {
					var_6_object->GetItem(var_23_object, var_22_int, 4);
					var_23_object->GetItemID(var_24_int);
					@HasInvItemProperty(var_25_bool, var_24_int, "Microscope");
					if(!var_25_bool) { //@nz
					} else {
					@GetInvItemProperty(var_26_int, var_24_int, "Microscope");
					if(var_26_int != 2) {
						goto Label_591;
					}
					var_19_object->add(var_23_object);
					var_20_object->add(var_22_int);
					var_23_object = null;
				}
				var_19_object->size(var_21_int);
				if(var_21_int == 0) {
					@Trace("b6q01 error, no blood to open bull");
					return 24;
				}
				if(var_21_int == 1) {
					var_27_int = 0;
				} else {
					@CreateIntVector(var_28_object);
					@ChooseItem(var_19_object, var_28_object);
					var_28_object->size(var_21_int);
					if(var_21_int != 0)
						var_28_object->get(var_27_int, 0);
					else
						return 24;
					var_28_object = null;
				}
				var_19_object->get(var_29_object, var_27_int);
				var_20_object->get(var_30_int, var_27_int);
				var_6_object->RemoveItem(var_30_int, 1, 4);
				bool var_232_bool;
				func_938(var_232_bool, "quest_b6_01", "sacrifice");
				@SetVariable("b6q01", 5);
				var_29_object = null;
				var_20_object = null;
				var_19_object = null;
		}
			return 24;
			}
		Label_591:
			var_22_int += 1;
		}
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_664(var_6_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_713(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_911(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_31_int, object var_32_object)
{
	var_0_object = var_32_object;
	bool var_42_bool; object var_43_object;
	var_32_object = var_43_object;
	func_806(var_42_bool, var_43_object, 110.0);
	if(!var_42_bool) { //@nz
		var_31_int = -2;
		return 8;
	}
	object var_38_object;
	@CreateDialog(var_38_object);
	int var_89_int;
	func_1129(var_89_int);
	var_38_object->SetNPCName(var_89_int);
	int var_90_int;
	func_1127(var_90_int);
	var_38_object->SetNPCDescription(var_90_int);
	string var_91_string;
	func_1131(var_91_string);
	var_38_object->SetPhoto(var_91_string);
	string var_92_string;
	func_1133(var_92_string);
	var_38_object->SetPhoto2(var_92_string);
	int var_93_int;
	func_1110(var_93_int);
	var_38_object->SetPlayerName(var_93_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_102_object; object var_103_object;
	var_32_object = var_102_object;
	var_38_object = var_103_object;
	TaskCall(1);
	func_74(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_203_bool = !var_41_bool; //@nz
		if(var_203_bool == 0) goto Label_63;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_63:
	object var_204_object;
	var_32_object = var_204_object;
	func_874();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_1024(bool var_120_bool, object var_121_object)
{
	int var_128_int; object var_130_object; int var_131_int; bool var_132_bool; int var_133_int;
	var_121_object->GetItemCount(var_128_int, 4);
	int var_129_int = 0;
	
	for(;;) {
		if(var_129_int < var_128_int) {
			var_121_object->GetItem(var_130_object, var_129_int, 4);
			var_130_object->GetItemID(var_131_int);
			@HasInvItemProperty(var_132_bool, var_131_int, "Microscope");
			if(!var_132_bool) { //@nz
			} else {
			@GetInvItemProperty(var_133_int, var_131_int, "Microscope");
			if(var_133_int == 2) {
				var_120_bool = true;
				return 12;
			}
			var_130_object = null;
		}
		var_120_bool = false;
		return 12;
		}
		var_129_int += 1;
	}
	
}


void func_898(string var_147_string, bool var_148_bool)
{
	float var_153_float; float var_154_float;
	@lshGetAnimTimes(var_147_string, var_153_float, var_154_float);
	@lshPlayAnimation(var_153_float, var_154_float, var_148_bool);
}


void func_904(void)
{
	bool var_9_bool;
	func_1135(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_911(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_917(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


void func_664(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_713(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_911(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_794(bool var_56_bool)
{
	var_56_bool = true;
}


void func_796(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_927(object var_213_object)
{
	object var_215_object;
	@CreateObjectVector(var_215_object);
	var_215_object = var_213_object;
}
EMIT "Stack[-1] = 0";


void func_1056(void)
{
	object var_30_object;
	@CreateDiaryEntry(var_30_object, 365, 1, 525665);
	bool var_34_bool; object var_35_object;
	var_30_object = var_35_object;
	func_1082(var_34_bool, var_35_object, 265);
}
EMIT "Stack[-1] = 0";


void func_801(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_933(int var_112_int, string var_113_string)
{
	int var_115_int;
	@GetVariable(var_113_string, var_115_int);
	var_115_int = var_112_int;
}


void func_806(bool var_42_bool, object var_43_object, float var_44_float)
{
	cvector var_55_cvector; bool var_62_bool;
	var_43_object->GetPosition(var_55_cvector);
	float var_54_float;
	var_43_object->GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_54_float);
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	@GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_64_float + var_54_float);
	cvector var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_67_float = sqrt(var_57_cvector | var_57_cvector);
	var_57_cvector /= var_67_float;
	cvector var_58_cvector = -var_57_cvector;
	cvector var_69_cvector;
	func_917(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector);
	var_82_float = GetByIndex(var_59_cvector, 0);
	var_83_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_82_float, var_83_float);
	bool var_84_bool;
	func_1135(var_84_bool);
	if(var_84_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_868;
		@LookAsyncCamera("head");
	}
Label_868:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


void func_938(bool var_232_bool, string var_233_string, string var_234_string)
{
	object var_236_object;
	@FindActor(var_236_object, var_233_string);
	if(var_236_object == null)
		var_232_bool = false;
	@Trigger(var_236_object, var_234_string);
	var_232_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1069(object var_43_object)
{
	object var_45_object;
	@GetDiaryRoot(var_45_object);
	if(!var_45_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_43_object = false;
	}
	var_45_object = var_43_object;
}
EMIT "Stack[-1] = 0";


void func_950(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_1082(bool var_34_bool, object var_35_object, int var_36_int)
{
	object var_43_object;
	func_1069(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	object var_41_object;
	var_40_object->Find(var_36_int, var_41_object);
	if(!var_41_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_36_int);
		var_34_bool = false;
	}
	var_41_object->AddChild(var_35_object);
	@SendWorldWndMessage(7);
	int var_42_int;
	var_35_object->GetCategory(var_42_int);
	@SetDiarySection(var_42_int);
	var_34_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_957(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_950(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_713(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_109_bool = false;
		bool var_110_bool;
		func_1012(var_1_object);
		if(var_110_bool != 0) {
			bool var_118_bool;
			func_990(var_118_bool, var_1_object);
			if(var_118_bool != 0)
				var_109_bool = true;
		}
		if(var_109_bool != 0) {
			func_206(var_103_object, "Neutral");
			var_0_object->SetMessage(520631); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520632, 21842, 21841); //@t
			var_0_object->AddReply(520635, -1, 21844); //@t
		} else {
					bool var_175_bool = false;
					bool var_176_bool;
					func_1012(var_1_object);
					if(var_176_bool != 0) {
						bool var_178_bool;
						func_990(var_178_bool, var_1_object);
						if(!var_178_bool) //@nz
							var_175_bool = true;
					}
					if(var_175_bool == 0) goto Label_154;
					func_206(var_103_object, "Neutral");
					var_0_object->SetMessage(520636); //@t
					var_0_object->ClearReplies(); //@t
					bool var_183_bool;
					func_1000(var_1_object);
					if(var_183_bool != 0)
						var_0_object->AddReply(520637, 21847, 21846); //@t
					var_0_object->AddReply(520693, -1, 21903); //@t
		}
	}
Label_176:
	for(;;) {
		bool var_162_bool;
		func_1135(var_162_bool);
		if(var_162_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_891(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_205;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_205:
			return 0;

		}

	}
	
Label_154:
	func_206(var_103_object, "Neutral");
	var_0_object->SetMessage(520694); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(520695, -1, 21905); //@t
	var_0_object->AddReply(520696, -1, 21906); //@t
	goto Label_176;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_715(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_801(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_957(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_801(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_762;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_950(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_791;
				}
			} else if(var_23_int != 0) {
				goto Label_791;
			}
			}
					bool var_56_bool;
					func_794(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_786;
			}
		}
	Label_791:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_786:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


// @pe
void func_206(object var_2_object, string var_143_string)
{
	bool var_144_bool;
	func_1135(var_144_bool);
	if(!var_144_bool) //@nz
		return 0;
	if(var_143_string == var_2_object)
		return 0;
	string var_147_string; bool var_148_bool;
	var_143_string = var_147_string;
	if(var_143_string == "")
		var_148_bool = false;
	else
		var_148_bool = true;
	func_898(var_147_string, var_148_bool);
	var_2_object = var_143_string;
	
}


// @pe
void func_974(void)
{
	@SetVariable("oob6Morlok1", 1);
}


// @pe
void func_980(object var_13_object)
{
	var_13_object->SetReturnValue(1);
}


void func_1110(int var_93_int)
{
	int var_95_int;
	@GetVariable("branch", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 1;
		return 2;
	EMIT "GOTO 0x465";
	}
	if(var_95_int == 1) {
		var_93_int = 2;
		return 2;
	}
	var_93_int = 3;
}


// @pe
void func_985(void)
{
	func_1056();
}


// @pe
void func_990(bool var_118_bool, object var_119_object)
{
	object var_121_object;
	var_119_object = var_121_object;
	bool var_120_bool;
	func_1024(var_120_bool, var_121_object);
	if(var_120_bool != 0) {
		var_118_bool = true;
		return 0;
	}
	var_118_bool = false;
}


void func_1127(int var_90_int)
{
	var_90_int = 521048;
}


// @pe
void func_1000(bool var_183_bool)
{
	int var_185_int;
	func_933(var_185_int, "oob6Morlok1");
	if(var_185_int == 0) {
		var_183_bool = true;
		return 0;
	}
	var_183_bool = false;
}


void func_1129(int var_89_int)
{
	var_89_int = 521047;
}


void func_874(void)
{
	bool var_206_bool;
	@CameraSwitchToNormal();
	bool var_207_bool;
	func_1135(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_206_bool, "head");
		if(var_206_bool == 0) goto Label_890;
		@UnlookAsync("head");
	}
Label_890:
	
}


void func_1131(string var_91_string)
{
	var_91_string = "ui/NPC_Citizen2.png";
}


void func_1133(string var_92_string)
{
	var_92_string = "ui/NPC_Citizen2_b.png";
}


void func_1135(bool var_84_bool)
{
	var_84_bool = false;
}


// @pe
void func_1012(bool var_110_bool)
{
	int var_112_int;
	func_933(var_112_int, "b6q01");
	if(var_112_int == 4)
		var_110_bool = true;
	var_110_bool = false;
}


void func_891(string var_164_string)
{
	float var_167_float; float var_168_float;
	@lshGetAnimTimes(var_164_string, var_167_float, var_168_float);
	@lshPlayAnimation(var_167_float, var_168_float, false);
}


