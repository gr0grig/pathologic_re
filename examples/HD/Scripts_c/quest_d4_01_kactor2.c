// @GLOBALS: 0:int:,1:object:

task task_0
{
	void OnTimer(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		cvector var_23_cvector; cvector var_24_cvector; float var_25_float;
		if(var_19_bool == 10) {
			int var_28_int;
			func_1312(var_28_int);
			var_36_int = GlobalVars[0];
			if(var_28_int != var_36_int)
				func_222(var_25_float);
		}
		if(var_19_bool == 123) {
			@GetPosition(var_23_cvector);
			var_24_cvector = var_23_cvector - var_2_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_41_bool = true;
			var_43_bool = var_25_float > 10000.0;
			if(var_43_bool != 1) {
				var_44_bool = var_4_int != var_3_int;
				if(var_44_bool != 1)
					var_41_bool = false;
			}
			if(var_41_bool != 0) {
				var_2_cvector = var_23_cvector;
				var_4_int = var_3_int;
			}
			if((var_5_int + 1) > 7) {
				var_5_int = 0;
				@Trace("On Actor Stuck");
				func_222(var_25_float);
			}
		}
		int var_49_int;
		var_19_bool = var_49_int;
		func_200(var_24_cvector, var_25_float, var_49_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_222(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_1625();
	}

}


task task_1
{
	void OnTimer(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		cvector var_23_cvector; cvector var_24_cvector; float var_25_float;
		if(var_19_bool == 123) {
			@GetPosition(var_23_cvector);
			var_24_cvector = var_23_cvector - var_2_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_28_bool = true;
			var_30_bool = var_25_float > 10000.0;
			if(var_30_bool != 1) {
				var_31_bool = var_4_int != var_3_int;
				if(var_31_bool != 1)
					var_28_bool = false;
			}
			if(var_28_bool != 0) {
				var_2_cvector = var_23_cvector;
				var_4_int = var_3_int;
			}
			if((var_5_int + 1) > 7) {
				var_5_int = 0;
				@Trace("On Actor Stuck 1");
				func_464(var_25_float);
			}
		}
		int var_37_int;
		var_19_bool = var_37_int;
		func_442(var_24_cvector, var_25_float, var_37_int);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		@Trace("OnActorStuck");
		cvector var_24_cvector;
		func_464(var_24_cvector);
		cvector var_22_cvector;
		@GetPosition(var_22_cvector);
		bool var_23_bool;
		@GetRandomPFPointInCircle(var_24_cvector, var_22_cvector, 0.3, var_23_bool);
		if(var_23_bool != 0) {
			@Trace("Random point found");
			@SetPosition(var_24_cvector);
		} else {
			@Trace("Random point not found");
		}
	
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, object var_12_object, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, object var_12_object, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_464(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_1625();
	}

}


task task_2
{
	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_570(var_18_string, var_19_bool);
		object var_20_object;
		var_19_bool = var_20_object;
		func_1625();
	}

}


task task_3
{
}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, int var_19_int, int var_20_int)
	{
		if(1 != 0) {
			func_1523();
			if(var_20_int == 10685) {
				object var_25_object = var_1_object;
				func_1633(var_0_bool);
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_bool;
				func_1627();
			}
			if(var_20_int == 10687) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_bool;
				func_1653();
				object var_67_object = var_1_object;
				func_1670(var_0_bool);
			}
			if(var_20_int == 10688) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_bool;
				func_1653();
				object var_74_object = var_1_object;
				func_1675(var_0_bool);
			}
			if(var_20_int == 10698) {
				object var_79_object = var_1_object;
				func_1659(var_0_bool);
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_bool;
				func_1627();
			}
			if(var_19_int == 10680) {
				bool var_89_bool;
				func_1680(var_1_object);
				if(var_89_bool != 0) {
					func_842(var_20_int, "Neutral");
					var_0_bool->SetMessage(509701); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509702, 10682, 10681); //@t
					var_0_bool->AddReply(509711, 10682, 10691); //@t
					return 0;
				}
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509713, 10695, 10694); //@t
				var_0_bool->AddReply(509720, 10702, 10701); //@t
				var_0_bool->AddReply(509723, 10695, 10705); //@t
				var_0_bool->AddReply(509724, -1, 10707); //@t
				return 0;
			}
			if(var_19_int == 10702) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509722, 10697, 10703); //@t
				return 0;
			}
			if(var_19_int == 10695) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509715, 10697, 10696); //@t
				var_0_bool->AddReply(509719, -1, 10700); //@t
				return 0;
			}
			if(var_19_int == 10697) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509717, -1, 10698); //@t
				var_0_bool->AddReply(509718, -1, 10699); //@t
				return 0;
			}
			if(var_19_int == 10682) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509704, 10684, 10683); //@t
				var_0_bool->AddReply(509710, 10684, 10689); //@t
				return 0;
			}
			if(var_19_int == 10684) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509706, 10686, 10685); //@t
				return 0;
			}
			if(var_19_int == 10686) {
				func_842(var_20_int, "Neutral");
				var_0_bool->SetMessage(509707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509708, -1, 10687); //@t
				var_0_bool->AddReply(509709, -1, 10688); //@t
				return 0;
			}
			var_3_int = true;
			bool var_189_bool;
			func_1717(var_189_bool);
			if(var_189_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x361";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		var_19_int = GlobalVars[0];
		int var_20_int;
		func_1312(var_20_int);
		var_20_int = var_19_int;
		GlobalVars[0] = var_19_int;
	
		for(;;) {
			@Sleep(3);
			func_1199();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, object var_19_object)
	{
		func_1280();
		int var_22_int; object var_23_object;
		var_19_object = var_23_object;
		int var_21_int;
		func_1121(var_21_int, var_22_int, var_23_object);
		var_22_int = var_21_int;
		if(var_21_int == 0) {
			bool var_178_bool;
			func_1589(var_178_bool, "quest_d4_01", "key2_done");
			object var_184_object;
			var_19_object = var_184_object;
			TaskCall(0);
			func_0(var_187_cvector, var_188_int, var_189_int, var_190_int, var_184_object);
			TaskReturn();
			object var_295_object;
			var_19_object = var_295_object;
			TaskCall(1);
			func_249(var_298_cvector, var_299_int, var_300_int, var_301_int, var_295_object);
			TaskReturn();
			object var_359_object;
			var_19_object = var_359_object;
			TaskCall(7);
			func_1293(var_359_object);
			TaskReturn();
			TaskCall(2);
			func_491();
			TaskReturn();
		} else if(var_21_int == 1) {
			bool var_454_bool;
			func_1589(var_454_bool, "quest_d4_01", "key2_done");
			TaskCall(2);
			func_491();
			TaskReturn();
		}
	
	}

}


task task_7
{
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, object var_19_object)
{
}


void func_1280(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_0(cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_184_object)
{
	@GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	@SetTimer(123, 0.5);
	var_3_int = 0;
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_195_bool; object var_196_object;
		func_98(var_190_int, var_196_object, var_195_bool, var_196_object, (float)250, (float)3000, true, true);
		var_3_int += 1;
		int var_279_int;
		func_1312(var_279_int);
		var_287_int = GlobalVars[0];
		if(var_279_int != var_287_int) {
		} else {
				@Sleep(1);
				int var_292_int;
				func_1312(var_292_int);
				var_293_int = GlobalVars[0];
				if(!(var_292_int != var_293_int)) goto Label_41;
		}
		for(;;) {
			@KillTimer(10);
			@KillTimer(123);
			return 0;

		}

	Label_41:
	}
}


void func_1540(int var_105_int, string var_106_string)
{
	int var_108_int;
	@GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
}


// @pe
void func_1285(object var_363_object)
{
	object var_365_object;
	var_363_object = var_365_object;
	TaskCall(4);
	int var_364_int;
	func_675(var_366_object, var_364_int, var_365_object);
	TaskReturn();
}


void func_1545(int var_46_int, int var_47_int)
{
	object var_49_object;
	@CreateIntVector(var_49_object);
	var_49_object->add(var_46_int);
	var_49_object->add(var_47_int);
	@SendWorldWndMessage(3, var_49_object);
}
EMIT "Stack[-1] = 0";


void func_1293(object var_359_object)
{
	bool var_361_bool;
	
	for(;;) {
		@IsOverrideActive(var_361_bool);
		if(!var_361_bool) //@nz
			break;
	}
	object var_363_object;
	var_359_object = var_363_object;
	func_1285(var_363_object);
	@Hold();
}


void func_1557(object var_35_object, object var_36_object, int var_37_int)
{
	int var_41_int;
	var_36_object->GetItemID(var_41_int);
	int var_42_int;
	@GetInvItemProperty(var_42_int, var_41_int, "Category");
	bool var_43_bool;
	var_35_object->AddItem(var_43_bool, var_36_object, var_42_int, var_37_int);
	if(!var_43_bool) { //@nz
		var_35_object->DropItems(var_36_object, var_37_int);
	} else {
		int var_46_int; int var_47_int;
		var_41_int = var_46_int;
		var_37_int = var_47_int;
		func_1545(var_46_int, var_47_int);
	}
	
}


void func_1307(cvector var_25_cvector)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	var_27_cvector = var_25_cvector;
}


void func_1312(int var_20_int)
{
	object var_23_object;
	@GetScene(var_23_object);
	cvector var_25_cvector;
	func_1307(var_25_cvector);
	int var_24_int;
	var_23_object->GetRegionByPt(var_24_int, var_25_cvector);
	var_24_int = var_20_int;
}
EMIT "Stack[-2] = 0";


void func_1576(object var_30_object, string var_31_string, int var_32_int)
{
	object var_34_object;
	@CreateInvItem(var_34_object);
	var_34_object->SetItemName(var_31_string);
	object var_35_object; object var_36_object; int var_37_int;
	var_30_object = var_35_object;
	var_34_object = var_36_object;
	var_32_int = var_37_int;
	func_1557(var_35_object, var_36_object, var_37_int);
}
EMIT "Stack[-1] = 0";


void func_1323(bool var_241_bool, object var_242_object, string var_243_string)
{
	var_248_bool = IsFuncExist(var_242_object, "HasProperty", 2);
	if(!var_248_bool) { //@nz
		var_241_bool = false;
		return 2;
	}
	bool var_245_bool;
	var_242_object->HasProperty(var_243_string, var_245_bool);
	var_245_bool = var_241_bool;
}


void func_558(float var_384_float)
{
	float var_386_float;
	@GetCameraFarDistance(var_386_float);
	var_386_float = var_384_float;
}


void func_1589(bool var_178_bool, string var_179_string, string var_180_string)
{
	object var_182_object;
	@FindActor(var_182_object, var_179_string);
	if(var_182_object == null)
		var_178_bool = false;
	@Trigger(var_182_object, var_180_string);
	var_178_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1335(bool var_234_bool, object var_235_object)
{
	bool var_237_bool;
	var_235_object->IsDead(var_237_bool);
	var_237_bool = var_234_bool;
}


void func_570(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1340(bool var_223_bool, object var_224_object)
{
	if(var_224_object == null) {
		var_223_bool = false;
		return 4;
	}
	bool var_230_bool = false;
	var_233_bool = IsFuncExist(var_224_object, "IsDead", 1);
	if(var_233_bool != 0) {
		bool var_234_bool; object var_235_object;
		var_224_object = var_235_object;
		func_1335(var_234_bool, var_235_object);
		if(var_234_bool != 0)
			var_230_bool = true;
	}
	if(var_230_bool != 0) {
		var_223_bool = false;
		return 4;
	}
	object var_227_object;
	@GetScene(var_227_object);
	if(var_227_object == null) {
		var_223_bool = false;
		return 4;
	}
	object var_228_object;
	var_224_object->GetScene(var_228_object);
	if(var_227_object != var_228_object) {
		var_223_bool = false;
		return 4;
	}
	var_223_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1601(string var_53_string, int var_54_int)
{
	string var_56_string = "idle";
	if(var_54_int != 0)
		var_56_string += var_54_int;
	var_56_string = var_53_string;
}


void func_1608(int var_47_int)
{
	int var_50_int; bool var_51_bool;
	var_50_int = 0;
	
	for(;;) {
		string var_53_string; int var_54_int;
		var_50_int = var_54_int;
		func_1601(var_53_string, var_54_int);
		@HasAnimation(var_51_bool, "all", var_53_string);
		if(!var_51_bool) //@nz
			break;
		var_50_int += 1;
	}
	var_50_int = var_47_int;
}


void func_586(bool var_394_bool)
{
	var_394_bool = false;
}


// @pe
void func_842(cvector var_2_cvector, string var_111_string)
{
	bool var_112_bool;
	func_1717(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_cvector)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_1508(var_115_string, var_116_bool);
	var_2_cvector = var_111_string;
	
}


void func_588(object var_388_object, cvector var_389_cvector)
{
	object var_391_object;
	@FindShiftedPathTo(var_391_object, var_389_cvector);
	var_391_object = var_388_object;
}
EMIT "Stack[-1] = 0";


void func_594(void)
{
	int var_405_int; int var_406_int; bool var_407_bool; float var_408_float; bool var_409_bool;
	@WaitForAnimEnd();
	bool var_410_bool;
	func_1400(var_410_bool);
	if(!var_410_bool) //@nz
		return 14;
	int var_414_int;
	func_1608(var_414_int);
	int var_403_int;
	var_414_int = var_403_int;
	int var_404_int = 0;
	
	for(;;) {
		bool var_427_bool = false;
		if(var_404_int < 5) {
			bool var_430_bool;
			func_1400(var_430_bool);
			if(var_430_bool != 0)
				var_427_bool = true;
		}
		if(var_427_bool != 0) {
			@irand(var_405_int, 3);
			if(var_405_int == 0) {
				if(var_403_int == 0) goto Label_641;
				@irand(var_406_int, var_403_int);
				string var_436_string; int var_437_int;
				var_406_int = var_437_int;
				func_1601(var_436_string, var_437_int);
				@PlayAnimation("all", var_436_string);
				@WaitForAnimEnd(var_407_bool);
				if(!var_407_bool) { //@nz
				} else {
			} else {
			if(var_405_int == 1) {
				@rand(var_408_float, 4);
				@Sleep((var_408_float + 1), var_409_bool);
				if(!var_409_bool) { //@nz
					goto Label_670;
				}
			} else if(var_404_int != 0) {
				goto Label_670;
			}
			}
					bool var_439_bool;
					func_673(var_439_bool);
					var_440_bool = !var_439_bool; //@nz
					if(var_440_bool == 0) goto Label_665;
			}
		}
	Label_670:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_665:
		@ResetAAS();
		var_404_int += 1;
	}
	
}


void func_340(bool var_0_bool, object var_1_object, bool var_304_bool, object var_305_object, float var_306_float, float var_307_float, bool var_308_bool, bool var_309_bool)
{
	bool var_318_bool; object var_320_object; cvector var_321_cvector; cvector var_322_cvector; float var_324_float; object var_325_object;
	var_0_bool = false;
	var_1_object = var_305_object;
	bool var_319_bool;
	var_309_bool = var_319_bool;
	
	for(;;) {
		bool var_326_bool; object var_327_object;
		var_305_object = var_327_object;
		func_480(var_326_bool, var_327_object);
		if(!var_326_bool) { //@nz
			var_304_bool = false;
			return 16;
		}
		var_305_object->GetPosition(var_321_cvector);
		@GetPosition(var_322_cvector);
		var_324_float = (var_321_cvector - var_322_cvector) | (var_321_cvector - var_322_cvector);
		bool var_331_bool = false;
		if(var_307_float > 0) {
			if(var_324_float > (var_307_float * var_307_float))
				var_331_bool = true;
		}
		if(var_331_bool != 0) {
			@Stop();
			var_304_bool = false;
			return 16;
		}
		if(var_324_float > (var_306_float * var_306_float)) {
			var_305_object->GetPFPosition(var_321_cvector);
			@FindPathTo(var_325_object, var_321_cvector);
			if(var_325_object != null) {
				var_325_object = var_320_object;
				var_325_object = null;
			}
			if(var_320_object != null) {
				if(var_319_bool == 0) goto Label_393;
				var_319_bool = false;
				@RotatePath(var_320_object, var_318_bool);
				if(!var_318_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_344_string;
						func_487(var_344_string);
						string var_345_string;
						func_489(var_345_string);
						@FollowPath(var_320_object, var_308_bool, var_318_bool, var_344_string, var_345_string);
						if(!var_318_bool) { //@nz
							if(var_0_bool == 0) goto Label_412;
							var_320_object = null;
						}
					EMIT "GOTO 0x19d";

					Label_412:
						} else {
					var_320_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_318_bool);
					if(!var_318_bool) { //@nz
						if(var_0_bool != 0) {
							var_320_object = null;
							goto Label_440;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_440;
		}
			var_325_object = null;
			goto Label_438;

		Label_438:
			var_320_object = null;

		}
	Label_440:
		for(;;) {
			var_304_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_1627(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1376(bool var_219_bool, object var_220_object)
{
	object var_224_object;
	var_220_object = var_224_object;
	bool var_223_bool;
	func_1340(var_223_bool, var_224_object);
	if(!var_223_bool) { //@nz
		var_219_bool = false;
		return 2;
	}
	bool var_241_bool; object var_242_object;
	func_1323(var_241_bool, var_242_object, "noaccess");
	if(!var_241_bool) { //@nz
		var_219_bool = true;
		return 2;
	}
	int var_222_int;
	var_242_object->GetProperty("noaccess", var_222_int);
	var_219_bool = var_222_int == 0;
}


// @pe
void func_1633(object var_25_object)
{
	@SetVariable("d4q01KeyWasted", 1);
	@Trace("soborkey is given");
	object var_30_object;
	var_25_object = var_30_object;
	func_1576(var_30_object, "d4q01_sobor_key", 1);
	bool var_51_bool;
	func_1589(var_51_bool, "quest_d4_01", "init_sobor");
}


void func_98(bool var_0_bool, object var_1_object, bool var_195_bool, object var_196_object, float var_197_float, float var_198_float, bool var_199_bool, bool var_200_bool)
{
	bool var_209_bool; object var_211_object; cvector var_212_cvector; cvector var_213_cvector; float var_215_float; object var_216_object;
	var_0_bool = false;
	var_1_object = var_196_object;
	bool var_210_bool;
	var_200_bool = var_210_bool;
	
	for(;;) {
		bool var_217_bool; object var_218_object;
		var_196_object = var_218_object;
		func_238(var_217_bool, var_218_object);
		if(!var_217_bool) { //@nz
			var_195_bool = false;
			return 16;
		}
		var_196_object->GetPosition(var_212_cvector);
		@GetPosition(var_213_cvector);
		var_215_float = (var_212_cvector - var_213_cvector) | (var_212_cvector - var_213_cvector);
		bool var_254_bool = false;
		if(var_198_float > 0) {
			if(var_215_float > (var_198_float * var_198_float))
				var_254_bool = true;
		}
		if(var_254_bool != 0) {
			@Stop();
			var_195_bool = false;
			return 16;
		}
		if(var_215_float > (var_197_float * var_197_float)) {
			var_196_object->GetPFPosition(var_212_cvector);
			@FindPathTo(var_216_object, var_212_cvector);
			if(var_216_object != null) {
				var_216_object = var_211_object;
				var_216_object = null;
			}
			if(var_211_object != null) {
				if(var_210_bool == 0) goto Label_151;
				var_210_bool = false;
				@RotatePath(var_211_object, var_209_bool);
				if(!var_209_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_267_string;
						func_245(var_267_string);
						string var_268_string;
						func_247(var_268_string);
						@FollowPath(var_211_object, var_199_bool, var_209_bool, var_267_string, var_268_string);
						if(!var_209_bool) { //@nz
							if(var_0_bool == 0) goto Label_170;
							var_211_object = null;
						}
					EMIT "GOTO 0xab";

					Label_170:
						} else {
					var_211_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_209_bool);
					if(!var_209_bool) { //@nz
						if(var_0_bool != 0) {
							var_211_object = null;
							goto Label_198;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_198;
		}
			var_216_object = null;
			goto Label_196;

		Label_196:
			var_211_object = null;

		}
	Label_198:
		for(;;) {
			var_195_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_1121(int var_22_int, object var_23_object, object var_26_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(4);
	int var_24_int;
	func_675(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	var_26_object = var_22_int;
}


// @pe
void func_1653(void)
{
	@SetVariable("ood4WastedMale1", 1);
}


void func_1400(bool var_43_bool)
{
	bool var_45_bool;
	@IsLoaded(var_45_bool);
	var_45_bool = var_43_bool;
}


// @pe
void func_1659(object var_79_object)
{
	@Trace("tvirin is given");
	object var_82_object;
	var_79_object = var_82_object;
	func_1576(var_82_object, "tvirin", 1);
}


void func_1405(bool var_35_bool, object var_36_object, float var_37_float)
{
	cvector var_48_cvector; bool var_55_bool;
	var_36_object->GetPosition(var_48_cvector);
	float var_47_float;
	var_36_object->GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (var_56_float + var_47_float);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	@GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_47_float);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_60_float = sqrt(var_50_cvector | var_50_cvector);
	var_50_cvector /= var_60_float;
	cvector var_51_cvector = -var_50_cvector;
	cvector var_62_cvector;
	func_1530(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_52_cvector = ((var_50_cvector * var_37_float) + (var_62_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_49_cvector + var_52_cvector), var_51_cvector, true);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_1717(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_1468;
		@LookAsyncCamera("head");
	}
Label_1468:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


// @pe
void func_1670(object var_68_object)
{
	var_68_object->SetReturnValue(0);
}


// @pe
void func_1675(object var_75_object)
{
	var_75_object->SetReturnValue(1);
}


// @pe
void func_1680(bool var_103_bool)
{
	int var_105_int;
	func_1540(var_105_int, "ood4WastedMale1");
	if(var_105_int == 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


void func_1692(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x6ab";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


void func_673(bool var_439_bool)
{
	var_439_bool = true;
}


void func_675(bool var_0_bool, int var_24_int, object var_25_object)
{
	var_0_bool = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_1405(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_1711(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_1709(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_1713(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_1715(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1692(var_87_int);
	var_31_object->SetPlayerName(var_87_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_96_object; object var_97_object;
	var_25_object = var_96_object;
	var_31_object = var_97_object;
	TaskCall(5);
	func_749(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_167_bool = !var_34_bool; //@nz
		if(var_167_bool == 0) goto Label_738;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_738:
	object var_168_object;
	var_25_object = var_168_object;
	func_1474();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_1709(int var_84_int)
{
	var_84_int = 515556;
}


void func_1711(int var_83_int)
{
	var_83_int = 503341;
}


void func_1199(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1400(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_47_int;
	func_1608(var_47_int);
	int var_36_int;
	var_47_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_60_bool = false;
		if(var_37_int < 5) {
			bool var_63_bool;
			func_1400(var_63_bool);
			if(var_63_bool != 0)
				var_60_bool = true;
		}
		if(var_60_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_1246;
				@irand(var_39_int, var_36_int);
				string var_69_string; int var_70_int;
				var_39_int = var_70_int;
				func_1601(var_69_string, var_70_int);
				@PlayAnimation("all", var_69_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_1275;
				}
			} else if(var_37_int != 0) {
				goto Label_1275;
			}
			}
					bool var_72_bool;
					func_1278(var_72_bool);
					var_73_bool = !var_72_bool; //@nz
					if(var_73_bool == 0) goto Label_1270;
			}
		}
	Label_1275:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1270:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_1713(string var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png";
}


void func_1715(string var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png";
}


void func_1717(bool var_78_bool)
{
	var_78_bool = false;
}


// @pe
void func_442(bool var_0_bool, object var_1_object, int var_37_int)
{
	if(var_37_int != 0)
		return 0;
	bool var_40_bool;
	func_480(var_40_bool, var_1_object);
	if(!var_40_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1474(void)
{
	bool var_170_bool;
	@CameraSwitchToNormal(true);
	bool var_172_bool;
	func_1717(var_172_bool);
	if(var_172_bool != 0) {
	} else {
		@HasAnimationTrack(var_170_bool, "head");
		if(var_170_bool == 0) goto Label_1491;
		@UnlookAsync("head");
	}
Label_1491:
	
}


// @pe
void func_200(bool var_0_bool, object var_1_object, int var_49_int)
{
	if(var_49_int != 0)
		return 0;
	bool var_52_bool;
	func_238(var_52_bool, var_1_object);
	if(!var_52_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_464(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1492(string var_137_string)
{
	bool var_141_bool; float var_142_float; float var_143_float;
	@lshHasAnimation(var_141_bool, var_137_string);
	if(var_141_bool != 0) {
		@lshGetAnimTimes(var_137_string, var_142_float, var_143_float);
		@lshPlayAnimation(var_142_float, var_143_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_137_string);
	}
	
}


void func_222(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_480(bool var_326_bool, object var_327_object)
{
	object var_329_object;
	var_327_object = var_329_object;
	bool var_328_bool;
	func_1376(var_328_bool, var_329_object);
	var_328_bool = var_326_bool;
}


void func_1508(string var_115_string, bool var_116_bool)
{
	bool var_122_bool; float var_123_float; float var_124_float;
	@lshHasAnimation(var_122_bool, var_115_string);
	if(var_122_bool != 0) {
		@lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		@lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_115_string);
	}
	
}


void func_487(string var_344_string)
{
	var_344_string = "walk";
}


void func_489(string var_345_string)
{
	var_345_string = "run";
}


// @pe
void func_491(void)
{
	
	for(;;) {
		func_499(var_367_bool, var_368_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_749(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, object var_96_object, object var_97_object)
{
	var_0_bool = var_97_object;
	var_3_int = false;
	if(1 != 0) {
		bool var_103_bool;
		func_1680(var_96_object);
		if(var_103_bool != 0) {
			func_842(var_97_object, "Neutral");
			var_0_bool->SetMessage(509701); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(509702, 10682, 10681); //@t
			var_0_bool->AddReply(509711, 10682, 10691); //@t
		} else {
					func_842(var_97_object, "Neutral");
					var_0_bool->SetMessage(509712); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509713, 10695, 10694); //@t
					var_0_bool->AddReply(509720, 10702, 10701); //@t
					var_0_bool->AddReply(509723, 10695, 10705); //@t
					var_0_bool->AddReply(509724, -1, 10707); //@t
		}
	}
	for(;;) {
		bool var_135_bool;
		func_1717(var_135_bool);
		if(var_135_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_int != 0) {
				} else {
					func_1492(var_2_cvector);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_int != 0) {
					goto Label_841;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_841:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2f1";


// @pe
void func_238(bool var_217_bool, object var_218_object)
{
	object var_220_object;
	var_218_object = var_220_object;
	bool var_219_bool;
	func_1376(var_219_bool, var_220_object);
	var_219_bool = var_217_bool;
}


void func_499(bool var_0_bool, object var_1_object)
{
	float var_375_float; cvector var_376_cvector; cvector var_377_cvector; bool var_378_bool; object var_379_object; bool var_380_bool;
	@rand(var_375_float, 0.5);
	@Sleep(var_375_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_511:
				@GetPosition(var_377_cvector);
				float var_384_float;
				func_558(var_384_float);
				@GetRandomPFPointInCircle(var_376_cvector, var_377_cvector, var_384_float, var_378_bool);
				if(var_378_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_511;
			}
				var_1_object = false;
		}
		}
		goto Label_527;

	Label_527:
		object var_388_object; cvector var_389_cvector;
		var_376_cvector = var_389_cvector;
		func_588(var_388_object, var_389_cvector);
		var_388_object = var_379_object;
		if(var_379_object != null) {
			@RotatePath(var_379_object, var_380_bool);
			if(var_380_bool != 0) {
				bool var_394_bool;
				func_586(var_394_bool);
				@FollowPath(var_379_object, var_394_bool, var_380_bool);
				var_379_object = null;
				if(var_380_bool != 0) {
					TaskCall(3);
					func_594();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_379_object = null;
	}
	
}


void func_1523(void)
{
	bool var_22_bool;
	func_1717(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_245(string var_267_string)
{
	var_267_string = "walk";
}


void func_247(string var_268_string)
{
	var_268_string = "run";
}


// @pe
void func_249(cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_295_object)
{
	@GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	@SetTimer(123, 0.5);
	var_3_int = 0;
	
	for(;;) {
		bool var_304_bool; object var_305_object;
		func_340(var_301_int, var_305_object, var_304_bool, var_305_object, (float)250, (float)3000, true, true);
		var_355_bool = !var_304_bool; //@nz
		if(var_355_bool == 0) goto Label_275;
		var_3_int += 1;
		@Sleep(1);
	}
	
Label_275:
	@KillTimer(123);
}


void func_1530(cvector var_62_cvector, cvector var_63_cvector)
{
	float var_66_float = sqrt(var_63_cvector | var_63_cvector);
	if(var_66_float < 0.000001)
		var_62_cvector = [0.0, 0.0, 0.0];
	var_62_cvector = var_63_cvector / var_66_float;
}


void func_1278(bool var_72_bool)
{
	var_72_bool = true;
}


