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
			func_924();
			if(var_7_bool == 21843) {
				object var_12_object = var_1_object;
				func_1000(var_0_object);
			}
			if(var_7_bool == 21844) {
				object var_17_object = var_1_object;
				func_1000(var_0_object);
			}
			if(var_7_bool == 21846) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_994();
			}
			if(var_7_bool == 21856) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1005();
			}
			if(var_7_bool == 21861) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_1005();
			}
			if(var_6_int == 21840) {
				bool var_58_bool = false;
				bool var_59_bool;
				func_1032(var_1_object);
				if(var_59_bool != 0) {
					bool var_67_bool;
					func_1010(var_67_bool, var_1_object);
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
				bool var_116_bool = false;
				bool var_117_bool;
				func_1032(var_1_object);
				if(var_117_bool != 0) {
					bool var_119_bool;
					func_1010(var_119_bool, var_1_object);
					if(!var_119_bool) //@nz
						var_116_bool = true;
				}
				if(var_116_bool != 0) {
					func_206(var_7_bool, "Neutral");
					var_0_object->SetMessage(520636); //@t
					var_0_object->ClearReplies(); //@t
					bool var_124_bool;
					func_1020(var_1_object);
					if(var_124_bool != 0)
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
			bool var_209_bool;
			func_1155(var_209_bool);
			if(var_209_bool != 0)
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
			object var_225_object;
			func_947(var_225_object);
			var_225_object = var_19_object;
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
				bool var_244_bool;
				func_958(var_244_bool, "quest_b6_01", "sacrifice");
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
			func_931(var_9_object);
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
	int var_90_int;
	func_1149(var_90_int);
	var_38_object->SetNPCName(var_90_int);
	int var_91_int;
	func_1147(var_91_int);
	var_38_object->SetNPCDescription(var_91_int);
	string var_92_string;
	func_1151(var_92_string);
	var_38_object->SetPhoto(var_92_string);
	string var_93_string;
	func_1153(var_93_string);
	var_38_object->SetPhoto2(var_93_string);
	int var_94_int;
	func_1130(var_94_int);
	var_38_object->SetPlayerName(var_94_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_103_object; object var_104_object;
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(1);
	func_74(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_214_bool = !var_41_bool; //@nz
		if(var_214_bool == 0) goto Label_63;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_63:
	object var_215_object;
	var_32_object = var_215_object;
	func_875();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_1153(string var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png";
}


void func_1155(bool var_85_bool)
{
	var_85_bool = false;
}


// @pe
void func_1032(bool var_111_bool)
{
	int var_113_int;
	func_953(var_113_int, "b6q01");
	if(var_113_int == 4)
		var_111_bool = true;
	var_111_bool = false;
}


void func_909(string var_148_string, bool var_149_bool)
{
	bool var_155_bool; float var_156_float; float var_157_float;
	@lshHasAnimation(var_155_bool, var_148_string);
	if(var_155_bool != 0) {
		@lshGetAnimTimes(var_148_string, var_156_float, var_157_float);
		@lshPlayAnimation(var_156_float, var_157_float, var_149_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_148_string);
	}
	
}


void func_893(string var_170_string)
{
	bool var_174_bool; float var_175_float; float var_176_float;
	@lshHasAnimation(var_174_bool, var_170_string);
	if(var_174_bool != 0) {
		@lshGetAnimTimes(var_170_string, var_175_float, var_176_float);
		@lshPlayAnimation(var_175_float, var_176_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_170_string);
	}
	
}


void func_1044(bool var_121_bool, object var_122_object)
{
	int var_129_int; object var_131_object; int var_132_int; bool var_133_bool; int var_134_int;
	var_122_object->GetItemCount(var_129_int, 4);
	int var_130_int = 0;
	
	for(;;) {
		if(var_130_int < var_129_int) {
			var_122_object->GetItem(var_131_object, var_130_int, 4);
			var_131_object->GetItemID(var_132_int);
			@HasInvItemProperty(var_133_bool, var_132_int, "Microscope");
			if(!var_133_bool) { //@nz
			} else {
			@GetInvItemProperty(var_134_int, var_132_int, "Microscope");
			if(var_134_int == 2) {
				var_121_bool = true;
				return 12;
			}
			var_131_object = null;
		}
		var_121_bool = false;
		return 12;
		}
		var_130_int += 1;
	}
	
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
		func_931(var_14_object);
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


void func_924(void)
{
	bool var_9_bool;
	func_1155(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_801(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_931(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


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
	func_937(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector, true);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	bool var_85_bool;
	func_1155(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_869;
		@LookAsyncCamera("head");
	}
Label_869:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


void func_937(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


void func_947(object var_225_object)
{
	object var_227_object;
	@CreateObjectVector(var_227_object);
	var_227_object = var_225_object;
}
EMIT "Stack[-1] = 0";


void func_1076(void)
{
	object var_30_object;
	@CreateDiaryEntry(var_30_object, 365, 1, 525665);
	bool var_34_bool; object var_35_object;
	var_30_object = var_35_object;
	func_1102(var_34_bool, var_35_object, 265);
}
EMIT "Stack[-1] = 0";


void func_953(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_958(bool var_244_bool, string var_245_string, string var_246_string)
{
	object var_248_object;
	@FindActor(var_248_object, var_245_string);
	if(var_248_object == null)
		var_244_bool = false;
	@Trigger(var_248_object, var_246_string);
	var_244_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1089(object var_43_object)
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


void func_713(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_103_object, object var_104_object)
{
	var_0_object = var_104_object;
	var_1_object = var_103_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_110_bool = false;
		bool var_111_bool;
		func_1032(var_1_object);
		if(var_111_bool != 0) {
			bool var_119_bool;
			func_1010(var_119_bool, var_1_object);
			if(var_119_bool != 0)
				var_110_bool = true;
		}
		if(var_110_bool != 0) {
			func_206(var_104_object, "Neutral");
			var_0_object->SetMessage(520631); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520632, 21842, 21841); //@t
			var_0_object->AddReply(520635, -1, 21844); //@t
		} else {
					bool var_186_bool = false;
					bool var_187_bool;
					func_1032(var_1_object);
					if(var_187_bool != 0) {
						bool var_189_bool;
						func_1010(var_189_bool, var_1_object);
						if(!var_189_bool) //@nz
							var_186_bool = true;
					}
					if(var_186_bool == 0) goto Label_154;
					func_206(var_104_object, "Neutral");
					var_0_object->SetMessage(520636); //@t
					var_0_object->ClearReplies(); //@t
					bool var_194_bool;
					func_1020(var_1_object);
					if(var_194_bool != 0)
						var_0_object->AddReply(520637, 21847, 21846); //@t
					var_0_object->AddReply(520693, -1, 21903); //@t
		}
	}
Label_176:
	for(;;) {
		bool var_168_bool;
		func_1155(var_168_bool);
		if(var_168_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_893(var_2_object);
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
	func_206(var_104_object, "Neutral");
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
	func_977(var_31_int);
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
				func_970(var_53_string, var_54_int);
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


void func_970(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


// @pe
void func_206(object var_2_object, string var_144_string)
{
	bool var_145_bool;
	func_1155(var_145_bool);
	if(!var_145_bool) //@nz
		return 0;
	if(var_144_string == var_2_object)
		return 0;
	string var_148_string; bool var_149_bool;
	var_144_string = var_148_string;
	if(var_144_string == "")
		var_149_bool = false;
	else
		var_149_bool = true;
	func_909(var_148_string, var_149_bool);
	var_2_object = var_144_string;
	
}


void func_1102(bool var_34_bool, object var_35_object, int var_36_int)
{
	object var_43_object;
	func_1089(var_43_object);
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


void func_977(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_970(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_994(void)
{
	@SetVariable("oob6Morlok1", 1);
}


// @pe
void func_1000(object var_13_object)
{
	var_13_object->SetReturnValue(1);
}


void func_1130(int var_94_int)
{
	int var_96_int;
	@GetVariable("branch", var_96_int);
	if(var_96_int == 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x479";
	}
	if(var_96_int == 1) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
}


void func_875(void)
{
	bool var_217_bool;
	@CameraSwitchToNormal(true);
	bool var_219_bool;
	func_1155(var_219_bool);
	if(var_219_bool != 0) {
	} else {
		@HasAnimationTrack(var_217_bool, "head");
		if(var_217_bool == 0) goto Label_892;
		@UnlookAsync("head");
	}
Label_892:
	
}


// @pe
void func_1005(void)
{
	func_1076();
}


// @pe
void func_1010(bool var_119_bool, object var_120_object)
{
	object var_122_object;
	var_120_object = var_122_object;
	bool var_121_bool;
	func_1044(var_121_bool, var_122_object);
	if(var_121_bool != 0) {
		var_119_bool = true;
		return 0;
	}
	var_119_bool = false;
}


void func_1147(int var_91_int)
{
	var_91_int = 521048;
}


// @pe
void func_1020(bool var_194_bool)
{
	int var_196_int;
	func_953(var_196_int, "oob6Morlok1");
	if(var_196_int == 0) {
		var_194_bool = true;
		return 0;
	}
	var_194_bool = false;
}


void func_1149(int var_90_int)
{
	var_90_int = 521047;
}


void func_1151(string var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png";
}


