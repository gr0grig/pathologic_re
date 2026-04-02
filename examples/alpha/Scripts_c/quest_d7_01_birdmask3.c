// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_738();
			if(var_6_int == 14438) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_824();
				object var_15_object = var_1_object;
				func_813(var_0_object);
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_798();
			}
			if(var_6_int == 14485) {
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_804();
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_830();
			}
			if(var_6_int == 14446) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_804();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_830();
			}
			if(var_6_int == 16565) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_804();
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_830();
			}
			if(var_6_int == 16566) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_804();
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_830();
			}
			if(var_5_int == 14435) {
				bool var_97_bool;
				func_859(var_1_object);
				if(var_97_bool != 0) {
					func_190(var_6_int, "Neutral");
					var_0_object->SetMessage(13212); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13213, 14437, 14436); //@t
					return 0;
				}
				bool var_124_bool = false;
				bool var_125_bool;
				func_837(var_1_object);
				if(var_125_bool != 0) {
					bool var_131_bool;
					func_849(var_131_bool, var_1_object);
					if(var_131_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0) {
					func_190(var_6_int, "Neutral");
					var_0_object->SetMessage(13216); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13217, 14441, 14440); //@t
					var_0_object->AddReply(13220, 14444, 14443); //@t
					var_0_object->AddReply(13224, 14441, 14447); //@t
					return 0;
				}
				bool var_180_bool;
				func_837(var_1_object);
				if(var_180_bool != 0) {
					func_190(var_6_int, "Neutral");
					var_0_object->SetMessage(13231); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13232, 14456, 14455); //@t
					var_0_object->AddReply(13248, 16562, 14473); //@t
					var_0_object->AddReply(13249, -1, 14475); //@t
					return 0;
				}
			}
			if(var_5_int == 14456) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13233); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13234, 14458, 14457); //@t
				var_0_object->AddReply(13240, 14469, 14463); //@t
				var_0_object->AddReply(13244, 14464, 14468); //@t
				return 0;
			}
			if(var_5_int == 14464) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13242, -1, 14465); //@t
				var_0_object->AddReply(13243, 16562, 14466); //@t
				return 0;
			}
			if(var_5_int == 14469) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13246, -1, 14470); //@t
				var_0_object->AddReply(13247, 16562, 14471); //@t
				return 0;
			}
			if(var_5_int == 14458) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13236, 16562, 14459); //@t
				var_0_object->AddReply(13239, -1, 14462); //@t
				return 0;
			}
			if(var_5_int == 16562) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(15419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15420, -1, 16565); //@t
				var_0_object->AddReply(15421, -1, 16566); //@t
				return 0;
			}
			if(var_5_int == 14444) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13222, -1, 14445); //@t
				var_0_object->AddReply(13223, -1, 14446); //@t
				return 0;
			}
			if(var_5_int == 14441) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13219, -1, 14442); //@t
				var_0_object->AddReply(13259, -1, 14485); //@t
				return 0;
			}
			if(var_5_int == 14437) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13250, 14478, 14476); //@t
				var_0_object->AddReply(13251, 14482, 14477); //@t
				return 0;
			}
			if(var_5_int == 14482) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13256); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13257, 14484, 14483); //@t
				return 0;
			}
			if(var_5_int == 14484) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13215, -1, 14438); //@t
				return 0;
			}
			if(var_5_int == 14478) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13253, 14480, 14479); //@t
				return 0;
			}
			if(var_5_int == 14480) {
				func_190(var_6_int, "Neutral");
				var_0_object->SetMessage(13254); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13255, -1, 14481); //@t
				return 0;
			}
			var_3_string = true;
			bool var_304_bool;
			func_998(var_304_bool);
			if(var_304_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcf";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		int var_6_int;
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_660(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_994(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_996(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_961(var_60_int);
	var_13_object->SetPlayerName(var_60_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_69_object; object var_70_object;
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_180_bool = !var_16_bool; //@nz
		if(var_180_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_181_object;
	var_7_object = var_181_object;
	func_716();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_961(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x3d0";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


void func_773(object var_18_object, string var_19_string, int var_20_int)
{
	object var_22_object;
	@CreateInvItem(var_22_object);
	var_22_object->SetItemName(var_19_string);
	object var_23_object; object var_24_object; int var_25_int;
	var_18_object = var_23_object;
	var_22_object = var_24_object;
	var_20_int = var_25_int;
	func_760(var_23_object, var_24_object, var_25_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_837(bool var_112_bool)
{
	int var_114_int;
	func_755(var_114_int, "d7q01");
	if(var_114_int == 2)
		var_112_bool = true;
	var_112_bool = false;
}


// @pe
void func_716(void)
{
	@CameraSwitchToNormal();
}


void func_720(string var_88_string)
{
	@Trace("playing " + var_88_string);
	float var_91_float;
	float var_92_float;
	@lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	@lshPlayAnimation(var_91_float, var_92_float);
	@Trace("start: " + var_91_float);
	@Trace("end: " + var_92_float);
}


// @pe
void func_849(bool var_118_bool, object var_119_object)
{
	object var_121_object;
	var_119_object = var_121_object;
	bool var_120_bool;
	func_871(var_120_bool, var_121_object);
	if(var_120_bool != 0) {
		var_118_bool = true;
		return 0;
	}
	var_118_bool = false;
}


void func_786(bool var_71_bool, string var_72_string, string var_73_string)
{
	object var_75_object;
	@FindActor(var_75_object, var_72_string);
	if(var_75_object == null)
		var_71_bool = false;
	@Trigger(var_75_object, var_73_string);
	var_71_bool = true;
}
EMIT "Stack[-1] = 0";


void func_978(void)
{
	@Trace("Adding diary entry");
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 169, 1, 15418);
	bool var_50_bool; object var_51_object;
	var_45_object = var_51_object;
	func_932(var_50_bool, var_51_object, 165);
}
EMIT "Stack[-1] = 0";


void func_660(bool var_17_bool, object var_18_object)
{
	cvector var_28_cvector;
	var_18_object->GetPosition(var_28_cvector);
	float var_27_float;
	var_18_object->GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	SetByIndex(var_28_cvector, 1) = (var_35_float + var_27_float);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	@GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_27_float);
	cvector var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_39_float = sqrt(var_30_cvector | var_30_cvector);
	var_30_cvector /= var_39_float;
	cvector var_31_cvector = -var_30_cvector;
	cvector var_42_cvector;
	func_745(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_32_cvector = ((var_30_cvector * 70) + (var_42_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_29_cvector + var_32_cvector), var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	@Rotate(var_55_float, var_56_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
}


void func_919(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_859(bool var_76_bool)
{
	int var_78_int;
	func_755(var_78_int, "ood7MBirdmask1");
	if(var_78_int == 0) {
		var_76_bool = true;
		return 0;
	}
	var_76_bool = false;
}


// @pe
void func_798(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_994(int var_58_int)
{
	var_58_int = 4029;
}


void func_738(void)
{
	bool var_8_bool;
	func_998(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_804(void)
{
	@SetVariable("d7q01", 3);
	func_978();
}


void func_932(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_919(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SetVariable("player_diary", 1);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_996(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


void func_998(bool var_85_bool)
{
	var_85_bool = false;
}


void func_871(bool var_120_bool, object var_121_object)
{
	int var_132_int; object var_138_object; int var_139_int; bool var_140_bool; bool var_141_bool;
	var_121_object->GetItemCount(var_132_int, 1);
	int var_133_int;
	@GetInvItemByName(var_133_int, "bird_mask");
	int var_134_int;
	@GetInvItemByName(var_134_int, "bird_balahon");
	bool var_135_bool = false;
	bool var_136_bool = false;
	int var_137_int = 0;
	
	for(;;) {
		if(var_137_int < var_132_int) {
			var_121_object->GetItem(var_138_object, var_137_int, 1);
			var_138_object->GetItemID(var_139_int);
			if(var_139_int == var_133_int) {
				var_121_object->IsItemSelected(var_140_bool, var_137_int, 1);
				if(var_140_bool != 0)
					var_135_bool = true;
			} else {
			if(!(var_139_int == var_134_int)) goto Label_908;
			var_121_object->IsItemSelected(var_141_bool, var_137_int, 1);
			if(var_141_bool == 0) goto Label_908;
		}
		var_120_bool = false;
		if(var_135_bool != 0) {
			if(true != 0)
				var_120_bool = true;
		}
		}
	Label_908:
		var_138_object = null;
		var_137_int += 1;
	}
	
}


void func_745(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


// @pe
void func_813(object var_15_object)
{
	@Trace("mreport is given");
	object var_18_object;
	var_15_object = var_18_object;
	func_773(var_18_object, "d7q01_mreport", 1);
}


void func_760(object var_23_object, object var_24_object, int var_25_int)
{
	int var_29_int;
	var_24_object->GetItemID(var_29_int);
	int var_30_int;
	@GetInvItemProperty(var_30_int, var_29_int, "Category");
	bool var_31_bool;
	var_23_object->AddItem(var_31_bool, var_24_object, var_30_int, var_25_int);
	if(!var_31_bool) //@nz
		var_23_object->DropItems(var_24_object, var_25_int);
}


void func_755(int var_78_int, string var_79_string)
{
	int var_81_int;
	@GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
}


// @pe
void func_824(void)
{
	@SetVariable("ood7MBirdmask1", 1);
}


// @pe
void func_190(object var_2_object, string var_84_string)
{
	bool var_85_bool;
	func_998(var_85_bool);
	if(!var_85_bool) //@nz
		return 0;
	if(var_84_string == var_2_object)
		return 0;
	string var_88_string;
	func_720(var_88_string);
	var_2_object = var_88_string;
}


// @pe
void func_830(void)
{
	bool var_71_bool;
	func_786(var_71_bool, "quest_d7_01", "sobor_teleport");
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_76_bool;
		func_859(var_1_object);
		if(var_76_bool != 0) {
			func_190(var_70_object, "Neutral");
			var_0_object->SetMessage(13212); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13213, 14437, 14436); //@t
		} else {
					bool var_111_bool = false;
					bool var_112_bool;
					func_837(var_1_object);
					if(var_112_bool != 0) {
						bool var_118_bool;
						func_849(var_118_bool, var_1_object);
						if(var_118_bool != 0)
							var_111_bool = true;
					}
					if(var_111_bool == 0) goto Label_128;
					func_190(var_70_object, "Neutral");
					var_0_object->SetMessage(13216); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13217, 14441, 14440); //@t
					var_0_object->AddReply(13220, 14444, 14443); //@t
					var_0_object->AddReply(13224, 14441, 14447); //@t
		}
	}
Label_160:
	for(;;) {
		bool var_103_bool;
		func_998(var_103_bool);
		if(var_103_bool != 0) {

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
					goto Label_189;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_189:
			}
			bool var_167_bool;
			func_837(var_1_object);
			if(var_167_bool != 0) {
			func_190(var_70_object, "Neutral");
			var_0_object->SetMessage(13231); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13232, 14456, 14455); //@t
			var_0_object->AddReply(13248, 16562, 14473); //@t
			var_0_object->AddReply(13249, -1, 14475); //@t
			goto Label_160;
		}
		return 0;
	}
}
EMIT "GOTO 0x43";


