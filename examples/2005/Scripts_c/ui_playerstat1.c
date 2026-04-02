maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float)
	{
		var_10_int = -1;
		bool var_12_bool;
		func_593(var_12_bool);
		if(var_12_bool != 0) {
			@CreateWindow("visir.xml", false, var_0_object);
			int var_21_int;
			func_579(var_21_int);
			@SendMessage(var_21_int, "charge");
			func_471();
		}
		@CreateIntVector(var_5_object);
		@CreateStringVector(var_2_object);
		@CreateIntVector(var_3_object);
		@CreateFloatVector(var_4_object);
		@CreateIntVector(var_6_object);
		@CreateIntVector(var_7_object);
		@CreateFloatVector(var_8_object);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void event_201(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, int var_12_int, object var_13_object)
	{
		int var_19_int; int var_20_int; int var_21_int; int var_22_int; int var_23_int;
		if(var_12_int == 200) {
			if(var_13_object != 0) {
				var_13_object->size(var_19_int);
				if(var_19_int == 1) {
					var_13_object->get(var_10_int, 0);
					var_11_float = 1.0;
				}
			}
		} else if(var_12_int == 1) {
				if(!var_0_object) //@nz
					@CreateWindow("visir.xml", false, var_0_object);
				int var_35_int;
				func_579(var_35_int);
				@SendMessage(var_35_int, "charge");
				func_471();
		}

	
		if(var_12_int == 2) {
			if(var_0_object != 0)
				var_0_object->DestroyWindow(); //@t
		} else if(var_12_int == 3) {
			var_13_object->get(var_20_int, 0);
			var_13_object->get(var_21_int, 1);
			int var_73_int; int var_74_int;
			func_189(var_73_int, var_74_int, var_22_int, var_23_int, var_73_int, var_74_int);
		} else if(var_12_int == 4) {
			var_13_object->get(var_22_int, 0);
			var_13_object->get(var_23_int, 1);
		} else if(var_12_int == 100) {
			func_41(var_23_int, 100);
		} else if(var_12_int == 101) {
			func_41(var_23_int, 101);
		} else if(var_12_int == 6) {
			func_66(var_22_int, var_23_int, 2);
			@PlaySound("mail");
			@Trace("HasMail");
		} else if(var_12_int == 7) {
			func_66(var_22_int, var_23_int, 3);
			@PlaySound("diary");
			@Trace("HasDiary");
		} else if(var_12_int == 8) {
			func_66(var_22_int, var_23_int, 4);
			@Trace("ReputationUP");
		} else if(var_12_int == 9) {
			func_66(var_22_int, var_23_int, 5);
			@Trace("ReputationDown");
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
	{
		float var_13_float;
		func_96(var_11_float, var_13_float, var_13_float);
		float var_25_float;
		func_212(var_10_int, var_11_float, var_25_float, var_25_float);
		float var_50_float;
		func_259(var_50_float, var_50_float);
		func_471();
		float var_87_float;
		func_549(var_11_float, var_87_float, var_87_float);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float)
	{
		bool var_12_bool;
		func_620(var_12_bool);
		if(var_12_bool != 0)
			@Blit("cross", 399, 299);
		func_117(var_10_int, var_11_float);
		func_287(var_9_object, var_10_int, var_11_float);
		func_526(var_10_int, var_11_float);
	}

}


void func_259(object var_1_object, object var_5_object)
{
	int var_53_int;
	var_5_object->size(var_53_int); //@t
	if(!var_53_int) //@nz
		return 4;
	if(var_1_object != 0)
		return 4;
	int var_54_int;
	var_5_object->get(var_54_int, 0); //@t
	if(var_54_int == 100)
		@CreateWindow("daychange.xml", false, var_1_object);
	else
		@CreateWindow("daychangereal.xml", false, var_1_object);
	func_62(var_54_int);
	
}


void func_526(int var_10_int, float var_11_float)
{
	if(var_10_int == -1) {
	}
	string var_123_string;
	@GetStringByID(var_123_string, var_10_int);
	float var_124_float = sin(((3.14 * var_11_float) / 1.0) / 2.0);
	@Print("help", 40, 80, var_123_string, 1.0, 1.0, 1.0, var_124_float);
}


void func_287(object var_6_object, object var_7_object, object var_8_object)
{
	int var_82_int; int var_84_int; int var_85_int; float var_86_float; float var_87_float;
	var_6_object->size(var_82_int); //@t
	if(!var_82_int) { //@nz
	}
	int var_83_int = 0;
	
	while(var_83_int < var_82_int) {
		var_6_object->get(var_84_int, var_83_int); //@t
		var_7_object->get(var_85_int, var_83_int); //@t
		var_8_object->get(var_86_float, var_83_int); //@t
		var_87_float = sqrt(var_86_float / 4.0);
		int var_92_int; int var_93_int; int var_94_int; float var_95_float;
		var_84_int = var_92_int;
		var_85_int = var_93_int;
		var_83_int = var_94_int;
		var_87_float = var_95_float;
		func_495(var_92_int, var_93_int, var_94_int, var_95_float);
		var_83_int += 1;
	}
	
}


// @pe
void func_549(int var_10_int, float var_11_float, float var_87_float)
{
	if(var_10_int == -1)
		return 0;
	if((var_11_float - var_87_float) <= 0)
		var_10_int = -1;
}


void func_41(object var_5_object, int var_84_int)
{
	int var_90_int;
	var_5_object->add(var_84_int); //@t
	int var_88_int;
	var_5_object->size(var_88_int); //@t
	int var_89_int = 0;
	
	while(var_89_int < (var_88_int - 1)) {
		var_5_object->get(var_90_int, var_89_int); //@t
		if(var_90_int == var_84_int)
			var_5_object->remove(var_89_int); //@t
		var_89_int += 1;
	}
	
}


void func_189(object var_2_object, object var_6_object, object var_7_object, object var_8_object, int var_73_int, int var_74_int)
{
	var_6_object->add(var_73_int); //@t
	var_7_object->add(var_74_int); //@t
	var_8_object->add(4.0); //@t
	string var_76_string;
	@GetInvItemSprite(var_76_string, var_73_int);
	@LoadImage(var_76_string);
	var_2_object->add(var_76_string); //@t
}


void func_62(object var_5_object)
{
	var_5_object->remove(0); //@t
}


void func_66(object var_3_object, object var_4_object, int var_101_int)
{
	int var_105_int; int var_107_int;
	var_3_object->size(var_105_int); //@t
	int var_106_int = 0;
	
	while(var_106_int < var_105_int) {
		var_3_object->get(var_107_int, var_106_int); //@t
		if(var_101_int == var_107_int)
			var_4_object->set(var_106_int, 4.0); //@t
		var_106_int += 1;
	}
	
	var_3_object->add(var_101_int); //@t
	var_4_object->add(4.0); //@t
}


void func_579(int var_21_int)
{
	object var_24_object;
	@FindActor(var_24_object, "player");
	if(!var_24_object) //@nz
		var_21_int = 0;
	int var_25_int;
	var_24_object->GetProperty("vcharge", var_25_int);
	var_25_int = var_21_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_204(object var_6_object, object var_7_object, object var_8_object, int var_43_int)
{
	var_6_object->remove(var_43_int); //@t
	var_8_object->remove(var_43_int); //@t
	var_7_object->remove(var_43_int); //@t
}


void func_593(bool var_12_bool)
{
	object var_15_object;
	@FindActor(var_15_object, "player");
	if(!var_15_object) //@nz
		var_12_bool = false;
	bool var_16_bool;
	var_15_object->IsVisirOn(var_16_bool);
	var_16_bool = var_12_bool;
}
EMIT "Stack[-2] = 0";


void func_212(object var_2_object, object var_6_object, object var_8_object, float var_25_float)
{
	int var_32_int; float var_34_float; int var_35_int; int var_36_int; string var_37_string;
	var_6_object->size(var_32_int); //@t
	if(!var_32_int) //@nz
		return 12;
	int var_33_int = 0;
	
	for(;;) {
		if(var_33_int < var_32_int) {
			var_8_object->get(var_34_float, var_33_int); //@t
			var_34_float -= var_25_float;
			if(var_34_float > 0) {
				var_8_object->set(var_33_int, var_34_float); //@t
			} else {
			int var_43_int;
			var_33_int = var_43_int;
			func_204(var_35_int, var_36_int, var_37_string, var_43_int);
			var_32_int += -1;
			var_33_int += -1;
		}
		if(var_32_int == 0) {
			var_2_object->size(var_35_int); //@t
			var_36_int = 0;

			while(var_36_int < var_35_int) {
				var_2_object->get(var_37_string, var_36_int); //@t
				@ReleaseImage(var_37_string);
				var_36_int += 1;
			}

			var_2_object->clear(); //@t
		}
		return 12;
		}
		var_33_int += 1;
	}
	
}


void func_471(void)
{
	int var_34_int;
	func_606(var_34_int);
	int var_32_int;
	var_34_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		if(var_33_int < 4) {
			if(var_33_int < var_32_int)
				var_45_int = 1;
			else
				var_51_int = 0; //@pi
		return 4;
		}
		@SendMessage(var_45_int, ("vlevel" + (var_33_int + 1)));
		var_33_int += 1;
	}
	
}


void func_89(object var_3_object, object var_4_object)
{
	var_3_object->remove(0); //@t
	var_4_object->remove(0); //@t
}


void func_606(int var_34_int)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) //@nz
		var_34_int = 0;
	int var_38_int;
	var_37_object->GetProperty("visir", var_38_int);
	var_38_int = var_34_int;
}
EMIT "Stack[-2] = 0";


void func_96(object var_3_object, object var_4_object, float var_13_float)
{
	int var_16_int;
	var_3_object->size(var_16_int); //@t
	if(!var_16_int) { //@nz
	}
	float var_17_float;
	var_4_object->get(var_17_float, 0); //@t
	var_17_float -= var_13_float;
	if(var_17_float > 0)
		var_4_object->set(0, var_17_float); //@t
	else
		func_89(var_16_int, var_17_float);
	
}


void func_620(bool var_12_bool)
{
	object var_15_object;
	@FindActor(var_15_object, "player");
	if(!var_15_object) //@nz
		var_12_bool = false;
	bool var_16_bool;
	var_15_object->IsWeaponHolstered(var_16_bool);
	var_12_bool = !var_16_bool;
}
EMIT "Stack[-2] = 0";


void func_495(int var_92_int, int var_93_int, int var_94_int, float var_95_float)
{
	string var_99_string;
	@GetInvItemSprite(var_99_string, var_92_int);
	int var_100_int = 40 + (var_94_int * 60);
	int var_101_int = 40;
	@Blit("slot", var_100_int, var_101_int, var_95_float);
	@Blit(var_99_string, (var_100_int + 1), (var_101_int + 1), var_95_float);
	if(var_93_int > 1)
		@Print("default", (var_100_int + 2), (var_101_int + 35), var_93_int, 1.0, 1.0, 1.0, var_95_float);
}


void func_117(object var_3_object, object var_4_object)
{
	int var_26_int;
	var_3_object->size(var_26_int); //@t
	if(!var_26_int) //@nz
		return 8;
	int var_27_int;
	var_3_object->get(var_27_int, 0); //@t
	float var_28_float;
	var_4_object->get(var_28_float, 0); //@t
	float var_29_float = (6.283 * var_28_float) / 4.0;
	if(var_27_int == 2) {
		var_43_float = cos(var_29_float);
		@Blit("mail", 20, 500, (0.5 - (0.5 * var_43_float)));
	} else if(var_27_int == 3) {
			var_53_float = cos(var_29_float);
			@Blit("diary", 20, 470, (0.5 - (0.5 * var_53_float)));
	}

	for(;;) {
		return 8;

	}
	
	if(var_27_int == 4) {
		var_63_float = cos(var_29_float);
		@Blit("rep_up", 20, 500, (0.5 - (0.5 * var_63_float)));
	} else if(var_27_int == 5) {
		var_73_float = cos(var_29_float);
		@Blit("rep_down", 20, 500, (0.5 - (0.5 * var_73_float)));
	}
}


