// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_2606();
		bool var_21_bool;
		func_2068(var_21_bool);
		if(!var_21_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_2133("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_21_object;
		var_20_bool = var_21_object;
		func_2610(var_21_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_2056(var_21_bool, var_22_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_2151();
			if(var_20_string == 526) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_2310();
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(458, 530, 527); //@t
				var_0_object->AddReply(459, 532, 528); //@t
				var_0_object->AddReply(460, 530, 529); //@t
				return 0;
			}
			if(var_20_string == 532) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(466, 538, 536); //@t
				var_0_object->AddReply(467, -1, 537); //@t
				return 0;
			}
			if(var_20_string == 538) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(470, -1, 540); //@t
				var_0_object->AddReply(471, -1, 541); //@t
				return 0;
			}
			if(var_20_string == 530) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(463, 535, 533); //@t
				var_0_object->AddReply(464, -1, 534); //@t
				return 0;
			}
			if(var_20_string == 535) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6269, -1, 6939); //@t
				return 0;
			}
			var_3_string = true;
			bool var_92_bool;
			func_2206(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_2151();
			if(var_21_bool == 6780) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_2208();
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_2226();
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_2235();
				object var_77_object = var_1_object;
				func_2251(var_0_object);
			}
			if(var_21_bool == 6783) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_2208();
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_2226();
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_2235();
				object var_111_object = var_1_object;
				func_2251(var_0_object);
			}
			if(var_21_bool == 6244) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_2214();
			}
			if(var_21_bool == 6245) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_2214();
			}
			if(var_21_bool == 6248) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_2214();
			}
			if(var_21_bool == 6249) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_2214();
			}
			if(var_21_bool == 6233) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_2220();
			}
			if(var_21_bool == 6234) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_2220();
			}
			if(var_21_bool == 6235) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_2220();
			}
			if(var_21_bool == 6236) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_2220();
			}
			if(var_20_string == 6226) {
				bool var_151_bool = false;
				bool var_152_bool;
				func_2316(var_1_object);
				if(var_152_bool != 0) {
					bool var_160_bool;
					func_2352(var_1_object);
					if(var_160_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0) {
					func_595(var_21_bool, "Neutral");
					var_0_object->SetMessage(5647); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5648, 6756, 6227); //@t
					var_0_object->AddReply(5671, 6750, 6252); //@t
					return 0;
				}
				bool var_188_bool = false;
				bool var_189_bool;
				func_2328(var_1_object);
				if(var_189_bool != 0) {
					bool var_195_bool;
					func_2316(var_1_object);
					if(!var_195_bool) //@nz
						var_188_bool = true;
				}
				if(var_188_bool != 0) {
					func_595(var_21_bool, "Neutral");
					var_0_object->SetMessage(5659); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5660, 6241, 6240); //@t
					var_0_object->AddReply(5670, 6241, 6250); //@t
					return 0;
				}
				bool var_206_bool;
				func_2340(var_1_object);
				if(var_206_bool != 0) {
					func_595(var_21_bool, "Neutral");
					var_0_object->SetMessage(5649); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5650, 6230, 6229); //@t
					var_0_object->AddReply(5658, 6230, 6237); //@t
					return 0;
				}
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8187); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool;
				func_2441(var_1_object);
				if(var_222_bool != 0)
					var_0_object->AddReply(8191, 9041, 9014); //@t
				bool var_231_bool;
				func_2453(var_1_object);
				if(var_231_bool != 0)
					var_0_object->AddReply(8192, 9040, 9015); //@t
				bool var_240_bool;
				func_2429(var_1_object);
				if(var_240_bool != 0)
					var_0_object->AddReply(8209, 9037, 9032); //@t
				bool var_249_bool;
				func_2405(var_1_object);
				if(var_249_bool != 0)
					var_0_object->AddReply(8210, 9038, 9033); //@t
				bool var_258_bool;
				func_2417(var_1_object);
				if(var_258_bool != 0)
					var_0_object->AddReply(8212, 9039, 9035); //@t
				var_0_object->AddReply(8722, -1, 9559); //@t
				return 0;
			}
			if(var_20_string == 9039) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8721, -1, 9558); //@t
				return 0;
			}
			if(var_20_string == 9038) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8720, -1, 9557); //@t
				return 0;
			}
			if(var_20_string == 9037) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8719, -1, 9556); //@t
				return 0;
			}
			if(var_20_string == 9040) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8718, -1, 9555); //@t
				return 0;
			}
			if(var_20_string == 9041) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(8218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8717, -1, 9554); //@t
				return 0;
			}
			if(var_20_string == 6230) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(5651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5652, 6232, 6231); //@t
				var_0_object->AddReply(5657, -1, 6236); //@t
				return 0;
			}
			if(var_20_string == 6232) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(5653); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5654, -1, 6233); //@t
				var_0_object->AddReply(5655, -1, 6234); //@t
				var_0_object->AddReply(5656, -1, 6235); //@t
				return 0;
			}
			if(var_20_string == 6241) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(5661); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5662, 6243, 6242); //@t
				var_0_object->AddReply(5666, 6247, 6246); //@t
				return 0;
			}
			if(var_20_string == 6247) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(5667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5668, -1, 6248); //@t
				var_0_object->AddReply(5669, -1, 6249); //@t
				return 0;
			}
			if(var_20_string == 6243) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(5663); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5664, -1, 6244); //@t
				var_0_object->AddReply(5665, -1, 6245); //@t
				return 0;
			}
			if(var_20_string == 6750) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6113, 6753, 6751); //@t
				var_0_object->AddReply(6114, 6753, 6752); //@t
				return 0;
			}
			if(var_20_string == 6753) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6116, 6768, 6755); //@t
				var_0_object->AddReply(6120, 6760, 6759); //@t
				return 0;
			}
			if(var_20_string == 6760) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6124, 6768, 6763); //@t
				return 0;
			}
			if(var_20_string == 6756) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6118, 6764, 6757); //@t
				var_0_object->AddReply(6119, 6765, 6758); //@t
				return 0;
			}
			if(var_20_string == 6765) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6127, 6768, 6766); //@t
				return 0;
			}
			if(var_20_string == 6764) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6128, 6768, 6767); //@t
				var_0_object->AddReply(6132, 6775, 6774); //@t
				var_0_object->AddReply(6135, 6768, 6777); //@t
				return 0;
			}
			if(var_20_string == 6775) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6134, 6768, 6776); //@t
				return 0;
			}
			if(var_20_string == 6768) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6130, 6773, 6772); //@t
				return 0;
			}
			if(var_20_string == 6773) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6131); //@t
				var_0_object->ClearReplies(); //@t
				bool var_433_bool;
				func_2417(var_1_object);
				if(var_433_bool != 0)
					var_0_object->AddReply(6136, -1, 6780); //@t
				var_0_object->AddReply(6137, 6782, 6781); //@t
				return 0;
			}
			if(var_20_string == 6782) {
				func_595(var_21_bool, "Neutral");
				var_0_object->SetMessage(6138); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6139, -1, 6783); //@t
				return 0;
			}
			var_3_string = true;
			bool var_448_bool;
			func_2206(var_448_bool);
			if(var_448_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x264";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_2151();
			if(var_21_bool == 11390) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_2269();
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_2267();
				object var_71_object = var_1_object;
				func_2288(var_0_object);
			}
			if(var_21_bool == 11393) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_2267();
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_2269();
				object var_103_object = var_1_object;
				func_2288(var_0_object);
			}
			if(var_20_string == 11026) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10004); //@t
				var_0_object->ClearReplies(); //@t
				bool var_123_bool = false;
				bool var_124_bool;
				func_2364(var_1_object);
				if(var_124_bool != 0) {
					bool var_132_bool;
					func_2376(var_1_object);
					if(var_132_bool != 0)
						var_123_bool = true;
				}
				if(var_123_bool != 0)
					var_0_object->AddReply(10211, 11256, 11257); //@t
				var_0_object->AddReply(10005, 11028, 11027); //@t
				var_0_object->AddReply(10012, 11035, 11034); //@t
				var_0_object->AddReply(10015, -1, 11037); //@t
				var_0_object->AddReply(11383, -1, 12579); //@t
				return 0;
			}
			if(var_20_string == 11035) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10014, -1, 11036); //@t
				return 0;
			}
			if(var_20_string == 11028) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10007, 11030, 11029); //@t
				var_0_object->AddReply(10011, -1, 11033); //@t
				return 0;
			}
			if(var_20_string == 11030) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10009, -1, 11031); //@t
				var_0_object->AddReply(10010, -1, 11032); //@t
				return 0;
			}
			if(var_20_string == 11256) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10325, 11385, 11384); //@t
				return 0;
			}
			if(var_20_string == 11385) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10327, 11388, 11386); //@t
				var_0_object->AddReply(10328, 11388, 11387); //@t
				return 0;
			}
			if(var_20_string == 11388) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10330, -1, 11390); //@t
				var_0_object->AddReply(10331, 11392, 11391); //@t
				return 0;
			}
			if(var_20_string == 11392) {
				func_1477(var_21_bool, "Neutral");
				var_0_object->SetMessage(10332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10333, -1, 11393); //@t
				return 0;
			}
			var_3_string = true;
			bool var_210_bool;
			func_2206(var_210_bool);
			if(var_210_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5d6";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int)
	{
		if(1 != 0) {
			func_2151();
			if(var_21_int == 14011) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_2304();
			}
			if(var_20_int == 13999) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12800); //@t
				var_0_object->ClearReplies(); //@t
				bool var_48_bool = false;
				bool var_49_bool;
				func_2381(var_1_object);
				if(var_49_bool != 0) {
					bool var_57_bool;
					func_2393(var_1_object);
					if(var_57_bool != 0)
						var_48_bool = true;
				}
				if(var_48_bool != 0)
					var_0_object->AddReply(12801, 14001, 14000); //@t
				var_0_object->AddReply(12813, -1, 14013); //@t
				return 0;
			}
			if(var_20_int == 14001) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12803, 14003, 14002); //@t
				return 0;
			}
			if(var_20_int == 14003) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12805, 14005, 14004); //@t
				var_0_object->AddReply(12808, 14005, 14007); //@t
				return 0;
			}
			if(var_20_int == 14005) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12807, 14008, 14006); //@t
				return 0;
			}
			if(var_20_int == 14008) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12810, 14010, 14009); //@t
				return 0;
			}
			if(var_20_int == 14010) {
				func_1881(var_21_int, "Neutral");
				var_0_object->SetMessage(12811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12812, -1, 14011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_2206(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x76a";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_2304(void)
{
	@SetVariable("ood6Mishka1", 1);
}


void func_2178(int var_136_int)
{
	float var_138_float;
	@GetGameTime(var_138_float);
	var_136_int = 1 + (var_138_float / 24);
}


// @pe
void func_2310(void)
{
	@SetVariable("KnowMishka", 1);
}


void func_2056(bool var_21_bool, object var_22_object)
{
	cvector var_27_cvector;
	var_22_object->GetPosition(var_27_cvector);
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector = var_27_cvector - var_28_cvector;
	var_31_float = GetByIndex(var_29_cvector, 0);
	var_32_float = GetByIndex(var_29_cvector, 2);
	bool var_30_bool;
	@Rotate(var_31_float, var_32_float, var_30_bool);
	var_30_bool = var_21_bool;
}


// @pe
void func_2441(bool var_222_bool)
{
	int var_224_int;
	func_2168(var_224_int, "KnowMyth");
	if(var_224_int == 1)
		var_222_bool = true;
	var_222_bool = false;
}


// @pe
void func_2187(bool var_134_bool, int var_135_int)
{
	int var_136_int;
	func_2178(var_136_int);
	var_134_bool = var_136_int == var_135_int;
}


// @pe
void func_2316(bool var_152_bool)
{
	int var_154_int;
	func_2168(var_154_int, "ood1Mishka1");
	if(var_154_int == 0) {
		var_152_bool = true;
		return 0;
	}
	var_152_bool = false;
}


// @pe
void func_398(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_160_object, object var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_167_bool = false;
		bool var_168_bool;
		func_2316(var_1_object);
		if(var_168_bool != 0) {
			bool var_176_bool;
			func_2352(var_1_object);
			if(var_176_bool != 0)
				var_167_bool = true;
		}
		if(var_167_bool != 0) {
			func_595(var_161_object, "Neutral");
			var_0_object->SetMessage(5647); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5648, 6756, 6227); //@t
			var_0_object->AddReply(5671, 6750, 6252); //@t
		} else {
					bool var_202_bool = false;
					bool var_203_bool;
					func_2328(var_1_object);
					if(var_203_bool != 0) {
						bool var_209_bool;
						func_2316(var_1_object);
						if(!var_209_bool) //@nz
							var_202_bool = true;
					}
					if(var_202_bool == 0) goto Label_473;
					func_595(var_161_object, "Neutral");
					var_0_object->SetMessage(5659); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5660, 6241, 6240); //@t
					var_0_object->AddReply(5670, 6241, 6250); //@t
		}
	}
Label_565:
	for(;;) {
		bool var_194_bool;
		func_2206(var_194_bool);
		if(var_194_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2133(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_594;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_594:
			}
			bool var_220_bool;
			func_2340(var_1_object);
			if(var_220_bool != 0) {
			func_595(var_161_object, "Neutral");
			var_0_object->SetMessage(5649); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5650, 6230, 6229); //@t
			var_0_object->AddReply(5658, 6230, 6237); //@t
			goto Label_565;
		}
		return 0;
	}
	func_595(var_161_object, "Neutral");
	var_0_object->SetMessage(8187); //@t
	var_0_object->ClearReplies(); //@t
	bool var_236_bool;
	func_2441(var_1_object);
	if(var_236_bool != 0)
		var_0_object->AddReply(8191, 9041, 9014); //@t
	bool var_245_bool;
	func_2453(var_1_object);
	if(var_245_bool != 0)
		var_0_object->AddReply(8192, 9040, 9015); //@t
	bool var_254_bool;
	func_2429(var_1_object);
	if(var_254_bool != 0)
		var_0_object->AddReply(8209, 9037, 9032); //@t
	bool var_263_bool;
	func_2405(var_1_object);
	if(var_263_bool != 0)
		var_0_object->AddReply(8210, 9038, 9033); //@t
	bool var_272_bool;
	func_2417(var_1_object);
	if(var_272_bool != 0)
		var_0_object->AddReply(8212, 9039, 9035); //@t
	var_0_object->AddReply(8722, -1, 9559); //@t
	goto Label_565;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x192";


void func_2574(void)
{
	@Trace("Adding diary entry");
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 45, 2, 12127);
	bool var_40_bool; object var_41_object;
	var_35_object = var_41_object;
	func_2478(var_40_bool, var_41_object, 43);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1809(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_373_object, object var_374_object)
{
	var_0_object = var_374_object;
	var_1_object = var_373_object;
	var_3_object = false;
	if(1 != 0) {
		func_1881(var_374_object, "Neutral");
		var_0_object->SetMessage(12800); //@t
		var_0_object->ClearReplies(); //@t
		bool var_386_bool = false;
		bool var_387_bool;
		func_2381(var_1_object);
		if(var_387_bool != 0) {
			bool var_393_bool;
			func_2393(var_1_object);
			if(var_393_bool != 0)
				var_386_bool = true;
		}
		if(var_386_bool != 0)
			var_0_object->AddReply(12801, 14001, 14000); //@t
		var_0_object->AddReply(12813, -1, 14013); //@t
		goto Label_1851;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x715";
	}
Label_1851:
	bool var_405_bool;
	func_2206(var_405_bool);
	if(var_405_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2133(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1880;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1880:
		return 0;

	}
	
}


void func_2193(bool var_415_bool)
{
	func_2133("No");
	bool var_417_bool;
	@lshWaitForAnimEnd(var_417_bool);
	var_417_bool = var_415_bool;
}


void func_2068(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


// @pe
void func_2453(bool var_231_bool)
{
	int var_233_int;
	func_2168(var_233_int, "KnowPredictions");
	if(var_233_int == 1)
		var_231_bool = true;
	var_231_bool = false;
}


// @pe
void func_2328(bool var_189_bool)
{
	int var_191_int;
	func_2168(var_191_int, "ood1Mishka2");
	if(var_191_int == 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


void func_2073(bool var_35_bool, object var_36_object)
{
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	float var_45_float;
	var_36_object->GetEyesHeight(var_45_float);
	var_53_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (var_53_float + var_45_float);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	@GetEyesHeight(var_45_float);
	var_54_float = GetByIndex(var_47_cvector, 1);
	SetByIndex(var_47_cvector, 1) = (var_54_float + var_45_float);
	cvector var_48_cvector = var_46_cvector - var_47_cvector;
	var_55_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (float)0;
	var_57_float = sqrt(var_48_cvector | var_48_cvector);
	var_48_cvector /= var_57_float;
	cvector var_49_cvector = -var_48_cvector;
	cvector var_60_cvector;
	func_2158(var_60_cvector, (var_49_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_50_cvector = ((var_48_cvector * 70) + (var_60_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_47_cvector + var_50_cvector), var_49_cvector);
	var_73_float = GetByIndex(var_50_cvector, 0);
	var_74_float = GetByIndex(var_50_cvector, 2);
	@Rotate(var_73_float, var_74_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
}


void func_2202(int var_76_int)
{
	var_76_int = 2871;
}


void func_2204(string var_77_string)
{
	var_77_string = "ui/NPC_Mishka.png";
}


void func_2206(bool var_23_bool)
{
	var_23_bool = true;
}


void func_2590(void)
{
	@Trace("Adding diary entry");
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 136, 2, 15306);
	bool var_50_bool; object var_51_object;
	var_45_object = var_51_object;
	func_2478(var_50_bool, var_51_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2208(void)
{
	@SetVariable("ood1Mishka1", 1);
}


void func_2465(object var_59_object)
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
void func_2340(bool var_206_bool)
{
	int var_208_int;
	func_2168(var_208_int, "ood1Mishka3");
	if(var_208_int == 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


// @pe
void func_2214(void)
{
	@SetVariable("ood1Mishka2", 1);
}


// @pe
void func_2220(void)
{
	@SetVariable("ood1Mishka3", 1);
}


void func_2606(void)
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_2478(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_2465(var_59_object);
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


// @pe
void func_2352(bool var_160_bool)
{
	int var_162_int;
	func_2168(var_162_int, "d1q04");
	if(var_162_int == 1)
		var_160_bool = true;
	var_160_bool = false;
}


void func_49(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_2073(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_76_int;
	func_2202(var_76_int);
	var_31_object->SetNPCName(var_76_int);
	string var_77_string;
	func_2204(var_77_string);
	var_31_object->SetPhoto(var_77_string);
	int var_78_int;
	func_2557(var_78_int);
	var_31_object->SetPlayerName(var_78_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_87_object; object var_88_object;
	var_25_object = var_87_object;
	var_31_object = var_88_object;
	TaskCall(3);
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_131_bool = !var_34_bool; //@nz
		if(var_131_bool == 0) goto Label_101;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_101:
	object var_132_object;
	var_25_object = var_132_object;
	func_2129();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2610(object var_21_object)
{
	var_22_bool = GlobalVars[1];
	if(!var_22_bool) { //@nz
		int var_24_int; object var_25_object;
		var_21_object = var_25_object;
		TaskCall(2);
		func_49(var_26_object, var_24_int, var_25_object);
		TaskReturn();
		var_133_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_134_bool;
	func_2187(var_134_bool, 1);
	if(var_134_bool != 0) {
		int var_142_int; object var_143_object;
		var_21_object = var_143_object;
		TaskCall(4);
		func_335(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	bool var_286_bool;
	func_2187(var_286_bool, 3);
	if(var_286_bool != 0) {
		int var_288_int; object var_289_object;
		var_21_object = var_289_object;
		TaskCall(6);
		func_1327(var_290_object, var_288_int, var_289_object);
		TaskReturn();
		return 0;
	}
	bool var_353_bool;
	func_2187(var_353_bool, 6);
	if(var_353_bool != 0) {
		int var_355_int; object var_356_object;
		var_21_object = var_356_object;
		TaskCall(8);
		func_1746(var_357_object, var_355_int, var_356_object);
		TaskReturn();
		return 0;
	}
	bool var_415_bool;
	func_2193(var_415_bool);
}


// @pe
void func_2226(void)
{
	@SetVariable("d1q04", 2);
	func_2574();
}


// @pe
void func_180(object var_2_object, string var_30_string)
{
	bool var_31_bool;
	func_2206(var_31_bool);
	if(!var_31_bool) //@nz
		return 0;
	if(var_30_string == var_2_object)
		return 0;
	string var_34_string;
	func_2133(var_34_string);
	var_2_object = var_34_string;
}


void func_1327(object var_0_object, int var_288_int, object var_289_object)
{
	var_0_object = var_289_object;
	bool var_299_bool; object var_300_object;
	var_289_object = var_300_object;
	func_2073(var_299_bool, var_300_object);
	if(!var_299_bool) { //@nz
		var_288_int = -2;
		return 8;
	}
	object var_295_object;
	@CreateDialog(var_295_object);
	int var_302_int;
	func_2202(var_302_int);
	var_295_object->SetNPCName(var_302_int);
	string var_303_string;
	func_2204(var_303_string);
	var_295_object->SetPhoto(var_303_string);
	int var_304_int;
	func_2557(var_304_int);
	var_295_object->SetPlayerName(var_304_int);
	bool var_296_bool;
	@IsOverrideActive(var_296_bool);
	if(var_296_bool != 0) {
		var_288_int = -2;
		return 8;
	}
	@DoDialog(var_295_object);
	object var_306_object; object var_307_object;
	var_289_object = var_306_object;
	var_295_object = var_307_object;
	TaskCall(7);
	func_1390(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object);
	TaskReturn();
	bool var_298_bool;
	var_295_object->IsDialogEnd(var_298_bool);
	
	for(;;) {
		var_351_bool = !var_298_bool; //@nz
		if(var_351_bool == 0) goto Label_1379;
		@sync();
		var_295_object->IsDialogEnd(var_298_bool);
	}
	
Label_1379:
	object var_352_object;
	var_289_object = var_352_object;
	func_2129();
	@StopDialog(var_295_object);
	var_295_object->GetReturnValue(-1);
	int var_297_int = var_288_int;
}
EMIT "Stack[-4] = 0";


void func_2235(void)
{
	object var_63_object;
	func_2507(var_63_object);
	object var_62_object;
	var_63_object = var_62_object;
	float var_74_float;
	func_2173(var_74_float);
	var_62_object->AddMark("d1q04MishkaGotoSpi4ka", "pt_map_spi4ka", 0, 8644, var_74_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2364(bool var_124_bool)
{
	int var_126_int;
	func_2168(var_126_int, "d3q02");
	if(var_126_int == 1)
		var_124_bool = true;
	var_124_bool = false;
}


// @pe
void func_2429(bool var_240_bool)
{
	int var_242_int;
	func_2168(var_242_int, "KnowKapella");
	if(var_242_int == 1)
		var_240_bool = true;
	var_240_bool = false;
}


void func_2557(int var_78_int)
{
	int var_80_int;
	@GetVariable("player", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 200001;
		return 2;
	EMIT "GOTO 0xa0c";
	}
	if(var_80_int == 1) {
		var_78_int = 200002;
		return 2;
	}
	var_78_int = 200003;
}


// @pe
void func_1477(object var_2_object, string var_107_string)
{
	bool var_108_bool;
	func_2206(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_object)
		return 0;
	string var_111_string;
	func_2133(var_111_string);
	var_2_object = var_111_string;
}


// @pe
void func_2376(bool var_132_bool)
{
	var_132_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_2251(object var_78_object)
{
	object var_82_object;
	func_2507(var_82_object);
	object var_79_object;
	var_82_object = var_79_object;
	func_2524(var_79_object, "pt_map_spi4ka", (float)2);
	object var_102_object;
	func_2507(var_102_object);
	var_78_object->ShowMap(var_102_object);
}


void func_2507(object var_30_object)
{
	object var_33_object; object var_34_object;
	@GetMainOutdoorScene(var_33_object);
	if(var_33_object == null) {
		@Trace("Can't find main outdoor scene");
		var_34_object = null;
		var_34_object = var_30_object;
	}
	var_33_object->GetMap(var_34_object);
	var_34_object = var_30_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2381(bool var_49_bool)
{
	int var_51_int;
	func_2168(var_51_int, "d6q01");
	if(var_51_int == 4)
		var_49_bool = true;
	var_49_bool = false;
}


void func_335(object var_0_object, int var_142_int, object var_143_object)
{
	var_0_object = var_143_object;
	bool var_153_bool; object var_154_object;
	var_143_object = var_154_object;
	func_2073(var_153_bool, var_154_object);
	if(!var_153_bool) { //@nz
		var_142_int = -2;
		return 8;
	}
	object var_149_object;
	@CreateDialog(var_149_object);
	int var_156_int;
	func_2202(var_156_int);
	var_149_object->SetNPCName(var_156_int);
	string var_157_string;
	func_2204(var_157_string);
	var_149_object->SetPhoto(var_157_string);
	int var_158_int;
	func_2557(var_158_int);
	var_149_object->SetPlayerName(var_158_int);
	bool var_150_bool;
	@IsOverrideActive(var_150_bool);
	if(var_150_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	@DoDialog(var_149_object);
	object var_160_object; object var_161_object;
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_398(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	bool var_152_bool;
	var_149_object->IsDialogEnd(var_152_bool);
	
	for(;;) {
		var_284_bool = !var_152_bool; //@nz
		if(var_284_bool == 0) goto Label_387;
		@sync();
		var_149_object->IsDialogEnd(var_152_bool);
	}
	
Label_387:
	object var_285_object;
	var_143_object = var_285_object;
	func_2129();
	@StopDialog(var_149_object);
	var_149_object->GetReturnValue(-1);
	int var_151_int = var_142_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2129(void)
{
	@CameraSwitchToNormal();
}


void func_1746(object var_0_object, int var_355_int, object var_356_object)
{
	var_0_object = var_356_object;
	bool var_366_bool; object var_367_object;
	var_356_object = var_367_object;
	func_2073(var_366_bool, var_367_object);
	if(!var_366_bool) { //@nz
		var_355_int = -2;
		return 8;
	}
	object var_362_object;
	@CreateDialog(var_362_object);
	int var_369_int;
	func_2202(var_369_int);
	var_362_object->SetNPCName(var_369_int);
	string var_370_string;
	func_2204(var_370_string);
	var_362_object->SetPhoto(var_370_string);
	int var_371_int;
	func_2557(var_371_int);
	var_362_object->SetPlayerName(var_371_int);
	bool var_363_bool;
	@IsOverrideActive(var_363_bool);
	if(var_363_bool != 0) {
		var_355_int = -2;
		return 8;
	}
	@DoDialog(var_362_object);
	object var_373_object; object var_374_object;
	var_356_object = var_373_object;
	var_362_object = var_374_object;
	TaskCall(9);
	func_1809(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object);
	TaskReturn();
	bool var_365_bool;
	var_362_object->IsDialogEnd(var_365_bool);
	
	for(;;) {
		var_413_bool = !var_365_bool; //@nz
		if(var_413_bool == 0) goto Label_1798;
		@sync();
		var_362_object->IsDialogEnd(var_365_bool);
	}
	
Label_1798:
	object var_414_object;
	var_356_object = var_414_object;
	func_2129();
	@StopDialog(var_362_object);
	var_362_object->GetReturnValue(-1);
	int var_364_int = var_355_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_595(object var_2_object, string var_166_string)
{
	bool var_167_bool;
	func_2206(var_167_bool);
	if(!var_167_bool) //@nz
		return 0;
	if(var_166_string == var_2_object)
		return 0;
	string var_170_string;
	func_2133(var_170_string);
	var_2_object = var_170_string;
}


void func_2133(string var_25_string)
{
	@Trace("playing " + var_25_string);
	float var_28_float;
	float var_29_float;
	@lshGetAnimTimes(var_25_string, var_28_float, var_29_float);
	@lshPlayAnimation(var_28_float, var_29_float);
	@Trace("start: " + var_28_float);
	@Trace("end: " + var_29_float);
}


// @pe
void func_1881(object var_2_object, string var_32_string)
{
	bool var_33_bool;
	func_2206(var_33_bool);
	if(!var_33_bool) //@nz
		return 0;
	if(var_32_string == var_2_object)
		return 0;
	string var_36_string;
	func_2133(var_36_string);
	var_2_object = var_36_string;
}


// @pe
void func_2393(bool var_57_bool)
{
	int var_59_int;
	func_2168(var_59_int, "ood6Mishka1");
	if(var_59_int == 0) {
		var_57_bool = true;
		return 0;
	}
	var_57_bool = false;
}


// @pe
void func_2267(void)
{
}


void func_2524(object var_73_object, string var_74_string, float var_75_float)
{
	object var_83_object;
	@GetMainOutdoorScene(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_81_cvector;
	cvector var_82_cvector;
	bool var_84_bool;
	var_83_object->GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_74_string) + " doesnt exist");
	var_83_object->GetMap(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	var_73_object->SetMapParams(var_94_float, var_95_float, var_75_float);
}
EMIT "Stack[-2] = 0";


void func_2269(void)
{
	object var_30_object;
	func_2507(var_30_object);
	object var_29_object;
	var_30_object = var_29_object;
	float var_41_float;
	func_2173(var_41_float);
	var_29_object->AddMark("d3q02MishkaGotoMladVlad", "pt_map_maldvlad", 0, 11381, var_41_float);
	func_2590();
}
EMIT "Stack[-1] = 0";


// @pe
void func_2405(bool var_249_bool)
{
	int var_251_int;
	func_2168(var_251_int, "KnowLaska");
	if(var_251_int == 1)
		var_249_bool = true;
	var_249_bool = false;
}


void func_2151(void)
{
	bool var_23_bool;
	func_2206(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1390(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_306_object, object var_307_object)
{
	var_0_object = var_307_object;
	var_1_object = var_306_object;
	var_3_object = false;
	if(1 != 0) {
		func_1477(var_307_object, "Neutral");
		var_0_object->SetMessage(10004); //@t
		var_0_object->ClearReplies(); //@t
		bool var_319_bool = false;
		bool var_320_bool;
		func_2364(var_1_object);
		if(var_320_bool != 0) {
			bool var_326_bool;
			func_2376(var_1_object);
			if(var_326_bool != 0)
				var_319_bool = true;
		}
		if(var_319_bool != 0)
			var_0_object->AddReply(10211, 11256, 11257); //@t
		var_0_object->AddReply(10005, 11028, 11027); //@t
		var_0_object->AddReply(10012, 11035, 11034); //@t
		var_0_object->AddReply(10015, -1, 11037); //@t
		var_0_object->AddReply(11383, -1, 12579); //@t
		goto Label_1447;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x572";
	}
Label_1447:
	bool var_343_bool;
	func_2206(var_343_bool);
	if(var_343_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2133(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1476;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1476:
		return 0;

	}
	
}


void func_2158(cvector var_60_cvector, cvector var_61_cvector)
{
	float var_64_float = sqrt(var_61_cvector | var_61_cvector);
	if(var_64_float < 0.000001)
		var_60_cvector = [0.0, 0.0, 0.0];
	var_60_cvector = var_61_cvector / var_64_float;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_87_object, object var_88_object)
{
	var_0_object = var_88_object;
	var_3_object = false;
	if(1 != 0) {
		object var_94_object; object var_95_object;
		var_94_object = var_87_object;
		var_95_object = var_0_object;
		func_2310();
		func_180(var_88_object, "Neutral");
		var_0_object->SetMessage(457); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(458, 530, 527); //@t
		var_0_object->AddReply(459, 532, 528); //@t
		var_0_object->AddReply(460, 530, 529); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_123_bool;
	func_2206(var_123_bool);
	if(var_123_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2133(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


// @pe
void func_2417(bool var_258_bool)
{
	int var_260_int;
	func_2168(var_260_int, "KnowSpi4ka");
	if(var_260_int == 1)
		var_258_bool = true;
	var_258_bool = false;
}


// @pe
void func_2288(object var_72_object)
{
	object var_76_object;
	func_2507(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	func_2524(var_73_object, "pt_map_mladvlad", (float)2);
	object var_96_object;
	func_2507(var_96_object);
	var_72_object->ShowMap(var_96_object);
}


void func_2168(int var_51_int, string var_52_string)
{
	int var_54_int;
	@GetVariable(var_52_string, var_54_int);
	var_54_int = var_51_int;
}


void func_2173(float var_41_float)
{
	float var_43_float;
	@GetGameTime(var_43_float);
	var_43_float = var_41_float;
}


