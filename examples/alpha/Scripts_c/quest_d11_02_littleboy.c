// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_582();
			if(var_8_bool == 15360) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_665();
			}
			if(var_8_bool == 15363) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_699();
			}
			if(var_8_bool == 15365) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_682();
				object var_85_object = var_1_object;
				func_654(var_0_object);
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_648();
				object var_108_object = var_1_object;
				func_711(var_0_object);
			}
			if(var_8_bool == 15366) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_705();
			}
			if(var_8_bool == 15368) {
				object var_119_object = var_1_object;
				func_711(var_0_object);
			}
			if(var_7_bool == 15356) {
				bool var_123_bool;
				func_716(var_1_object);
				if(var_123_bool != 0) {
					func_192(var_8_bool, "Neutral");
					var_0_object->SetMessage(14142); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14143, 15359, 15357); //@t
					return 0;
				}
				func_192(var_8_bool, "Neutral");
				var_0_object->SetMessage(14147); //@t
				var_0_object->ClearReplies(); //@t
				bool var_150_bool = true;
				bool var_151_bool = false;
				bool var_152_bool;
				func_728(var_1_object);
				if(var_152_bool != 0) {
					bool var_158_bool;
					func_764(var_1_object);
					if(var_158_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 1) {
					bool var_164_bool = false;
					bool var_165_bool;
					func_752(var_1_object);
					if(var_165_bool != 0) {
						bool var_171_bool;
						func_764(var_1_object);
						if(var_171_bool != 0)
							var_164_bool = true;
					}
					if(var_164_bool != 1)
						var_150_bool = false;
				}
				if(var_150_bool != 0)
					var_0_object->AddReply(14149, 15364, 15363); //@t
				bool var_176_bool = false;
				bool var_177_bool;
				func_740(var_1_object);
				if(var_177_bool != 0) {
					bool var_183_bool;
					func_776(var_1_object);
					if(var_183_bool != 0)
						var_176_bool = true;
				}
				if(var_176_bool != 0)
					var_0_object->AddReply(14152, 15367, 15366); //@t
				var_0_object->AddReply(14148, -1, 15362); //@t
				return 0;
			}
			if(var_7_bool == 15367) {
				func_192(var_8_bool, "Neutral");
				var_0_object->SetMessage(14153); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14154, -1, 15368); //@t
				return 0;
			}
			if(var_7_bool == 15364) {
				func_192(var_8_bool, "Neutral");
				var_0_object->SetMessage(14150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14151, -1, 15365); //@t
				return 0;
			}
			if(var_7_bool == 15359) {
				func_192(var_8_bool, "Neutral");
				var_0_object->SetMessage(14145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14146, -1, 15360); //@t
				var_0_object->AddReply(14144, -1, 15358); //@t
				return 0;
			}
			var_3_string = true;
			bool var_219_bool;
			func_899(var_219_bool);
			if(var_219_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd1";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = true;
		func_454();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		if(var_1_object != 0) {
			int var_9_int; object var_10_object;
			var_7_object = var_10_object;
			TaskCall(0);
			func_0(var_11_object, var_9_int, var_10_object);
			TaskReturn();
			if(var_11_object == 1000)
				var_1_object = false;
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_9_bool);
			bool var_12_bool = false;
			if(!var_9_bool) { //@nz
				bool var_14_bool;
				func_502(var_14_bool);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0) {
				object var_15_object;
				func_589(var_15_object);
				@RemoveActor(var_15_object);
			}
		} else if(var_7_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_502(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_589(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_504(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_61_int;
	func_895(var_61_int);
	var_16_object->SetNPCName(var_61_int);
	string var_62_string;
	func_897(var_62_string);
	var_16_object->SetPhoto(var_62_string);
	int var_63_int;
	func_830(var_63_int);
	var_16_object->SetPlayerName(var_63_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_72_object; object var_73_object;
	var_10_object = var_72_object;
	var_16_object = var_73_object;
	TaskCall(1);
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_161_bool = !var_19_bool; //@nz
		if(var_161_bool == 0) goto Label_52;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_52:
	object var_162_object;
	var_10_object = var_162_object;
	func_560();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_897(string var_62_string)
{
	var_62_string = "ui/NPC_None.png";
}


void func_899(bool var_88_bool)
{
	var_88_bool = false;
}


// @pe
void func_764(bool var_124_bool)
{
	int var_126_int;
	func_605(var_126_int, "ood11ULittleBoy1");
	if(var_126_int == 0) {
		var_124_bool = true;
		return 0;
	}
	var_124_bool = false;
}


// @pe
void func_776(bool var_149_bool)
{
	int var_151_int;
	func_605(var_151_int, "ood11ULittleBoy2");
	if(var_151_int == 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


// @pe
void func_648(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_654(object var_85_object)
{
	@Trace("revolver ammo6 is given");
	object var_88_object;
	var_85_object = var_88_object;
	func_623(var_88_object, "revolver_ammo", 6);
}


void func_788(object var_32_object)
{
	object var_34_object;
	@GetDiaryRoot(var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_32_object = false;
	}
	var_34_object = var_32_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_665(void)
{
	@SetVariable("d11q02", 1);
	func_847();
	func_879();
	bool var_51_bool;
	func_636(var_51_bool, "quest_d11_02", "init_graveyard");
}


void func_801(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_788(var_32_object);
	object var_29_object;
	var_32_object = var_29_object;
	object var_30_object;
	var_29_object->Find(var_25_int, var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_25_int);
		var_23_bool = false;
	}
	var_30_object->AddChild(var_24_object);
	@SetVariable("player_diary", 1);
	int var_31_int;
	var_24_object->GetCategory(var_31_int);
	@SetDiarySection(var_31_int);
	var_23_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_682(void)
{
	int var_67_int;
	func_605(var_67_int, "d11q02");
	if(var_67_int != 1000) {
		func_863();
		bool var_82_bool;
		func_636(var_82_bool, "quest_d11_02", "completed");
	}
}


// @pe
void func_560(void)
{
	@CameraSwitchToNormal();
}


void func_564(string var_91_string)
{
	@Trace("playing " + var_91_string);
	float var_94_float;
	float var_95_float;
	@lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	@lshPlayAnimation(var_94_float, var_95_float);
	@Trace("start: " + var_94_float);
	@Trace("end: " + var_95_float);
}


// @pe
void func_699(void)
{
	@SetVariable("ood11ULittleBoy1", 1);
}


void func_830(int var_63_int)
{
	int var_65_int;
	@GetVariable("player", var_65_int);
	if(var_65_int == 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x34d";
	}
	if(var_65_int == 1) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_72_object, object var_73_object)
{
	var_0_object = var_73_object;
	var_1_object = var_72_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_79_bool;
		func_716(var_1_object);
		if(var_79_bool != 0) {
			func_192(var_73_object, "Neutral");
			var_0_object->SetMessage(14142); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14143, 15359, 15357); //@t
		} else {
					func_192(var_73_object, "Neutral");
					var_0_object->SetMessage(14147); //@t
					var_0_object->ClearReplies(); //@t
					bool var_116_bool = true;
					bool var_117_bool = false;
					bool var_118_bool;
					func_728(var_1_object);
					if(var_118_bool != 0) {
						bool var_124_bool;
						func_764(var_1_object);
						if(var_124_bool != 0)
							var_117_bool = true;
					}
					if(var_117_bool != 1) {
						bool var_130_bool = false;
						bool var_131_bool;
						func_752(var_1_object);
						if(var_131_bool != 0) {
							bool var_137_bool;
							func_764(var_1_object);
							if(var_137_bool != 0)
								var_130_bool = true;
						}
						if(var_130_bool != 1)
							var_116_bool = false;
					}
					if(var_116_bool != 0)
						var_0_object->AddReply(14149, 15364, 15363); //@t
					bool var_142_bool = false;
					bool var_143_bool;
					func_740(var_1_object);
					if(var_143_bool != 0) {
						bool var_149_bool;
						func_776(var_1_object);
						if(var_149_bool != 0)
							var_142_bool = true;
					}
					if(var_142_bool != 0)
						var_0_object->AddReply(14152, 15367, 15366); //@t
					var_0_object->AddReply(14148, -1, 15362); //@t
		}
	}
	for(;;) {
		bool var_106_bool;
		func_899(var_106_bool);
		if(var_106_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_564(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_191;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_191:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


// @pe
void func_192(object var_2_object, string var_87_string)
{
	bool var_88_bool;
	func_899(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_object)
		return 0;
	string var_91_string;
	func_564(var_91_string);
	var_2_object = var_91_string;
}


// @pe
void func_705(void)
{
	@SetVariable("ood11ULittleBoy2", 1);
}


void func_582(void)
{
	bool var_10_bool;
	func_899(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_711(object var_109_object)
{
	var_109_object->SetReturnValue(1000);
}


void func_454(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_716(bool var_79_bool)
{
	int var_81_int;
	func_605(var_81_int, "d11q02");
	if(var_81_int == 0) {
		var_79_bool = true;
		return 0;
	}
	var_79_bool = false;
}


void func_589(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_847(void)
{
	@Trace("Adding diary entry");
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 197, 2, 15485);
	bool var_23_bool; object var_24_object;
	var_18_object = var_24_object;
	func_801(var_23_bool, var_24_object, -1);
}
EMIT "Stack[-1] = 0";


void func_595(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_728(bool var_118_bool)
{
	int var_120_int;
	func_605(var_120_int, "d11q02");
	if(var_120_int == 2)
		var_118_bool = true;
	var_118_bool = false;
}


void func_605(int var_81_int, string var_82_string)
{
	int var_84_int;
	@GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
}


void func_863(void)
{
	@Trace("Adding diary entry");
	object var_74_object;
	@CreateDiaryEntry(var_74_object, 198, 2, 15486);
	bool var_79_bool; object var_80_object;
	var_74_object = var_80_object;
	func_801(var_79_bool, var_80_object, 197);
}
EMIT "Stack[-1] = 0";


void func_610(object var_93_object, object var_94_object, int var_95_int)
{
	int var_99_int;
	var_94_object->GetItemID(var_99_int);
	int var_100_int;
	@GetInvItemProperty(var_100_int, var_99_int, "Category");
	bool var_101_bool;
	var_93_object->AddItem(var_101_bool, var_94_object, var_100_int, var_95_int);
	if(!var_101_bool) //@nz
		var_93_object->DropItems(var_94_object, var_95_int);
}


// @pe
void func_740(bool var_143_bool)
{
	int var_145_int;
	func_605(var_145_int, "d11q02");
	if(var_145_int == -1)
		var_143_bool = true;
	var_143_bool = false;
}


void func_623(object var_88_object, string var_89_string, int var_90_int)
{
	object var_92_object;
	@CreateInvItem(var_92_object);
	var_92_object->SetItemName(var_89_string);
	object var_93_object; object var_94_object; int var_95_int;
	var_88_object = var_93_object;
	var_92_object = var_94_object;
	var_90_int = var_95_int;
	func_610(var_93_object, var_94_object, var_95_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_752(bool var_131_bool)
{
	int var_133_int;
	func_605(var_133_int, "d11q02");
	if(var_133_int == 1000)
		var_131_bool = true;
	var_131_bool = false;
}


void func_879(void)
{
	@Trace("Adding diary entry");
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 199, 2, 15487);
	bool var_48_bool; object var_49_object;
	var_43_object = var_49_object;
	func_801(var_48_bool, var_49_object, 197);
}
EMIT "Stack[-1] = 0";


void func_502(bool var_9_bool)
{
	var_9_bool = true;
}


void func_504(bool var_20_bool, object var_21_object)
{
	cvector var_31_cvector;
	var_21_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_21_object->GetEyesHeight(var_30_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_38_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_39_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_42_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_595(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * 70) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
}


void func_636(bool var_51_bool, string var_52_string, string var_53_string)
{
	object var_55_object;
	@FindActor(var_55_object, var_52_string);
	if(var_55_object == null)
		var_51_bool = false;
	@Trigger(var_55_object, var_53_string);
	var_51_bool = true;
}
EMIT "Stack[-1] = 0";


void func_895(int var_61_int)
{
	var_61_int = 3345;
}


