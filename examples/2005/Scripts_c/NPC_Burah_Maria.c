// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2271();
			if(var_26_bool == 36906) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_26_bool == 36953) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_26_bool == 36957) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_2412(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2271();
			if(var_26_bool == 19160) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518028, 29772, 19161); //@t
				var_0_object->AddReply(528396, 29772, 29771); //@t
				return 0;
			}
			if(var_26_bool == 29772) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528398, -1, 29773); //@t
				var_0_object->AddReply(528399, -1, 29774); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2412(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b2";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2271();
			if(var_27_cvector == 22521) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2414();
				object var_97_object = var_1_object;
				func_2475(var_0_object);
			}
			if(var_27_cvector == 22528) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_2414();
				object var_127_object = var_1_object;
				func_2475(var_0_object);
			}
			if(var_27_cvector == 22525) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_2449();
			}
			if(var_27_cvector == 22530) {
				object var_137_object = var_1_object;
				func_2461(var_0_object);
				object var_154_object = var_1_object;
				func_2509(var_0_object);
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_2519();
			}
			if(var_27_cvector == 29751) {
				object var_181_object = var_1_object;
				func_2461(var_0_object);
				object var_183_object = var_1_object;
				func_2509(var_0_object);
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_2519();
			}
			if(var_26_bool == 22520) {
				bool var_189_bool;
				func_2549(var_1_object);
				if(!var_189_bool) { //@nz
					object var_198_object; object var_199_object;
					var_198_object = var_1_object;
					var_199_object = var_0_object;
					func_2455();
					func_687(var_27_cvector, "Neutral");
					var_0_object->SetMessage(521326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528379, 29753, 29752); //@t
					return 0;
				}
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521329); //@t
				var_0_object->ClearReplies(); //@t
				bool var_220_bool;
				func_2537(var_1_object);
				if(var_220_bool != 0)
					var_0_object->AddReply(521330, 22527, 22524); //@t
				bool var_229_bool = false;
				bool var_230_bool;
				func_2561(var_230_bool, var_1_object);
				if(var_230_bool != 0) {
					bool var_239_bool;
					func_2525(var_1_object);
					if(var_239_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 0)
					var_0_object->AddReply(521331, 22529, 22525); //@t
				var_0_object->AddReply(521332, -1, 22526); //@t
				return 0;
			}
			if(var_26_bool == 22529) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521336, -1, 22530); //@t
				var_0_object->AddReply(528376, 29750, 29749); //@t
				return 0;
			}
			if(var_26_bool == 29750) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528378, -1, 29751); //@t
				return 0;
			}
			if(var_26_bool == 22527) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528374, 29748, 29747); //@t
				return 0;
			}
			if(var_26_bool == 29748) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521334, -1, 22528); //@t
				return 0;
			}
			if(var_26_bool == 29753) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528381, 29755, 29754); //@t
				return 0;
			}
			if(var_26_bool == 29755) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528383, 29757, 29756); //@t
				var_0_object->AddReply(528386, 29760, 29759); //@t
				return 0;
			}
			if(var_26_bool == 29760) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528388, 29762, 29761); //@t
				return 0;
			}
			if(var_26_bool == 29762) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528390, 29757, 29763); //@t
				var_0_object->AddReply(528391, 29765, 29764); //@t
				var_0_object->AddReply(528394, -1, 29768); //@t
				return 0;
			}
			if(var_26_bool == 29765) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528393, 29757, 29766); //@t
				return 0;
			}
			if(var_26_bool == 29757) {
				func_687(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521327, -1, 22521); //@t
				var_0_object->AddReply(528395, -1, 29770); //@t
				return 0;
			}
			var_3_string = true;
			bool var_336_bool;
			func_2412(var_336_bool);
			if(var_336_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c6";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2271();
			if(var_27_cvector == 24381) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2491();
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_2503();
			}
			if(var_27_cvector == 24390) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2497();
			}
			if(var_26_bool == 24380) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523177); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool = false;
				bool var_62_bool;
				func_2572(var_1_object);
				if(var_62_bool != 0) {
					bool var_70_bool;
					func_2596(var_1_object);
					if(var_70_bool != 0)
						var_61_bool = true;
				}
				if(var_61_bool != 0)
					var_0_object->AddReply(523178, 24382, 24381); //@t
				bool var_79_bool = false;
				bool var_80_bool = false;
				bool var_81_bool;
				func_2572(var_1_object);
				if(!var_81_bool) { //@nz
					bool var_84_bool;
					func_2584(var_1_object);
					if(!var_84_bool) //@nz
						var_80_bool = true;
				}
				if(var_80_bool != 0) {
					bool var_91_bool;
					func_2608(var_1_object);
					if(var_91_bool != 0)
						var_79_bool = true;
				}
				if(var_79_bool != 0)
					var_0_object->AddReply(523187, 42102, 24390); //@t
				var_0_object->AddReply(523186, -1, 24389); //@t
				return 0;
			}
			if(var_26_bool == 42102) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540131, 24391, 42103); //@t
				return 0;
			}
			if(var_26_bool == 24391) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523189, -1, 24392); //@t
				return 0;
			}
			if(var_26_bool == 24382) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523180, 24384, 24383); //@t
				var_0_object->AddReply(540132, -1, 42104); //@t
				return 0;
			}
			if(var_26_bool == 24384) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523182, 24386, 24385); //@t
				var_0_object->AddReply(540133, -1, 42105); //@t
				return 0;
			}
			if(var_26_bool == 24386) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523184, 24388, 24387); //@t
				var_0_object->AddReply(540134, -1, 42106); //@t
				return 0;
			}
			if(var_26_bool == 24388) {
				func_1259(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523190, -1, 24393); //@t
				var_0_object->AddReply(523191, -1, 24394); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_2412(var_157_bool);
			if(var_157_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x502";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2271();
			if(var_26_int == 42560) {
				func_1655(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2412(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x68e";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1723(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1794();
			bool var_30_bool = false;
			bool var_31_bool;
			func_2015(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1763(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1743(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2278(var_72_object);
					var_72_object = var_71_object;
					func_2163(var_70_bool, var_71_object);
				}
			} else {
				func_1758(var_26_int);
				func_1785();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1976();
		func_1794();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1794();
		func_2243("Neutral");
		func_1785();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1785();
		else
			func_2243("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1976();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_2006(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2773(var_44_object);
			func_2243("Neutral");
			func_1794();
			func_1785();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_2015(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_2561(bool var_345_bool, object var_346_object)
{
	object var_348_object;
	var_346_object = var_348_object;
	bool var_347_bool;
	func_2341(var_347_bool, var_348_object, "b6q03_diary");
	if(var_347_bool != 0) {
		var_345_bool = true;
		return 0;
	}
	var_345_bool = false;
}


void func_1794(void)
{
	@KillTimer(10);
}


void func_2310(int var_170_int, int var_171_int)
{
	object var_173_object;
	@CreateIntVector(var_173_object);
	var_173_object->add(var_170_int);
	var_173_object->add(var_171_int);
	@SendWorldWndMessage(3, var_173_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2572(bool var_417_bool)
{
	int var_419_int;
	func_2294(var_419_int, "game_final");
	if(var_419_int == 2)
		var_417_bool = true;
	var_417_bool = false;
}


void func_13(object var_0_object, int var_468_int, object var_469_object)
{
	var_0_object = var_469_object;
	bool var_479_bool; object var_480_object;
	object var_481_object;
	func_2278(var_481_object);
	var_481_object = var_480_object;
	func_2105(var_479_bool, var_480_object);
	bool var_482_bool; object var_483_object;
	var_469_object = var_483_object;
	func_2020(var_482_bool, var_483_object, 70.0);
	if(!var_482_bool) { //@nz
		var_468_int = -2;
		return 8;
	}
	object var_475_object;
	@CreateDialog(var_475_object);
	int var_486_int;
	func_2406(var_486_int);
	var_475_object->SetNPCName(var_486_int);
	int var_487_int;
	func_2404(var_487_int);
	var_475_object->SetNPCDescription(var_487_int);
	string var_488_string;
	func_2408(var_488_string);
	var_475_object->SetPhoto(var_488_string);
	string var_489_string;
	func_2410(var_489_string);
	var_475_object->SetPhoto2(var_489_string);
	int var_490_int;
	func_2750(var_490_int);
	var_475_object->SetPlayerName(var_490_int);
	bool var_476_bool;
	@IsOverrideActive(var_476_bool);
	if(var_476_bool != 0) {
		var_468_int = -2;
		return 8;
	}
	@DoDialog(var_475_object);
	object var_492_object; object var_493_object;
	var_469_object = var_492_object;
	var_475_object = var_493_object;
	TaskCall(2);
	func_94(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object);
	TaskReturn();
	bool var_478_bool;
	var_475_object->IsDialogEnd(var_478_bool);
	
	for(;;) {
		var_525_bool = !var_478_bool; //@nz
		if(var_525_bool == 0) goto Label_83;
		@sync();
		var_475_object->IsDialogEnd(var_478_bool);
	}
	
Label_83:
	object var_526_object;
	var_469_object = var_526_object;
	func_2088();
	@StopDialog(var_475_object);
	var_475_object->GetReturnValue(-1);
	int var_477_int = var_468_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_51_int, object var_52_object)
{
	var_0_object = var_52_object;
	bool var_62_bool; object var_63_object;
	object var_64_object;
	func_2278(var_64_object);
	var_64_object = var_63_object;
	func_2105(var_62_bool, var_63_object);
	bool var_157_bool; object var_158_object;
	var_52_object = var_158_object;
	func_2020(var_157_bool, var_158_object, 70.0);
	if(!var_157_bool) { //@nz
		var_51_int = -2;
		return 8;
	}
	object var_58_object;
	@CreateDialog(var_58_object);
	int var_204_int;
	func_2406(var_204_int);
	var_58_object->SetNPCName(var_204_int);
	int var_205_int;
	func_2404(var_205_int);
	var_58_object->SetNPCDescription(var_205_int);
	string var_206_string;
	func_2408(var_206_string);
	var_58_object->SetPhoto(var_206_string);
	string var_207_string;
	func_2410(var_207_string);
	var_58_object->SetPhoto2(var_207_string);
	int var_208_int;
	func_2750(var_208_int);
	var_58_object->SetPlayerName(var_208_int);
	bool var_59_bool;
	@IsOverrideActive(var_59_bool);
	if(var_59_bool != 0) {
		var_51_int = -2;
		return 8;
	}
	@DoDialog(var_58_object);
	object var_217_object; object var_218_object;
	var_52_object = var_217_object;
	var_58_object = var_218_object;
	TaskCall(4);
	func_353(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object);
	TaskReturn();
	bool var_61_bool;
	var_58_object->IsDialogEnd(var_61_bool);
	
	for(;;) {
		var_256_bool = !var_61_bool; //@nz
		if(var_256_bool == 0) goto Label_342;
		@sync();
		var_58_object->IsDialogEnd(var_61_bool);
	}
	
Label_342:
	object var_257_object;
	var_52_object = var_257_object;
	func_2088();
	@StopDialog(var_58_object);
	var_58_object->GetReturnValue(-1);
	int var_60_int = var_51_int;
}
EMIT "Stack[-4] = 0";


void func_2322(object var_157_object, int var_158_int)
{
	int var_160_int;
	object var_161_object;
	var_157_object = var_161_object;
	int var_163_int;
	func_1989(var_161_object, "money", var_163_int);
	if(var_163_int > 0) {
		@GetInvItemByName(var_160_int, "Money");
		int var_170_int; int var_171_int;
		var_160_int = var_170_int;
		var_158_int = var_171_int;
		func_2310(var_170_int, var_171_int);
	}
}


// @pe
void func_2584(bool var_437_bool)
{
	int var_439_int;
	func_2294(var_439_int, "game_final");
	if(var_439_int == 0) {
		var_437_bool = true;
		return 0;
	}
	var_437_bool = false;
}


// @pe
void func_2596(bool var_423_bool)
{
	int var_425_int;
	func_2294(var_425_int, "oob12Maria1");
	if(var_425_int == 0) {
		var_423_bool = true;
		return 0;
	}
	var_423_bool = false;
}


void func_2341(bool var_347_bool, object var_348_object, string var_349_string)
{
	int var_352_int;
	@GetInvItemByName(var_352_int, var_349_string);
	bool var_353_bool;
	var_348_object->HasItem(var_352_int, var_353_bool);
	var_353_bool = var_347_bool;
}


void func_2088(void)
{
	bool var_259_bool;
	@CameraSwitchToNormal();
	bool var_260_bool;
	func_2412(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_259_bool, "head");
		if(var_259_bool == 0) goto Label_2104;
		@UnlookAsync("head");
	}
Label_2104:
	
}


void func_2348(bool var_91_bool, string var_92_string, string var_93_string)
{
	object var_95_object;
	@FindActor(var_95_object, var_92_string);
	if(var_95_object == null)
		var_91_bool = false;
	@Trigger(var_95_object, var_93_string);
	var_91_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2608(bool var_444_bool)
{
	int var_446_int;
	func_2294(var_446_int, "oob12Maria2");
	if(var_446_int == 0) {
		var_444_bool = true;
		return 0;
	}
	var_444_bool = false;
}


void func_1076(object var_0_object, int var_376_int, object var_377_object)
{
	var_0_object = var_377_object;
	bool var_387_bool; object var_388_object;
	object var_389_object;
	func_2278(var_389_object);
	var_389_object = var_388_object;
	func_2105(var_387_bool, var_388_object);
	bool var_390_bool; object var_391_object;
	var_377_object = var_391_object;
	func_2020(var_390_bool, var_391_object, 70.0);
	if(!var_390_bool) { //@nz
		var_376_int = -2;
		return 8;
	}
	object var_383_object;
	@CreateDialog(var_383_object);
	int var_394_int;
	func_2406(var_394_int);
	var_383_object->SetNPCName(var_394_int);
	int var_395_int;
	func_2404(var_395_int);
	var_383_object->SetNPCDescription(var_395_int);
	string var_396_string;
	func_2408(var_396_string);
	var_383_object->SetPhoto(var_396_string);
	string var_397_string;
	func_2410(var_397_string);
	var_383_object->SetPhoto2(var_397_string);
	int var_398_int;
	func_2750(var_398_int);
	var_383_object->SetPlayerName(var_398_int);
	bool var_384_bool;
	@IsOverrideActive(var_384_bool);
	if(var_384_bool != 0) {
		var_376_int = -2;
		return 8;
	}
	@DoDialog(var_383_object);
	object var_400_object; object var_401_object;
	var_377_object = var_400_object;
	var_383_object = var_401_object;
	TaskCall(8);
	func_1157(var_402_object, var_403_object, var_404_string, var_405_bool, var_400_object, var_401_object);
	TaskReturn();
	bool var_386_bool;
	var_383_object->IsDialogEnd(var_386_bool);
	
	for(;;) {
		var_464_bool = !var_386_bool; //@nz
		if(var_464_bool == 0) goto Label_1146;
		@sync();
		var_383_object->IsDialogEnd(var_386_bool);
	}
	
Label_1146:
	object var_465_object;
	var_377_object = var_465_object;
	func_2088();
	@StopDialog(var_383_object);
	var_383_object->GetReturnValue(-1);
	int var_385_int = var_376_int;
}
EMIT "Stack[-4] = 0";


void func_2360(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_2105(bool var_62_bool, object var_63_object)
{
	int var_69_int; int var_70_int;
	@GetVariable("voice_common", var_69_int);
	if(var_69_int != 0) {
		bool var_73_bool; object var_74_object;
		var_63_object = var_74_object;
		func_2163(var_73_bool, var_74_object);
		if(!var_73_bool) { //@nz
			bool var_104_bool; object var_105_object;
			var_63_object = var_105_object;
			func_2200(var_104_bool, var_105_object);
			if(!var_104_bool) { //@nz
				var_62_bool = false;
				return 4;
			}
		}
		@irand(var_70_int, 2);
		if(var_70_int != 0)
			@SetVariable("voice_common", ((var_69_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_149_bool; object var_150_object;
		var_63_object = var_150_object;
		func_2200(var_149_bool, var_150_object);
		if(!var_149_bool) { //@nz
			bool var_152_bool; object var_153_object;
			var_63_object = var_153_object;
			func_2163(var_152_bool, var_153_object);
			if(!var_152_bool) { //@nz
				var_62_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2161;
	
Label_2161:
	var_62_bool = true;
	
}


void func_2620(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 276, 2, 521337);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_2672(var_57_bool, var_58_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1597(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_553_object, object var_554_object)
{
	var_0_object = var_554_object;
	var_1_object = var_553_object;
	var_3_string = false;
	if(1 != 0) {
		func_1655(var_554_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1625;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x641";
	}
Label_1625:
	bool var_575_bool;
	func_2412(var_575_bool);
	if(var_575_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2243(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1654;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1654:
		return 0;

	}
	
}


void func_2365(int var_117_int)
{
	float var_119_float;
	@GetGameTime(var_119_float);
	var_117_int = 1 + (var_119_float / 24);
}


// @pe
void func_579(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_300_bool;
		func_2549(var_1_object);
		if(!var_300_bool) { //@nz
			object var_309_object; object var_310_object;
			var_309_object = var_1_object;
			var_310_object = var_0_object;
			func_2455();
			func_687(var_294_object, "Neutral");
			var_0_object->SetMessage(521326); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528379, 29753, 29752); //@t
		} else {
					func_687(var_294_object, "Neutral");
					var_0_object->SetMessage(521329); //@t
					var_0_object->ClearReplies(); //@t
					bool var_335_bool;
					func_2537(var_1_object);
					if(var_335_bool != 0)
						var_0_object->AddReply(521330, 22527, 22524); //@t
					bool var_344_bool = false;
					bool var_345_bool;
					func_2561(var_345_bool, var_1_object);
					if(var_345_bool != 0) {
						bool var_354_bool;
						func_2525(var_1_object);
						if(var_354_bool != 0)
							var_344_bool = true;
					}
					if(var_344_bool != 0)
						var_0_object->AddReply(521331, 22529, 22525); //@t
					var_0_object->AddReply(521332, -1, 22526); //@t
		}
	}
	for(;;) {
		bool var_325_bool;
		func_2412(var_325_bool);
		if(var_325_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2243(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_686;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_686:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x247";


// @pe
void func_2374(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_2365(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


void func_2633(void)
{
	object var_142_object;
	@CreateDiaryEntry(var_142_object, 279, 2, 521340);
	bool var_146_bool; object var_147_object;
	var_142_object = var_147_object;
	func_2672(var_146_bool, var_147_object, 276);
}
EMIT "Stack[-1] = 0";


void func_2380(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_2387(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_2380(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_2646(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 277, 2, 521338);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_2672(var_80_bool, var_81_object, 276);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_492_object, object var_493_object)
{
	var_0_object = var_493_object;
	var_1_object = var_492_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_493_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_517_bool;
	func_2412(var_517_bool);
	if(var_517_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2243(var_2_object);
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


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_217_object, object var_218_object)
{
	var_0_object = var_218_object;
	var_1_object = var_217_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_218_object, "Neutral");
		var_0_object->SetMessage(518027); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518028, 29772, 19161); //@t
		var_0_object->AddReply(528396, 29772, 29771); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_243_bool;
	func_2412(var_243_bool);
	if(var_243_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2243(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_410;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_410:
		return 0;

	}
	
}


void func_2659(object var_66_object)
{
	object var_68_object;
	@GetDiaryRoot(var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_66_object = false;
	}
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_2404(int var_205_int)
{
	var_205_int = 515543;
}


void func_2406(int var_204_int)
{
	var_204_int = 502868;
}


void func_2408(string var_206_string)
{
	var_206_string = "ui/NPC_Maria.png";
}


void func_2410(string var_207_string)
{
	var_207_string = "ui/NPC_Maria_b.png";
}


void func_2412(bool var_100_bool)
{
	var_100_bool = true;
}


void func_2414(void)
{
	@SetVariable("b6q03", 1);
	object var_38_object;
	func_2700(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	float var_49_float;
	func_2360(var_49_float);
	var_35_object->AddMark("b6q03MariaGotoNina", "pt_map_nina", 0, 521342, var_49_float);
	func_2620();
	func_2646();
	object var_83_object;
	func_2299(var_83_object, "quest_b6_03");
	bool var_91_bool;
	func_2348(var_91_bool, "quest_b6_03", "init_grave");
}
EMIT "Stack[-1] = 0";


void func_2672(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_2659(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	object var_64_object;
	var_63_object->Find(var_59_int, var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_59_int);
		var_57_bool = false;
	}
	var_64_object->AddChild(var_58_object);
	@SendWorldWndMessage(7);
	int var_65_int;
	var_58_object->GetCategory(var_65_int);
	@SetDiarySection(var_65_int);
	var_57_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1905(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_2015(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_2387(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_2015(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_2380(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_1960;
			goto Label_1971;
			}
				Label_1960:
					bool var_78_bool;
					func_1974(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_1966;
			}
		}
	Label_1971:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1966:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


void func_2163(bool var_73_bool, object var_74_object)
{
	string var_80_string; bool var_82_bool; int var_83_int; string var_84_string;
	var_80_string = "c";
	int var_81_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_74_object->HasProperty((var_80_string + (var_81_int + 1)), var_82_bool);
			if(!var_82_bool) { //@nz
			} else {
				var_81_int += 1;
			}
		}
		if(!var_81_int) { //@nz
			var_73_bool = false;
			return 10;
		}
		var_83_int = 0;
		if(var_81_int > 1)
			@irand(var_83_int, var_81_int);
		var_74_object->GetProperty((var_80_string + (var_83_int + 1)), var_84_string);
		bool var_96_bool; string var_97_string;
		var_84_string = var_97_string;
		func_2256(var_96_bool, var_97_string);
		var_96_bool = var_73_bool;
		return 10;

	}
}


// @pe
void func_1655(object var_2_object, string var_560_string)
{
	bool var_561_bool;
	func_2412(var_561_bool);
	if(!var_561_bool) //@nz
		return 0;
	if(var_560_string == var_2_object)
		return 0;
	string var_564_string; bool var_565_bool;
	var_560_string = var_564_string;
	if(var_560_string == "")
		var_565_bool = false;
	else
		var_565_bool = true;
	func_2250(var_564_string, var_565_bool);
	var_2_object = var_560_string;
	
}


// @pe
void func_1157(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_400_object, object var_401_object)
{
	var_0_object = var_401_object;
	var_1_object = var_400_object;
	var_3_string = false;
	if(1 != 0) {
		func_1259(var_401_object, "Neutral");
		var_0_object->SetMessage(523177); //@t
		var_0_object->ClearReplies(); //@t
		bool var_416_bool = false;
		bool var_417_bool;
		func_2572(var_1_object);
		if(var_417_bool != 0) {
			bool var_423_bool;
			func_2596(var_1_object);
			if(var_423_bool != 0)
				var_416_bool = true;
		}
		if(var_416_bool != 0)
			var_0_object->AddReply(523178, 24382, 24381); //@t
		bool var_432_bool = false;
		bool var_433_bool = false;
		bool var_434_bool;
		func_2572(var_1_object);
		if(!var_434_bool) { //@nz
			bool var_437_bool;
			func_2584(var_1_object);
			if(!var_437_bool) //@nz
				var_433_bool = true;
		}
		if(var_433_bool != 0) {
			bool var_444_bool;
			func_2608(var_1_object);
			if(var_444_bool != 0)
				var_432_bool = true;
		}
		if(var_432_bool != 0)
			var_0_object->AddReply(523187, 42102, 24390); //@t
		var_0_object->AddReply(523186, -1, 24389); //@t
		goto Label_1229;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x489";
	}
Label_1229:
	bool var_456_bool;
	func_2412(var_456_bool);
	if(var_456_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2243(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1258;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1258:
		return 0;

	}
	
}


void func_2700(object var_38_object)
{
	object var_41_object; object var_42_object;
	@GetMainOutdoorScene(var_41_object);
	if(var_41_object == null) {
		@Trace("Can't find main outdoor scene");
		var_42_object = null;
		var_42_object = var_38_object;
	}
	var_41_object->GetMap(var_42_object);
	var_42_object = var_38_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2449(void)
{
	@SetVariable("oob6Maria1", 1);
}


// @pe
void func_2455(void)
{
	@SetVariable("b6q03NinaTalk", 1);
}


void func_2200(bool var_104_bool, object var_105_object)
{
	bool var_113_bool; int var_114_int; string var_115_string;
	int var_117_int;
	func_2365(var_117_int);
	string var_111_string = ("d" + var_117_int) + "m";
	int var_112_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_105_object->HasProperty((var_111_string + (var_112_int + 1)), var_113_bool);
			if(!var_113_bool) { //@nz
			} else {
				var_112_int += 1;
			}
		}
		if(!var_112_int) { //@nz
			var_104_bool = false;
			return 10;
		}
		var_114_int = 0;
		if(var_112_int > 1)
			@irand(var_114_int, var_112_int);
		var_105_object->GetProperty((var_111_string + (var_114_int + 1)), var_115_string);
		bool var_136_bool; string var_137_string;
		var_115_string = var_137_string;
		func_2256(var_136_bool, var_137_string);
		var_136_bool = var_104_bool;
		return 10;

	}
}


// @pe
void func_411(object var_2_object, string var_224_string)
{
	bool var_225_bool;
	func_2412(var_225_bool);
	if(!var_225_bool) //@nz
		return 0;
	if(var_224_string == var_2_object)
		return 0;
	string var_228_string; bool var_229_bool;
	var_224_string = var_228_string;
	if(var_224_string == "")
		var_229_bool = false;
	else
		var_229_bool = true;
	func_2250(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	
}


// @pe
void func_157(object var_2_object, string var_499_string)
{
	bool var_500_bool;
	func_2412(var_500_bool);
	if(!var_500_bool) //@nz
		return 0;
	if(var_499_string == var_2_object)
		return 0;
	string var_503_string; bool var_504_bool;
	var_499_string = var_503_string;
	if(var_499_string == "")
		var_504_bool = false;
	else
		var_504_bool = true;
	func_2250(var_503_string, var_504_bool);
	var_2_object = var_499_string;
	
}


void func_2717(object var_99_object, string var_100_string, float var_101_float)
{
	object var_109_object;
	@GetMainOutdoorScene(var_109_object);
	if(var_109_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_107_cvector;
	cvector var_108_cvector;
	bool var_110_bool;
	var_109_object->GetLocator(var_100_string, var_110_bool, var_107_cvector, var_108_cvector);
	if(!var_110_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_100_string) + " doesnt exist");
	var_109_object->GetMap(var_99_object);
	if(var_99_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_120_float = GetByIndex(var_107_cvector, 0);
	var_121_float = GetByIndex(var_107_cvector, 2);
	var_99_object->SetMapParams(var_120_float, var_121_float, var_101_float);
}
EMIT "Stack[-2] = 0";


void func_2461(object var_137_object)
{
	func_2633();
	bool var_149_bool;
	func_2348(var_149_bool, "quest_b6_03", "completed");
	int var_140_int;
	var_137_object->RemoveItemByType(var_140_int, "b6q03_diary", 1);
}


// @pe
void func_2475(object var_98_object)
{
	object var_102_object;
	func_2700(var_102_object);
	object var_99_object;
	var_102_object = var_99_object;
	func_2717(var_99_object, "pt_map_nina", (float)2);
	object var_122_object;
	func_2700(var_122_object);
	var_98_object->ShowMap(var_122_object);
}


// @pe
void func_687(object var_2_object, string var_313_string)
{
	bool var_314_bool;
	func_2412(var_314_bool);
	if(!var_314_bool) //@nz
		return 0;
	if(var_313_string == var_2_object)
		return 0;
	string var_317_string; bool var_318_bool;
	var_313_string = var_317_string;
	if(var_313_string == "")
		var_318_bool = false;
	else
		var_318_bool = true;
	func_2250(var_317_string, var_318_bool);
	var_2_object = var_313_string;
	
}


void func_1974(bool var_78_bool)
{
	var_78_bool = true;
}


void func_1976(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1723(object var_0_object)
{
	bool var_26_bool;
	func_2015(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1851();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1905();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2491(void)
{
	@SetVariable("oob12Maria1", 1);
}


void func_1981(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2750(int var_208_int)
{
	int var_210_int;
	@GetVariable("branch", var_210_int);
	if(var_210_int == 0) {
		var_208_int = 1;
		return 2;
	EMIT "GOTO 0xacd";
	}
	if(var_210_int == 1) {
		var_208_int = 2;
		return 2;
	}
	var_208_int = 3;
}


// @pe
void func_2497(void)
{
	@SetVariable("oob12Maria2", 1);
}


void func_2243(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


void func_1989(object var_161_object, string var_162_string, int var_163_int)
{
	int var_165_int;
	var_161_object->GetProperty(var_162_string, var_165_int);
	var_161_object->SetProperty(var_162_string, (var_165_int + var_163_int));
}


// @pe
void func_2503(void)
{
	@SetVariable("b12q01MariaFinalTalk", 1);
}


void func_2250(string var_228_string, bool var_229_bool)
{
	float var_234_float; float var_235_float;
	@lshGetAnimTimes(var_228_string, var_234_float, var_235_float);
	@lshPlayAnimation(var_234_float, var_235_float, var_229_bool);
}


void func_1996(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_2509(object var_154_object)
{
	@Trace("money2000 is given");
	object var_157_object;
	var_154_object = var_157_object;
	func_2322(var_157_object, 2000);
}


void func_1743(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_2006(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2256(bool var_96_bool, string var_97_string)
{
	bool var_99_bool;
	bool var_100_bool;
	func_2412(var_100_bool);
	if(var_100_bool != 0) {
		@lshHasSpeech(var_99_bool, var_97_string);
		if(var_99_bool != 0) {
			@lshPlaySpeech(var_97_string);
			var_96_bool = true;
		}
	}
	var_96_bool = false;
}


void func_2767(int var_370_int)
{
	int var_372_int;
	@GetVariable("game_final", var_372_int);
	var_372_int = var_370_int;
}


void func_2773(object var_44_object)
{
	int var_47_int; int var_48_int;
	@GetVariable("mt_maria", var_47_int);
	if(!var_47_int) { //@nz
		int var_51_int; object var_52_object;
		var_44_object = var_52_object;
		TaskCall(3);
		func_272(var_53_object, var_51_int, var_52_object);
		TaskReturn();
		@SetVariable("mt_maria", 1);
	}
	bool var_266_bool;
	func_2374(var_266_bool, 6);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_44_object = var_270_object;
		TaskCall(5);
		func_498(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 4;
	}
	bool var_368_bool;
	func_2374(var_368_bool, 12);
	if(var_368_bool != 0) {
		int var_370_int;
		func_2767(var_370_int);
		if(var_370_int != 0) {
			int var_376_int; object var_377_object;
			var_44_object = var_377_object;
			TaskCall(7);
			func_1076(var_378_object, var_376_int, var_377_object);
			TaskReturn();
		} else {
			@GetVariable("d12_maria", var_48_int);
			var_467_bool = !var_48_int; //@nz
			if(var_467_bool == 0) goto Label_2834;
			int var_468_int; object var_469_object;
			var_44_object = var_469_object;
			TaskCall(1);
			func_13(var_470_object, var_468_int, var_469_object);
			TaskReturn();
			@SetVariable("d12_maria", 1);
	}
		int var_529_int; object var_530_object;
		var_44_object = var_530_object;
		TaskCall(9);
		func_1516(var_531_object, var_529_int, var_530_object);
		TaskReturn();
		return 4;
	}
Label_2834:
	
}


void func_2006(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1996(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


// @pe
void func_2519(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2525(bool var_354_bool)
{
	int var_356_int;
	func_2294(var_356_int, "oob6Maria1");
	if(var_356_int == 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


void func_1758(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2271(void)
{
	bool var_29_bool;
	func_2412(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2015(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_1763(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1981(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2020(bool var_157_bool, object var_158_object, float var_159_float)
{
	cvector var_170_cvector; bool var_177_bool;
	var_158_object->GetPosition(var_170_cvector);
	float var_169_float;
	var_158_object->GetEyesHeight(var_169_float);
	var_178_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (var_178_float + var_169_float);
	cvector var_171_cvector;
	@GetPosition(var_171_cvector);
	@GetEyesHeight(var_169_float);
	var_179_float = GetByIndex(var_171_cvector, 1);
	SetByIndex(var_171_cvector, 1) = (var_179_float + var_169_float);
	cvector var_172_cvector = var_170_cvector - var_171_cvector;
	var_180_float = GetByIndex(var_172_cvector, 1);
	SetByIndex(var_172_cvector, 1) = (float)0;
	var_182_float = sqrt(var_172_cvector | var_172_cvector);
	var_172_cvector /= var_182_float;
	cvector var_173_cvector = -var_172_cvector;
	cvector var_184_cvector;
	func_2284(var_184_cvector, (var_173_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_174_cvector = ((var_172_cvector * var_159_float) + (var_184_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_176_bool;
	@IsOverrideActive(var_176_bool);
	if(var_176_bool != 0)
		var_157_bool = false;
	@StopWorld();
	@CameraTransit((var_171_cvector + var_174_cvector), var_173_cvector);
	var_197_float = GetByIndex(var_174_cvector, 0);
	var_198_float = GetByIndex(var_174_cvector, 2);
	@Rotate(var_197_float, var_198_float);
	bool var_199_bool;
	func_2412(var_199_bool);
	if(var_199_bool != 0) {
	} else {
		@HasAnimationTrack(var_177_bool, "head");
		if(var_177_bool == 0) goto Label_2082;
		@LookAsyncCamera("head");
	}
Label_2082:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_157_bool = true;
	
}


void func_2278(object var_64_object)
{
	object var_66_object;
	@self(var_66_object);
	var_66_object = var_64_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2537(bool var_335_bool)
{
	int var_337_int;
	func_2294(var_337_int, "b6q03");
	if(var_337_int == 0) {
		var_335_bool = true;
		return 0;
	}
	var_335_bool = false;
}


// @pe
void func_1259(object var_2_object, string var_407_string)
{
	bool var_408_bool;
	func_2412(var_408_bool);
	if(!var_408_bool) //@nz
		return 0;
	if(var_407_string == var_2_object)
		return 0;
	string var_411_string; bool var_412_bool;
	var_407_string = var_411_string;
	if(var_407_string == "")
		var_412_bool = false;
	else
		var_412_bool = true;
	func_2250(var_411_string, var_412_bool);
	var_2_object = var_407_string;
	
}


void func_2284(cvector var_184_cvector, cvector var_185_cvector)
{
	float var_188_float = sqrt(var_185_cvector | var_185_cvector);
	if(var_188_float < 0.000001)
		var_184_cvector = [0.0, 0.0, 0.0];
	var_184_cvector = var_185_cvector / var_188_float;
}


void func_1516(object var_0_object, int var_529_int, object var_530_object)
{
	var_0_object = var_530_object;
	bool var_540_bool; object var_541_object;
	object var_542_object;
	func_2278(var_542_object);
	var_542_object = var_541_object;
	func_2105(var_540_bool, var_541_object);
	bool var_543_bool; object var_544_object;
	var_530_object = var_544_object;
	func_2020(var_543_bool, var_544_object, 70.0);
	if(!var_543_bool) { //@nz
		var_529_int = -2;
		return 8;
	}
	object var_536_object;
	@CreateDialog(var_536_object);
	int var_547_int;
	func_2406(var_547_int);
	var_536_object->SetNPCName(var_547_int);
	int var_548_int;
	func_2404(var_548_int);
	var_536_object->SetNPCDescription(var_548_int);
	string var_549_string;
	func_2408(var_549_string);
	var_536_object->SetPhoto(var_549_string);
	string var_550_string;
	func_2410(var_550_string);
	var_536_object->SetPhoto2(var_550_string);
	int var_551_int;
	func_2750(var_551_int);
	var_536_object->SetPlayerName(var_551_int);
	bool var_537_bool;
	@IsOverrideActive(var_537_bool);
	if(var_537_bool != 0) {
		var_529_int = -2;
		return 8;
	}
	@DoDialog(var_536_object);
	object var_553_object; object var_554_object;
	var_530_object = var_553_object;
	var_536_object = var_554_object;
	TaskCall(10);
	func_1597(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object);
	TaskReturn();
	bool var_539_bool;
	var_536_object->IsDialogEnd(var_539_bool);
	
	for(;;) {
		var_583_bool = !var_539_bool; //@nz
		if(var_583_bool == 0) goto Label_1586;
		@sync();
		var_536_object->IsDialogEnd(var_539_bool);
	}
	
Label_1586:
	object var_584_object;
	var_530_object = var_584_object;
	func_2088();
	@StopDialog(var_536_object);
	var_536_object->GetReturnValue(-1);
	int var_538_int = var_529_int;
}
EMIT "Stack[-4] = 0";


void func_498(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	object var_282_object;
	func_2278(var_282_object);
	var_282_object = var_281_object;
	func_2105(var_280_bool, var_281_object);
	bool var_283_bool; object var_284_object;
	var_270_object = var_284_object;
	func_2020(var_283_bool, var_284_object, 70.0);
	if(!var_283_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_287_int;
	func_2406(var_287_int);
	var_276_object->SetNPCName(var_287_int);
	int var_288_int;
	func_2404(var_288_int);
	var_276_object->SetNPCDescription(var_288_int);
	string var_289_string;
	func_2408(var_289_string);
	var_276_object->SetPhoto(var_289_string);
	string var_290_string;
	func_2410(var_290_string);
	var_276_object->SetPhoto2(var_290_string);
	int var_291_int;
	func_2750(var_291_int);
	var_276_object->SetPlayerName(var_291_int);
	bool var_277_bool;
	@IsOverrideActive(var_277_bool);
	if(var_277_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	@DoDialog(var_276_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(6);
	func_579(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_366_bool = !var_279_bool; //@nz
		if(var_366_bool == 0) goto Label_568;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_568:
	object var_367_object;
	var_270_object = var_367_object;
	func_2088();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2549(bool var_300_bool)
{
	int var_302_int;
	func_2294(var_302_int, "b6q03NinaTalk");
	if(var_302_int != 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


void func_2294(int var_302_int, string var_303_string)
{
	int var_305_int;
	@GetVariable(var_303_string, var_305_int);
	var_305_int = var_302_int;
}


void func_1785(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_2299(object var_83_object, string var_84_string)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	object var_88_object;
	@AddBlankActorFromXml(var_88_object, var_87_object, var_84_string, (var_84_string + ".xml"));
	var_88_object = var_83_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


