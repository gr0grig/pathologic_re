// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_46_bool == 36971) {
				func_157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_46_bool == 36973) {
				func_157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_46_bool == 36975) {
				func_157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_94_bool;
			func_4825(var_94_bool);
			if(var_94_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 19713) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4827();
			}
			if(var_47_cvector == 19715) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_4833();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_5014();
				object var_115_object = var_1_object;
				func_5019(var_0_object);
			}
			if(var_47_cvector == 19963) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4833();
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_5014();
				object var_147_object = var_1_object;
				func_5019(var_0_object);
			}
			if(var_46_bool == 19712) {
				func_425(var_47_cvector, "Strange");
				var_0_object->SetMessage(518620); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool = false;
				bool var_165_bool;
				func_5150(var_1_object);
				if(var_165_bool != 0) {
					bool var_171_bool;
					func_5162(var_1_object);
					if(var_171_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_object->AddReply(518621, 19933, 19713); //@t
				var_0_object->AddReply(518624, -1, 19716); //@t
				return 0;
			}
			if(var_46_bool == 19933) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518828); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518829, 19935, 19934); //@t
				return 0;
			}
			if(var_46_bool == 19935) {
				func_425(var_47_cvector, "Fear");
				var_0_object->SetMessage(518830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518831, 19937, 19936); //@t
				var_0_object->AddReply(518845, 19951, 19950); //@t
				return 0;
			}
			if(var_46_bool == 19951) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518847, 19937, 19952); //@t
				var_0_object->AddReply(518848, 19940, 19953); //@t
				return 0;
			}
			if(var_46_bool == 19937) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518834, 19940, 19939); //@t
				return 0;
			}
			if(var_46_bool == 19940) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518837, 19948, 19942); //@t
				var_0_object->AddReply(518836, 19943, 19941); //@t
				return 0;
			}
			if(var_46_bool == 19943) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518841, 19954, 19946); //@t
				var_0_object->AddReply(518839, 19945, 19944); //@t
				return 0;
			}
			if(var_46_bool == 19945) {
				func_425(var_47_cvector, "Grin");
				var_0_object->SetMessage(518840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518842, -1, 19947); //@t
				return 0;
			}
			if(var_46_bool == 19954) {
				func_425(var_47_cvector, "Grin");
				var_0_object->SetMessage(518849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518850, 19956, 19955); //@t
				var_0_object->AddReply(518852, 19956, 19957); //@t
				return 0;
			}
			if(var_46_bool == 19956) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518853, 19714, 19959); //@t
				return 0;
			}
			if(var_46_bool == 19948) {
				func_425(var_47_cvector, "Grimacing");
				var_0_object->SetMessage(518843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518844, 19714, 19949); //@t
				return 0;
			}
			if(var_46_bool == 19714) {
				var_0_object->SetMessage(518622); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518623, -1, 19715); //@t
				var_0_object->AddReply(518854, 19962, 19961); //@t
				return 0;
			}
			if(var_46_bool == 19962) {
				func_425(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518856, -1, 19963); //@t
				return 0;
			}
			var_3_string = true;
			bool var_284_bool;
			func_4825(var_284_bool);
			if(var_284_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c0";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 20446) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4871();
				object var_101_object = var_1_object;
				func_4899(var_0_object);
			}
			if(var_47_cvector == 20443) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_4865();
			}
			if(var_46_bool == 20425) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519273); //@t
				var_0_object->ClearReplies(); //@t
				bool var_148_bool;
				func_5186(var_1_object);
				if(var_148_bool != 0)
					var_0_object->AddReply(519274, 20428, 20426); //@t
				bool var_159_bool;
				func_5174(var_1_object);
				if(var_159_bool != 0)
					var_0_object->AddReply(519289, 20444, 20443); //@t
				var_0_object->AddReply(519275, -1, 20427); //@t
				return 0;
			}
			if(var_46_bool == 20444) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519291, -1, 20445); //@t
				return 0;
			}
			if(var_46_bool == 20428) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519277, 20432, 20429); //@t
				var_0_object->AddReply(519278, 20431, 20430); //@t
				return 0;
			}
			if(var_46_bool == 20431) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519279); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519281, 20432, 20433); //@t
				return 0;
			}
			if(var_46_bool == 20432) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519282, 20436, 20435); //@t
				var_0_object->AddReply(527864, 20439, 29209); //@t
				return 0;
			}
			if(var_46_bool == 20436) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519284, 20441, 20437); //@t
				var_0_object->AddReply(519285, 20439, 20438); //@t
				return 0;
			}
			if(var_46_bool == 20439) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519287, 20441, 20440); //@t
				return 0;
			}
			if(var_46_bool == 20441) {
				func_943(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519292, -1, 20446); //@t
				return 0;
			}
			var_3_string = true;
			bool var_229_bool;
			func_4825(var_229_bool);
			if(var_229_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3c6";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 21486) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5041();
			}
			if(var_47_cvector == 21480) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_5041();
			}
			if(var_47_cvector == 21481) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_5041();
			}
			if(var_47_cvector == 21496) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_4915();
			}
			if(var_47_cvector == 21512) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_4921();
			}
			if(var_47_cvector == 21518) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_4939();
			}
			if(var_47_cvector == 21519) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_4927();
			}
			if(var_47_cvector == 21522) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_4933();
			}
			if(var_46_bool == 21471) {
				bool var_142_bool;
				func_5198(var_1_object);
				if(var_142_bool != 0) {
					func_1383(var_47_cvector, "Neutral");
					var_0_object->SetMessage(520279); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520280, 21473, 21472); //@t
					var_0_object->AddReply(520299, 21475, 21493); //@t
					return 0;
				}
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520300); //@t
				var_0_object->ClearReplies(); //@t
				bool var_169_bool;
				func_5210(var_1_object);
				if(var_169_bool != 0)
					var_0_object->AddReply(520301, 21497, 21496); //@t
				bool var_178_bool;
				func_5222(var_1_object);
				if(var_178_bool != 0)
					var_0_object->AddReply(520317, 21513, 21512); //@t
				bool var_187_bool;
				func_5234(var_1_object);
				if(var_187_bool != 0)
					var_0_object->AddReply(520324, 21520, 21519); //@t
				bool var_196_bool;
				func_5246(var_1_object);
				if(var_196_bool != 0)
					var_0_object->AddReply(520327, 21523, 21522); //@t
				var_0_object->AddReply(520330, -1, 21525); //@t
				return 0;
			}
			if(var_46_bool == 21523) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527820, 29160, 29159); //@t
				return 0;
			}
			if(var_46_bool == 29160) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527822, 29162, 29161); //@t
				return 0;
			}
			if(var_46_bool == 29162) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520329, -1, 21524); //@t
				return 0;
			}
			if(var_46_bool == 21520) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527824, 29164, 29163); //@t
				var_0_object->AddReply(520326, -1, 21521); //@t
				return 0;
			}
			if(var_46_bool == 29164) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527826, -1, 29165); //@t
				var_0_object->AddReply(527827, -1, 29166); //@t
				return 0;
			}
			if(var_46_bool == 21513) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520319, 21515, 21514); //@t
				return 0;
			}
			if(var_46_bool == 21515) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527818, 29158, 29157); //@t
				return 0;
			}
			if(var_46_bool == 29158) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520321, 21517, 21516); //@t
				return 0;
			}
			if(var_46_bool == 21517) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520323, -1, 21518); //@t
				return 0;
			}
			if(var_46_bool == 21497) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520303, 21499, 21498); //@t
				var_0_object->AddReply(527811, 29150, 29149); //@t
				return 0;
			}
			if(var_46_bool == 29150) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527813, 29152, 29151); //@t
				return 0;
			}
			if(var_46_bool == 29152) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527815, 29154, 29153); //@t
				return 0;
			}
			if(var_46_bool == 29154) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527817, 21499, 29155); //@t
				return 0;
			}
			if(var_46_bool == 21499) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520305, 21501, 21500); //@t
				var_0_object->AddReply(520311, 21507, 21506); //@t
				return 0;
			}
			if(var_46_bool == 21507) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520313, 21509, 21508); //@t
				return 0;
			}
			if(var_46_bool == 21509) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520315, -1, 21510); //@t
				var_0_object->AddReply(520316, -1, 21511); //@t
				return 0;
			}
			if(var_46_bool == 21501) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520307, -1, 21502); //@t
				var_0_object->AddReply(520308, 21504, 21503); //@t
				return 0;
			}
			if(var_46_bool == 21504) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520310, -1, 21505); //@t
				return 0;
			}
			if(var_46_bool == 21473) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520282, 21475, 21474); //@t
				var_0_object->AddReply(520294, 21488, 21487); //@t
				return 0;
			}
			if(var_46_bool == 21488) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520296, 21490, 21489); //@t
				var_0_object->AddReply(527807, 21477, 29143); //@t
				return 0;
			}
			if(var_46_bool == 21490) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527805, 29142, 29141); //@t
				return 0;
			}
			if(var_46_bool == 29142) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520298, 21477, 21491); //@t
				return 0;
			}
			if(var_46_bool == 21475) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520290, 21483, 21482); //@t
				var_0_object->AddReply(520284, 21477, 21476); //@t
				return 0;
			}
			if(var_46_bool == 21477) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520286, 21479, 21478); //@t
				var_0_object->AddReply(527808, 29146, 29145); //@t
				return 0;
			}
			if(var_46_bool == 29146) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527810, 21479, 29147); //@t
				return 0;
			}
			if(var_46_bool == 21479) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520288, -1, 21480); //@t
				var_0_object->AddReply(520289, -1, 21481); //@t
				return 0;
			}
			if(var_46_bool == 21483) {
				func_1383(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520292, 21477, 21484); //@t
				var_0_object->AddReply(520293, -1, 21486); //@t
				return 0;
			}
			var_3_string = true;
			bool var_433_bool;
			func_4825(var_433_bool);
			if(var_433_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x57e";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_46_bool == 22017) {
				func_2256(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520801, 29131, 22018); //@t
				var_0_object->AddReply(527799, -1, 29132); //@t
				return 0;
			}
			if(var_46_bool == 29131) {
				func_2256(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527800, -1, 29133); //@t
				var_0_object->AddReply(527801, -1, 29134); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_4825(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8e7";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 22612) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4984();
				object var_79_object = var_1_object;
				func_5062(var_0_object);
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_5035();
			}
			if(var_47_cvector == 24978) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4984();
				object var_111_object = var_1_object;
				func_5062(var_0_object);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5035();
			}
			if(var_47_cvector == 24931) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_5056();
			}
			if(var_46_bool == 22609) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521431); //@t
				var_0_object->ClearReplies(); //@t
				bool var_136_bool;
				func_5073(var_1_object);
				if(var_136_bool != 0)
					var_0_object->AddReply(521432, 22611, 22610); //@t
				bool var_147_bool;
				func_5138(var_1_object);
				if(var_147_bool != 0)
					var_0_object->AddReply(523679, 24958, 24931); //@t
				var_0_object->AddReply(521435, -1, 22613); //@t
				return 0;
			}
			if(var_46_bool == 24958) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523704, 24960, 24959); //@t
				var_0_object->AddReply(523706, -1, 24961); //@t
				var_0_object->AddReply(523707, -1, 24962); //@t
				return 0;
			}
			if(var_46_bool == 24960) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523681, 24934, 24933); //@t
				return 0;
			}
			if(var_46_bool == 24934) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523683, 24936, 24935); //@t
				var_0_object->AddReply(523701, 24957, 24956); //@t
				var_0_object->AddReply(523708, -1, 24963); //@t
				return 0;
			}
			if(var_46_bool == 24957) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523702); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523709, 24965, 24964); //@t
				return 0;
			}
			if(var_46_bool == 24965) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523710); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523712, -1, 24967); //@t
				var_0_object->AddReply(523711, -1, 24966); //@t
				return 0;
			}
			if(var_46_bool == 24936) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523685, 24968, 24937); //@t
				return 0;
			}
			if(var_46_bool == 24968) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523713); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523714, -1, 24969); //@t
				return 0;
			}
			if(var_46_bool == 22611) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523686, 24939, 24938); //@t
				var_0_object->AddReply(523690, 24941, 24942); //@t
				return 0;
			}
			if(var_46_bool == 24939) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523688, 24941, 24940); //@t
				var_0_object->AddReply(523695, 24949, 24948); //@t
				return 0;
			}
			if(var_46_bool == 24949) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523697, 24941, 24950); //@t
				var_0_object->AddReply(523698, 24952, 24951); //@t
				return 0;
			}
			if(var_46_bool == 24952) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523699); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523700, 24941, 24953); //@t
				return 0;
			}
			if(var_46_bool == 24941) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523691, 24944, 24943); //@t
				var_0_object->AddReply(523715, 24971, 24970); //@t
				return 0;
			}
			if(var_46_bool == 24971) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523718, 24944, 24973); //@t
				var_0_object->AddReply(523719, 24944, 24974); //@t
				return 0;
			}
			if(var_46_bool == 24944) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523693, 24946, 24945); //@t
				var_0_object->AddReply(523717, 24977, 24972); //@t
				return 0;
			}
			if(var_46_bool == 24977) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523720); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523722, 24980, 24979); //@t
				return 0;
			}
			if(var_46_bool == 24980) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523724, 24946, 24981); //@t
				return 0;
			}
			if(var_46_bool == 24946) {
				func_2497(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521434, -1, 22612); //@t
				var_0_object->AddReply(523721, -1, 24978); //@t
				return 0;
			}
			var_3_string = true;
			bool var_314_bool;
			func_4825(var_314_bool);
			if(var_314_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9d8";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 23120) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4993();
			}
			if(var_46_bool == 23119) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521945); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool = true;
				bool var_72_bool = false;
				bool var_73_bool;
				func_5097(var_1_object);
				if(var_73_bool != 0) {
					bool var_81_bool;
					func_5109(var_1_object);
					if(var_81_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 1) {
					bool var_83_bool = false;
					bool var_84_bool;
					func_5085(var_1_object);
					if(var_84_bool != 0) {
						bool var_90_bool;
						func_5109(var_1_object);
						if(var_90_bool != 0)
							var_83_bool = true;
					}
					if(var_83_bool != 1)
						var_71_bool = false;
				}
				if(var_71_bool != 0)
					var_0_object->AddReply(521946, 23122, 23120); //@t
				var_0_object->AddReply(521947, -1, 23121); //@t
				return 0;
			}
			if(var_46_bool == 23122) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521949, 23730, 23123); //@t
				return 0;
			}
			if(var_46_bool == 23730) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522552, 23732, 23731); //@t
				return 0;
			}
			if(var_46_bool == 23732) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522554, 23734, 23733); //@t
				var_0_object->AddReply(522556, -1, 23735); //@t
				return 0;
			}
			if(var_46_bool == 23734) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522557, 23737, 23736); //@t
				return 0;
			}
			if(var_46_bool == 23737) {
				func_3157(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522559, -1, 23738); //@t
				return 0;
			}
			var_3_string = true;
			bool var_136_bool;
			func_4825(var_136_bool);
			if(var_136_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc6c";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_47_cvector == 23259) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4999();
			}
			if(var_46_bool == 23258) {
				bool var_81_bool;
				func_5126(var_1_object);
				if(var_81_bool != 0) {
					object var_89_object; object var_90_object;
					var_89_object = var_1_object;
					var_90_object = var_0_object;
					func_5008();
					func_3535(var_47_cvector, "Neutral");
					var_0_object->SetMessage(522089); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523647, 24892, 24891); //@t
					var_0_object->AddReply(523657, 24892, 24901); //@t
					bool var_112_bool;
					func_5114(var_1_object);
					if(var_112_bool != 0)
						var_0_object->AddReply(522091, 23261, 23260); //@t
					return 0;
				}
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523598, 24834, 24833); //@t
				var_0_object->AddReply(522095, -1, 23264); //@t
				return 0;
			}
			if(var_46_bool == 24834) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523655, 24900, 24899); //@t
				return 0;
			}
			if(var_46_bool == 24900) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534554, -1, 36186); //@t
				return 0;
			}
			if(var_46_bool == 23261) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523645, 24889, 24888); //@t
				var_0_object->AddReply(523644, 24889, 24887); //@t
				return 0;
			}
			if(var_46_bool == 24889) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522093, -1, 23262); //@t
				return 0;
			}
			if(var_46_bool == 24892) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523649, 24894, 24893); //@t
				var_0_object->AddReply(523658, 24908, 24903); //@t
				return 0;
			}
			if(var_46_bool == 24908) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523663); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523664, 24905, 24909); //@t
				var_0_object->AddReply(523665, 24912, 24910); //@t
				return 0;
			}
			if(var_46_bool == 24912) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523668, 24905, 24913); //@t
				return 0;
			}
			if(var_46_bool == 24894) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523659, 24905, 24904); //@t
				var_0_object->AddReply(523666, 24896, 24911); //@t
				return 0;
			}
			if(var_46_bool == 24905) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523661, 24896, 24906); //@t
				var_0_object->AddReply(523669, 24896, 24915); //@t
				var_0_object->AddReply(523651, 24918, 24895); //@t
				return 0;
			}
			if(var_46_bool == 24918) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523671, 24896, 24919); //@t
				return 0;
			}
			if(var_46_bool == 24896) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523653, 24898, 24897); //@t
				var_0_object->AddReply(523675, 24925, 24924); //@t
				return 0;
			}
			if(var_46_bool == 24925) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523677, 24898, 24926); //@t
				return 0;
			}
			if(var_46_bool == 24898) {
				func_3535(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523654); //@t
				var_0_object->ClearReplies(); //@t
				bool var_238_bool;
				func_5114(var_1_object);
				if(!var_238_bool) //@nz
					var_0_object->AddReply(522090, -1, 23259); //@t
				var_0_object->AddReply(523678, -1, 24928); //@t
				return 0;
			}
			var_3_string = true;
			bool var_247_bool;
			func_4825(var_247_bool);
			if(var_247_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xde6";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4678();
			if(var_46_int == 42560) {
				func_4066(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_4825(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xff9";
	
	}

}


maintask task_19
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		var_46_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4137(var_45_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, int var_46_int)
	{
		if(var_46_int == 10) {
			func_4208();
			bool var_50_bool = false;
			bool var_51_bool;
			func_4422(var_51_bool);
			if(var_51_bool != 0) {
				bool var_54_bool;
				func_4177(var_54_bool);
				if(var_54_bool != 0)
					var_50_bool = true;
			}
			if(var_50_bool != 0) {
				bool var_71_bool;
				func_4157(var_71_bool);
				if(var_71_bool != 0) {
					bool var_90_bool; object var_91_object;
					object var_92_object;
					func_4685(var_92_object);
					var_92_object = var_91_object;
					func_4570(var_90_bool, var_91_object);
				}
			} else {
				func_4172(var_46_int);
				func_4199();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		func_4390();
		func_4208();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
		{
		@StopGroup0();
		func_4208();
		func_4650("Neutral");
		func_4199();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, bool var_46_bool)
	{
		if(var_46_bool != 0)
			func_4199();
		else
			func_4650("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, object var_46_object)
	{
		bool var_48_bool;
		@IsOverrideActive(var_48_bool);
		if(!var_48_bool) { //@nz
			disable OnUse;
			func_4390();
			bool var_50_bool; object var_51_object;
			var_46_object = var_51_object;
			func_4413(var_50_bool, var_51_object);
			enable OnUse;
			object var_64_object;
			var_46_object = var_64_object;
			func_5418(var_64_object);
			func_4650("Neutral");
			func_4208();
			func_4199();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_51_bool;
	func_4422(var_51_bool);
	if(!var_51_bool) goto Label_0; //@nz
}


// @pe
void func_4865(void)
{
	@SetVariable("oob3Ospina1", 1);
}


// @pe
void func_5126(bool var_716_bool)
{
	int var_718_int;
	func_4701(var_718_int, "oob11Ospina1");
	if(var_718_int == 0) {
		var_716_bool = true;
		return 0;
	}
	var_716_bool = false;
}


void func_4871(void)
{
	@SetVariable("b3q01", 2);
	object var_58_object;
	func_5351(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_4773(var_69_float);
	var_55_object->AddMark("b3q01OspinaGotoButcher", "pt_gmap_house5_07", 1, 519635, var_69_float);
	func_5271();
	bool var_95_bool;
	func_4761(var_95_bool, "quest_b3_01", "place_butcher");
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_773_int, object var_774_object)
{
	var_0_object = var_774_object;
	bool var_784_bool; object var_785_object;
	object var_786_object;
	func_4685(var_786_object);
	var_786_object = var_785_object;
	func_4512(var_784_bool, var_785_object);
	bool var_787_bool; object var_788_object;
	var_774_object = var_788_object;
	func_4427(var_787_bool, var_788_object, 70.0);
	if(!var_787_bool) { //@nz
		var_773_int = -2;
		return 8;
	}
	object var_780_object;
	@CreateDialog(var_780_object);
	int var_791_int;
	func_4819(var_791_int);
	var_780_object->SetNPCName(var_791_int);
	int var_792_int;
	func_4817(var_792_int);
	var_780_object->SetNPCDescription(var_792_int);
	string var_793_string;
	func_4821(var_793_string);
	var_780_object->SetPhoto(var_793_string);
	string var_794_string;
	func_4823(var_794_string);
	var_780_object->SetPhoto2(var_794_string);
	int var_795_int;
	func_5401(var_795_int);
	var_780_object->SetPlayerName(var_795_int);
	bool var_781_bool;
	@IsOverrideActive(var_781_bool);
	if(var_781_bool != 0) {
		var_773_int = -2;
		return 8;
	}
	@DoDialog(var_780_object);
	object var_797_object; object var_798_object;
	var_774_object = var_797_object;
	var_780_object = var_798_object;
	TaskCall(2);
	func_94(var_799_object, var_800_object, var_801_string, var_802_bool, var_797_object, var_798_object);
	TaskReturn();
	bool var_783_bool;
	var_780_object->IsDialogEnd(var_783_bool);
	
	for(;;) {
		var_830_bool = !var_783_bool; //@nz
		if(var_830_bool == 0) goto Label_83;
		@sync();
		var_780_object->IsDialogEnd(var_783_bool);
	}
	
Label_83:
	object var_831_object;
	var_774_object = var_831_object;
	func_4495();
	@StopDialog(var_780_object);
	var_780_object->GetReturnValue(-1);
	int var_782_int = var_773_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_464_int, object var_465_object)
{
	var_0_object = var_465_object;
	bool var_475_bool; object var_476_object;
	object var_477_object;
	func_4685(var_477_object);
	var_477_object = var_476_object;
	func_4512(var_475_bool, var_476_object);
	bool var_478_bool; object var_479_object;
	var_465_object = var_479_object;
	func_4427(var_478_bool, var_479_object, 70.0);
	if(!var_478_bool) { //@nz
		var_464_int = -2;
		return 8;
	}
	object var_471_object;
	@CreateDialog(var_471_object);
	int var_482_int;
	func_4819(var_482_int);
	var_471_object->SetNPCName(var_482_int);
	int var_483_int;
	func_4817(var_483_int);
	var_471_object->SetNPCDescription(var_483_int);
	string var_484_string;
	func_4821(var_484_string);
	var_471_object->SetPhoto(var_484_string);
	string var_485_string;
	func_4823(var_485_string);
	var_471_object->SetPhoto2(var_485_string);
	int var_486_int;
	func_5401(var_486_int);
	var_471_object->SetPlayerName(var_486_int);
	bool var_472_bool;
	@IsOverrideActive(var_472_bool);
	if(var_472_bool != 0) {
		var_464_int = -2;
		return 8;
	}
	@DoDialog(var_471_object);
	object var_488_object; object var_489_object;
	var_465_object = var_488_object;
	var_471_object = var_489_object;
	TaskCall(4);
	func_353(var_490_object, var_491_object, var_492_string, var_493_bool, var_488_object, var_489_object);
	TaskReturn();
	bool var_474_bool;
	var_471_object->IsDialogEnd(var_474_bool);
	
	for(;;) {
		var_531_bool = !var_474_bool; //@nz
		if(var_531_bool == 0) goto Label_342;
		@sync();
		var_471_object->IsDialogEnd(var_474_bool);
	}
	
Label_342:
	object var_532_object;
	var_465_object = var_532_object;
	func_4495();
	@StopDialog(var_471_object);
	var_471_object->GetReturnValue(-1);
	int var_473_int = var_464_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5138(bool var_584_bool)
{
	int var_586_int;
	func_4701(var_586_int, "oob8Ospina1");
	if(var_586_int == 0) {
		var_584_bool = true;
		return 0;
	}
	var_584_bool = false;
}


void func_789(object var_0_object, int var_391_int, object var_392_object)
{
	var_0_object = var_392_object;
	bool var_402_bool; object var_403_object;
	object var_404_object;
	func_4685(var_404_object);
	var_404_object = var_403_object;
	func_4512(var_402_bool, var_403_object);
	bool var_405_bool; object var_406_object;
	var_392_object = var_406_object;
	func_4427(var_405_bool, var_406_object, 70.0);
	if(!var_405_bool) { //@nz
		var_391_int = -2;
		return 8;
	}
	object var_398_object;
	@CreateDialog(var_398_object);
	int var_409_int;
	func_4819(var_409_int);
	var_398_object->SetNPCName(var_409_int);
	int var_410_int;
	func_4817(var_410_int);
	var_398_object->SetNPCDescription(var_410_int);
	string var_411_string;
	func_4821(var_411_string);
	var_398_object->SetPhoto(var_411_string);
	string var_412_string;
	func_4823(var_412_string);
	var_398_object->SetPhoto2(var_412_string);
	int var_413_int;
	func_5401(var_413_int);
	var_398_object->SetPlayerName(var_413_int);
	bool var_399_bool;
	@IsOverrideActive(var_399_bool);
	if(var_399_bool != 0) {
		var_391_int = -2;
		return 8;
	}
	@DoDialog(var_398_object);
	object var_415_object; object var_416_object;
	var_392_object = var_415_object;
	var_398_object = var_416_object;
	TaskCall(6);
	func_870(var_417_object, var_418_object, var_419_string, var_420_bool, var_415_object, var_416_object);
	TaskReturn();
	bool var_401_bool;
	var_398_object->IsDialogEnd(var_401_bool);
	
	for(;;) {
		var_460_bool = !var_401_bool; //@nz
		if(var_460_bool == 0) goto Label_859;
		@sync();
		var_398_object->IsDialogEnd(var_401_bool);
	}
	
Label_859:
	object var_461_object;
	var_392_object = var_461_object;
	func_4495();
	@StopDialog(var_398_object);
	var_398_object->GetReturnValue(-1);
	int var_400_int = var_391_int;
}
EMIT "Stack[-4] = 0";


void func_5401(int var_224_int)
{
	int var_226_int;
	@GetVariable("branch", var_226_int);
	if(var_226_int == 0) {
		var_224_int = 1;
		return 2;
	EMIT "GOTO 0x1528";
	}
	if(var_226_int == 1) {
		var_224_int = 2;
		return 2;
	}
	var_224_int = 3;
}


void func_3356(object var_0_object, int var_685_int, object var_686_object)
{
	var_0_object = var_686_object;
	bool var_696_bool; object var_697_object;
	object var_698_object;
	func_4685(var_698_object);
	var_698_object = var_697_object;
	func_4512(var_696_bool, var_697_object);
	bool var_699_bool; object var_700_object;
	var_686_object = var_700_object;
	func_4427(var_699_bool, var_700_object, 70.0);
	if(!var_699_bool) { //@nz
		var_685_int = -2;
		return 8;
	}
	object var_692_object;
	@CreateDialog(var_692_object);
	int var_703_int;
	func_4819(var_703_int);
	var_692_object->SetNPCName(var_703_int);
	int var_704_int;
	func_4817(var_704_int);
	var_692_object->SetNPCDescription(var_704_int);
	string var_705_string;
	func_4821(var_705_string);
	var_692_object->SetPhoto(var_705_string);
	string var_706_string;
	func_4823(var_706_string);
	var_692_object->SetPhoto2(var_706_string);
	int var_707_int;
	func_5401(var_707_int);
	var_692_object->SetPlayerName(var_707_int);
	bool var_693_bool;
	@IsOverrideActive(var_693_bool);
	if(var_693_bool != 0) {
		var_685_int = -2;
		return 8;
	}
	@DoDialog(var_692_object);
	object var_709_object; object var_710_object;
	var_686_object = var_709_object;
	var_692_object = var_710_object;
	TaskCall(16);
	func_3437(var_711_object, var_712_object, var_713_string, var_714_bool, var_709_object, var_710_object);
	TaskReturn();
	bool var_695_bool;
	var_692_object->IsDialogEnd(var_695_bool);
	
	for(;;) {
		var_766_bool = !var_695_bool; //@nz
		if(var_766_bool == 0) goto Label_3426;
		@sync();
		var_692_object->IsDialogEnd(var_695_bool);
	}
	
Label_3426:
	object var_767_object;
	var_686_object = var_767_object;
	func_4495();
	@StopDialog(var_692_object);
	var_692_object->GetReturnValue(-1);
	int var_694_int = var_685_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5150(bool var_505_bool)
{
	int var_507_int;
	func_4701(var_507_int, "b5q01");
	if(var_507_int == 1)
		var_505_bool = true;
	var_505_bool = false;
}


// @pe
void func_4899(object var_102_object)
{
	object var_106_object;
	func_5351(var_106_object);
	object var_103_object;
	var_106_object = var_103_object;
	func_5368(var_103_object, "pt_gmap_house5_07", (float)2);
	object var_126_object;
	func_5351(var_126_object);
	var_102_object->ShowMap(var_126_object);
}


void func_4388(bool var_99_bool)
{
	var_99_bool = true;
}


void func_4390(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2343(object var_0_object, int var_535_int, object var_536_object)
{
	var_0_object = var_536_object;
	bool var_546_bool; object var_547_object;
	object var_548_object;
	func_4685(var_548_object);
	var_548_object = var_547_object;
	func_4512(var_546_bool, var_547_object);
	bool var_549_bool; object var_550_object;
	var_536_object = var_550_object;
	func_4427(var_549_bool, var_550_object, 70.0);
	if(!var_549_bool) { //@nz
		var_535_int = -2;
		return 8;
	}
	object var_542_object;
	@CreateDialog(var_542_object);
	int var_553_int;
	func_4819(var_553_int);
	var_542_object->SetNPCName(var_553_int);
	int var_554_int;
	func_4817(var_554_int);
	var_542_object->SetNPCDescription(var_554_int);
	string var_555_string;
	func_4821(var_555_string);
	var_542_object->SetPhoto(var_555_string);
	string var_556_string;
	func_4823(var_556_string);
	var_542_object->SetPhoto2(var_556_string);
	int var_557_int;
	func_5401(var_557_int);
	var_542_object->SetPlayerName(var_557_int);
	bool var_543_bool;
	@IsOverrideActive(var_543_bool);
	if(var_543_bool != 0) {
		var_535_int = -2;
		return 8;
	}
	@DoDialog(var_542_object);
	object var_559_object; object var_560_object;
	var_536_object = var_559_object;
	var_542_object = var_560_object;
	TaskCall(12);
	func_2424(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object);
	TaskReturn();
	bool var_545_bool;
	var_542_object->IsDialogEnd(var_545_bool);
	
	for(;;) {
		var_604_bool = !var_545_bool; //@nz
		if(var_604_bool == 0) goto Label_2413;
		@sync();
		var_542_object->IsDialogEnd(var_545_bool);
	}
	
Label_2413:
	object var_605_object;
	var_536_object = var_605_object;
	func_4495();
	@StopDialog(var_542_object);
	var_542_object->GetReturnValue(-1);
	int var_544_int = var_535_int;
}
EMIT "Stack[-4] = 0";


void func_4137(object var_0_object)
{
	bool var_47_bool;
	func_4422(var_47_bool);
	if(!var_47_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4265();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4319();
	}
}
EMIT "Return(); Pop(0)";


void func_4650(string var_54_string)
{
	float var_57_float; float var_58_float;
	@lshGetAnimTimes(var_54_string, var_57_float, var_58_float);
	@lshPlayAnimation(var_57_float, var_58_float, false);
}


// @pe
void func_5162(bool var_511_bool)
{
	int var_513_int;
	func_4701(var_513_int, "oob5Ospina1");
	if(var_513_int == 0) {
		var_511_bool = true;
		return 0;
	}
	var_511_bool = false;
}


// @pe
void func_5418(object var_64_object)
{
	var_65_bool = GlobalVars[1];
	if(!var_65_bool) { //@nz
		int var_67_int; object var_68_object;
		var_64_object = var_68_object;
		TaskCall(9);
		func_2117(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_280_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_281_bool;
	func_4787(var_281_bool, 2);
	if(var_281_bool != 0) {
		int var_284_int; object var_285_object;
		var_64_object = var_285_object;
		TaskCall(7);
		func_1184(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 0;
	}
	bool var_389_bool;
	func_4787(var_389_bool, 3);
	if(var_389_bool != 0) {
		int var_391_int; object var_392_object;
		var_64_object = var_392_object;
		TaskCall(5);
		func_789(var_393_object, var_391_int, var_392_object);
		TaskReturn();
		return 0;
	}
	bool var_462_bool;
	func_4787(var_462_bool, 5);
	if(var_462_bool != 0) {
		int var_464_int; object var_465_object;
		var_64_object = var_465_object;
		TaskCall(3);
		func_272(var_466_object, var_464_int, var_465_object);
		TaskReturn();
		return 0;
	}
	bool var_533_bool;
	func_4787(var_533_bool, 8);
	if(var_533_bool != 0) {
		int var_535_int; object var_536_object;
		var_64_object = var_536_object;
		TaskCall(11);
		func_2343(var_537_object, var_535_int, var_536_object);
		TaskReturn();
		return 0;
	}
	bool var_606_bool;
	func_4787(var_606_bool, 10);
	if(var_606_bool != 0) {
		int var_608_int; object var_609_object;
		var_64_object = var_609_object;
		TaskCall(13);
		func_2986(var_610_object, var_608_int, var_609_object);
		TaskReturn();
		return 0;
	}
	bool var_683_bool;
	func_4787(var_683_bool, 11);
	if(var_683_bool != 0) {
		int var_685_int; object var_686_object;
		var_64_object = var_686_object;
		TaskCall(15);
		func_3356(var_687_object, var_685_int, var_686_object);
		TaskReturn();
		return 0;
	}
	bool var_768_bool = false;
	bool var_769_bool;
	func_4787(var_769_bool, 12);
	if(var_769_bool != 0) {
		var_771_bool = GlobalVars[2];
		if(!var_771_bool) //@nz
			var_768_bool = true;
	}
	if(var_768_bool != 0) {
		int var_773_int; object var_774_object;
		var_64_object = var_774_object;
		TaskCall(1);
		func_13(var_775_object, var_773_int, var_774_object);
		TaskReturn();
		var_832_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_833_int; object var_834_object;
	var_64_object = var_834_object;
	TaskCall(17);
	func_3927(var_835_object, var_833_int, var_834_object);
	TaskReturn();
}


void func_4395(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


void func_4657(string var_244_string, bool var_245_bool)
{
	float var_250_float; float var_251_float;
	@lshGetAnimTimes(var_244_string, var_250_float, var_251_float);
	@lshPlayAnimation(var_250_float, var_251_float, var_245_bool);
}


// @pe
void func_4915(void)
{
	@SetVariable("oob2Ospina1", 1);
}


void func_4403(bool var_54_bool, cvector var_55_cvector)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	bool var_61_bool;
	@Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
}


// @pe
void func_5174(bool var_440_bool)
{
	int var_442_int;
	func_4701(var_442_int, "oob3Ospina1");
	if(var_442_int == 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


void func_4663(bool var_112_bool, string var_113_string)
{
	bool var_115_bool;
	bool var_116_bool;
	func_4825(var_116_bool);
	if(var_116_bool != 0) {
		@lshHasSpeech(var_115_bool, var_113_string);
		if(var_115_bool != 0) {
			@lshPlaySpeech(var_113_string);
			var_112_bool = true;
		}
	}
	var_112_bool = false;
}


// @pe
void func_4921(void)
{
	@SetVariable("oob2Ospina2", 1);
}


void func_4157(bool var_71_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) //@nz
		var_71_bool = false;
	bool var_76_bool; object var_77_object;
	var_73_object = var_77_object;
	func_4413(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
}
EMIT "Stack[-1] = 0";


void func_4413(bool var_50_bool, object var_51_object)
{
	cvector var_53_cvector;
	var_51_object->GetPosition(var_53_cvector);
	bool var_54_bool; cvector var_55_cvector;
	var_53_cvector = var_55_cvector;
	func_4403(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
}


// @pe
void func_4927(void)
{
	@SetVariable("oob2Ospina3", 1);
}


// @pe
void func_5186(bool var_431_bool)
{
	int var_433_int;
	func_4701(var_433_int, "b3q01");
	if(var_433_int == 1)
		var_431_bool = true;
	var_431_bool = false;
}


void func_2117(object var_0_object, int var_67_int, object var_68_object)
{
	var_0_object = var_68_object;
	bool var_78_bool; object var_79_object;
	object var_80_object;
	func_4685(var_80_object);
	var_80_object = var_79_object;
	func_4512(var_78_bool, var_79_object);
	bool var_173_bool; object var_174_object;
	var_68_object = var_174_object;
	func_4427(var_173_bool, var_174_object, 70.0);
	if(!var_173_bool) { //@nz
		var_67_int = -2;
		return 8;
	}
	object var_74_object;
	@CreateDialog(var_74_object);
	int var_220_int;
	func_4819(var_220_int);
	var_74_object->SetNPCName(var_220_int);
	int var_221_int;
	func_4817(var_221_int);
	var_74_object->SetNPCDescription(var_221_int);
	string var_222_string;
	func_4821(var_222_string);
	var_74_object->SetPhoto(var_222_string);
	string var_223_string;
	func_4823(var_223_string);
	var_74_object->SetPhoto2(var_223_string);
	int var_224_int;
	func_5401(var_224_int);
	var_74_object->SetPlayerName(var_224_int);
	bool var_75_bool;
	@IsOverrideActive(var_75_bool);
	if(var_75_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	@DoDialog(var_74_object);
	object var_233_object; object var_234_object;
	var_68_object = var_233_object;
	var_74_object = var_234_object;
	TaskCall(10);
	func_2198(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object);
	TaskReturn();
	bool var_77_bool;
	var_74_object->IsDialogEnd(var_77_bool);
	
	for(;;) {
		var_272_bool = !var_77_bool; //@nz
		if(var_272_bool == 0) goto Label_2187;
		@sync();
		var_74_object->IsDialogEnd(var_77_bool);
	}
	
Label_2187:
	object var_273_object;
	var_68_object = var_273_object;
	func_4495();
	@StopDialog(var_74_object);
	var_74_object->GetReturnValue(-1);
	int var_76_int = var_67_int;
}
EMIT "Stack[-4] = 0";


void func_4678(void)
{
	bool var_49_bool;
	func_4825(var_49_bool);
	if(var_49_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4933(void)
{
	@SetVariable("oob2Ospina4", 1);
}


void func_4422(bool var_47_bool)
{
	bool var_49_bool;
	@IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
}


void func_4427(bool var_173_bool, object var_174_object, float var_175_float)
{
	cvector var_186_cvector; bool var_193_bool;
	var_174_object->GetPosition(var_186_cvector);
	float var_185_float;
	var_174_object->GetEyesHeight(var_185_float);
	var_194_float = GetByIndex(var_186_cvector, 1);
	SetByIndex(var_186_cvector, 1) = (var_194_float + var_185_float);
	cvector var_187_cvector;
	@GetPosition(var_187_cvector);
	@GetEyesHeight(var_185_float);
	var_195_float = GetByIndex(var_187_cvector, 1);
	SetByIndex(var_187_cvector, 1) = (var_195_float + var_185_float);
	cvector var_188_cvector = var_186_cvector - var_187_cvector;
	var_196_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (float)0;
	var_198_float = sqrt(var_188_cvector | var_188_cvector);
	var_188_cvector /= var_198_float;
	cvector var_189_cvector = -var_188_cvector;
	cvector var_200_cvector;
	func_4691(var_200_cvector, (var_189_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_190_cvector = ((var_188_cvector * var_175_float) + (var_200_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_192_bool;
	@IsOverrideActive(var_192_bool);
	if(var_192_bool != 0)
		var_173_bool = false;
	@StopWorld();
	@CameraTransit((var_187_cvector + var_190_cvector), var_189_cvector);
	var_213_float = GetByIndex(var_190_cvector, 0);
	var_214_float = GetByIndex(var_190_cvector, 2);
	@Rotate(var_213_float, var_214_float);
	bool var_215_bool;
	func_4825(var_215_bool);
	if(var_215_bool != 0) {
	} else {
		@HasAnimationTrack(var_193_bool, "head");
		if(var_193_bool == 0) goto Label_4489;
		@LookAsyncCamera("head");
	}
Label_4489:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_173_bool = true;
	
}


void func_4172(object var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_123_float, var_124_float);
}


void func_4685(object var_80_object)
{
	object var_82_object;
	@self(var_82_object);
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5198(bool var_315_bool)
{
	int var_317_int;
	func_4701(var_317_int, "b2q01");
	if(var_317_int == 2)
		var_315_bool = true;
	var_315_bool = false;
}


void func_4939(void)
{
	object var_95_object;
	int var_96_int;
	func_4701(var_96_int, "b2TravnikMark");
	if(var_96_int == 0) {
		@SetVariable("b2TravnikMark", 1);
		object var_104_object;
		func_5351(var_104_object);
		var_104_object = var_95_object;
		float var_115_float;
		func_4773(var_115_float);
		var_95_object->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, var_115_float);
		float var_122_float;
		func_4773(var_122_float);
		var_95_object->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, var_122_float);
		float var_127_float;
		func_4773(var_127_float);
		var_95_object->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, var_127_float);
		var_95_object = null;
	}
}


void func_4177(bool var_54_bool)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	if(!var_57_object) { //@nz
		var_54_bool = false;
		return 4;
	}
	float var_61_float; object var_62_object;
	func_4395(var_61_float, var_62_object);
	if(var_61_float > 90000.0) {
		var_54_bool = false;
		return 4;
	}
	bool var_58_bool;
	@CanSee(var_58_bool, var_62_object);
	var_58_bool = var_54_bool;
}
EMIT "Stack[-2] = 0";


void func_4691(cvector var_200_cvector, cvector var_201_cvector)
{
	float var_204_float = sqrt(var_201_cvector | var_201_cvector);
	if(var_204_float < 0.000001)
		var_200_cvector = [0.0, 0.0, 0.0];
	var_200_cvector = var_201_cvector / var_204_float;
}


// @pe
void func_3157(object var_2_object, string var_639_string)
{
	bool var_640_bool;
	func_4825(var_640_bool);
	if(!var_640_bool) //@nz
		return 0;
	if(var_639_string == var_2_object)
		return 0;
	string var_643_string; bool var_644_bool;
	var_639_string = var_643_string;
	if(var_639_string == "")
		var_644_bool = false;
	else
		var_644_bool = true;
	func_4657(var_643_string, var_644_bool);
	var_2_object = var_639_string;
	
}


void func_3927(object var_0_object, int var_833_int, object var_834_object)
{
	var_0_object = var_834_object;
	bool var_844_bool; object var_845_object;
	object var_846_object;
	func_4685(var_846_object);
	var_846_object = var_845_object;
	func_4512(var_844_bool, var_845_object);
	bool var_847_bool; object var_848_object;
	var_834_object = var_848_object;
	func_4427(var_847_bool, var_848_object, 70.0);
	if(!var_847_bool) { //@nz
		var_833_int = -2;
		return 8;
	}
	object var_840_object;
	@CreateDialog(var_840_object);
	int var_851_int;
	func_4819(var_851_int);
	var_840_object->SetNPCName(var_851_int);
	int var_852_int;
	func_4817(var_852_int);
	var_840_object->SetNPCDescription(var_852_int);
	string var_853_string;
	func_4821(var_853_string);
	var_840_object->SetPhoto(var_853_string);
	string var_854_string;
	func_4823(var_854_string);
	var_840_object->SetPhoto2(var_854_string);
	int var_855_int;
	func_5401(var_855_int);
	var_840_object->SetPlayerName(var_855_int);
	bool var_841_bool;
	@IsOverrideActive(var_841_bool);
	if(var_841_bool != 0) {
		var_833_int = -2;
		return 8;
	}
	@DoDialog(var_840_object);
	object var_857_object; object var_858_object;
	var_834_object = var_857_object;
	var_840_object = var_858_object;
	TaskCall(18);
	func_4008(var_859_object, var_860_object, var_861_string, var_862_bool, var_857_object, var_858_object);
	TaskReturn();
	bool var_843_bool;
	var_840_object->IsDialogEnd(var_843_bool);
	
	for(;;) {
		var_887_bool = !var_843_bool; //@nz
		if(var_887_bool == 0) goto Label_3997;
		@sync();
		var_840_object->IsDialogEnd(var_843_bool);
	}
	
Label_3997:
	object var_888_object;
	var_834_object = var_888_object;
	func_4495();
	@StopDialog(var_840_object);
	var_840_object->GetReturnValue(-1);
	int var_842_int = var_833_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5210(bool var_348_bool)
{
	int var_350_int;
	func_4701(var_350_int, "oob2Ospina1");
	if(var_350_int == 0) {
		var_348_bool = true;
		return 0;
	}
	var_348_bool = false;
}


void func_4701(int var_317_int, string var_318_string)
{
	int var_320_int;
	@GetVariable(var_318_string, var_320_int);
	var_320_int = var_317_int;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_797_object, object var_798_object)
{
	var_0_object = var_798_object;
	var_1_object = var_797_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_798_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_822_bool;
	func_4825(var_822_bool);
	if(var_822_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
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
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_488_object, object var_489_object)
{
	var_0_object = var_489_object;
	var_1_object = var_488_object;
	var_3_string = false;
	if(1 != 0) {
		func_425(var_489_object, "Strange");
		var_0_object->SetMessage(518620); //@t
		var_0_object->ClearReplies(); //@t
		bool var_504_bool = false;
		bool var_505_bool;
		func_5150(var_1_object);
		if(var_505_bool != 0) {
			bool var_511_bool;
			func_5162(var_1_object);
			if(var_511_bool != 0)
				var_504_bool = true;
		}
		if(var_504_bool != 0)
			var_0_object->AddReply(518621, 19933, 19713); //@t
		var_0_object->AddReply(518624, -1, 19716); //@t
		goto Label_395;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_395:
	bool var_523_bool;
	func_4825(var_523_bool);
	if(var_523_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_424;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_424:
		return 0;

	}
	
}


void func_4706(object var_62_object, string var_63_string)
{
	object var_66_object;
	@GetMainOutdoorScene(var_66_object);
	object var_67_object;
	@AddBlankActor(var_67_object, var_66_object, var_63_string, (var_63_string + ".bin"));
	var_67_object = var_62_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5222(bool var_357_bool)
{
	int var_359_int;
	func_4701(var_359_int, "oob2Ospina2");
	if(var_359_int == 0) {
		var_357_bool = true;
		return 0;
	}
	var_357_bool = false;
}


void func_4199(void)
{
	float var_61_float;
	@rand(var_61_float, 8, 16);
	@SetTimer(10, var_61_float);
}


// @pe
void func_870(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_415_object, object var_416_object)
{
	var_0_object = var_416_object;
	var_1_object = var_415_object;
	var_3_string = false;
	if(1 != 0) {
		func_943(var_416_object, "Neutral");
		var_0_object->SetMessage(519273); //@t
		var_0_object->ClearReplies(); //@t
		bool var_431_bool;
		func_5186(var_1_object);
		if(var_431_bool != 0)
			var_0_object->AddReply(519274, 20428, 20426); //@t
		bool var_440_bool;
		func_5174(var_1_object);
		if(var_440_bool != 0)
			var_0_object->AddReply(519289, 20444, 20443); //@t
		var_0_object->AddReply(519275, -1, 20427); //@t
		goto Label_913;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x36a";
	}
Label_913:
	bool var_452_bool;
	func_4825(var_452_bool);
	if(var_452_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_942;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_942:
		return 0;

	}
	
}


// @pe
void func_1383(object var_2_object, string var_323_string)
{
	bool var_324_bool;
	func_4825(var_324_bool);
	if(!var_324_bool) //@nz
		return 0;
	if(var_323_string == var_2_object)
		return 0;
	string var_327_string; bool var_328_bool;
	var_323_string = var_327_string;
	if(var_323_string == "")
		var_328_bool = false;
	else
		var_328_bool = true;
	func_4657(var_327_string, var_328_bool);
	var_2_object = var_323_string;
	
}


void func_4717(int var_98_int, int var_99_int)
{
	object var_101_object;
	@CreateIntVector(var_101_object);
	var_101_object->add(var_98_int);
	var_101_object->add(var_99_int);
	@SendWorldWndMessage(3, var_101_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3437(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_709_object, object var_710_object)
{
	var_0_object = var_710_object;
	var_1_object = var_709_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_716_bool;
		func_5126(var_1_object);
		if(var_716_bool != 0) {
			object var_722_object; object var_723_object;
			var_722_object = var_1_object;
			var_723_object = var_0_object;
			func_5008();
			func_3535(var_710_object, "Neutral");
			var_0_object->SetMessage(522089); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523647, 24892, 24891); //@t
			var_0_object->AddReply(523657, 24892, 24901); //@t
			bool var_741_bool;
			func_5114(var_1_object);
			if(var_741_bool != 0)
				var_0_object->AddReply(522091, 23261, 23260); //@t
		} else {
					func_3535(var_710_object, "Neutral");
					var_0_object->SetMessage(522094); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523598, 24834, 24833); //@t
					var_0_object->AddReply(522095, -1, 23264); //@t
		}
	}
	for(;;) {
		bool var_750_bool;
		func_4825(var_750_bool);
		if(var_750_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4650(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3534;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3534:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd71";


void func_4208(void)
{
	@KillTimer(10);
}


// @pe
void func_5234(bool var_366_bool)
{
	int var_368_int;
	func_4701(var_368_int, "oob2Ospina3");
	if(var_368_int == 0) {
		var_366_bool = true;
		return 0;
	}
	var_366_bool = false;
}


// @pe
void func_4984(void)
{
	@SetVariable("b8q01", 6);
	func_5297();
}


void func_4729(object var_87_object, object var_88_object, int var_89_int)
{
	int var_93_int;
	var_88_object->GetItemID(var_93_int);
	int var_94_int;
	@GetInvItemProperty(var_94_int, var_93_int, "Category");
	bool var_95_bool;
	var_87_object->AddItem(var_95_bool, var_88_object, var_94_int, var_89_int);
	if(!var_95_bool) { //@nz
		var_87_object->DropItems(var_88_object, var_89_int);
	} else {
		int var_98_int; int var_99_int;
		var_93_int = var_98_int;
		var_89_int = var_99_int;
		func_4717(var_98_int, var_99_int);
	}
	
}


// @pe
void func_2424(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_559_object, object var_560_object)
{
	var_0_object = var_560_object;
	var_1_object = var_559_object;
	var_3_string = false;
	if(1 != 0) {
		func_2497(var_560_object, "Neutral");
		var_0_object->SetMessage(521431); //@t
		var_0_object->ClearReplies(); //@t
		bool var_575_bool;
		func_5073(var_1_object);
		if(var_575_bool != 0)
			var_0_object->AddReply(521432, 22611, 22610); //@t
		bool var_584_bool;
		func_5138(var_1_object);
		if(var_584_bool != 0)
			var_0_object->AddReply(523679, 24958, 24931); //@t
		var_0_object->AddReply(521435, -1, 22613); //@t
		goto Label_2467;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x97c";
	}
Label_2467:
	bool var_596_bool;
	func_4825(var_596_bool);
	if(var_596_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2496;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2496:
		return 0;

	}
	
}


// @pe
void func_5246(bool var_375_bool)
{
	int var_377_int;
	func_4701(var_377_int, "oob2Ospina4");
	if(var_377_int == 0) {
		var_375_bool = true;
		return 0;
	}
	var_375_bool = false;
}


// @pe
void func_4993(void)
{
	@SetVariable("oob10Ospina1", 1);
}


// @pe
void func_4999(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_5258();
}


void func_5258(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 315, 1, 522057);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_5323(var_61_bool, var_62_object, 313);
}
EMIT "Stack[-1] = 0";


void func_4748(object var_82_object, string var_83_string, int var_84_int)
{
	object var_86_object;
	@CreateInvItem(var_86_object);
	var_86_object->SetItemName(var_83_string);
	object var_87_object; object var_88_object; int var_89_int;
	var_82_object = var_87_object;
	var_86_object = var_88_object;
	var_84_int = var_89_int;
	func_4729(var_87_object, var_88_object, var_89_int);
}
EMIT "Stack[-1] = 0";


void func_4495(void)
{
	bool var_275_bool;
	@CameraSwitchToNormal();
	bool var_276_bool;
	func_4825(var_276_bool);
	if(var_276_bool != 0) {
	} else {
		@HasAnimationTrack(var_275_bool, "head");
		if(var_275_bool == 0) goto Label_4511;
		@UnlookAsync("head");
	}
Label_4511:
	
}


// @pe
void func_5008(void)
{
	@SetVariable("oob11Ospina1", 1);
}


// @pe
void func_2198(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_233_object, object var_234_object)
{
	var_0_object = var_234_object;
	var_1_object = var_233_object;
	var_3_string = false;
	if(1 != 0) {
		func_2256(var_234_object, "Neutral");
		var_0_object->SetMessage(520800); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520801, 29131, 22018); //@t
		var_0_object->AddReply(527799, -1, 29132); //@t
		goto Label_2226;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x89a";
	}
Label_2226:
	bool var_259_bool;
	func_4825(var_259_bool);
	if(var_259_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2255;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2255:
		return 0;

	}
	
}


void func_5271(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 223, 1, 519636);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_5323(var_77_bool, var_78_object, 221);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5014(void)
{
	func_5284();
}


void func_4761(bool var_56_bool, string var_57_string, string var_58_string)
{
	object var_60_object;
	@FindActor(var_60_object, var_57_string);
	if(var_60_object == null)
		var_56_bool = false;
	@Trigger(var_60_object, var_58_string);
	var_56_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5019(object var_116_object)
{
	object var_120_object;
	func_5351(var_120_object);
	object var_117_object;
	var_120_object = var_117_object;
	func_5368(var_117_object, "pt_gatherer3", (float)2);
	object var_140_object;
	func_5351(var_140_object);
	var_116_object->ShowMap(var_140_object);
}


// @pe
void func_157(object var_2_object, string var_804_string)
{
	bool var_805_bool;
	func_4825(var_805_bool);
	if(!var_805_bool) //@nz
		return 0;
	if(var_804_string == var_2_object)
		return 0;
	string var_808_string; bool var_809_bool;
	var_804_string = var_808_string;
	if(var_804_string == "")
		var_809_bool = false;
	else
		var_809_bool = true;
	func_4657(var_808_string, var_809_bool);
	var_2_object = var_804_string;
	
}


void func_1184(object var_0_object, int var_284_int, object var_285_object)
{
	var_0_object = var_285_object;
	bool var_295_bool; object var_296_object;
	object var_297_object;
	func_4685(var_297_object);
	var_297_object = var_296_object;
	func_4512(var_295_bool, var_296_object);
	bool var_298_bool; object var_299_object;
	var_285_object = var_299_object;
	func_4427(var_298_bool, var_299_object, 70.0);
	if(!var_298_bool) { //@nz
		var_284_int = -2;
		return 8;
	}
	object var_291_object;
	@CreateDialog(var_291_object);
	int var_302_int;
	func_4819(var_302_int);
	var_291_object->SetNPCName(var_302_int);
	int var_303_int;
	func_4817(var_303_int);
	var_291_object->SetNPCDescription(var_303_int);
	string var_304_string;
	func_4821(var_304_string);
	var_291_object->SetPhoto(var_304_string);
	string var_305_string;
	func_4823(var_305_string);
	var_291_object->SetPhoto2(var_305_string);
	int var_306_int;
	func_5401(var_306_int);
	var_291_object->SetPlayerName(var_306_int);
	bool var_292_bool;
	@IsOverrideActive(var_292_bool);
	if(var_292_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	@DoDialog(var_291_object);
	object var_308_object; object var_309_object;
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(8);
	func_1265(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	bool var_294_bool;
	var_291_object->IsDialogEnd(var_294_bool);
	
	for(;;) {
		var_387_bool = !var_294_bool; //@nz
		if(var_387_bool == 0) goto Label_1254;
		@sync();
		var_291_object->IsDialogEnd(var_294_bool);
	}
	
Label_1254:
	object var_388_object;
	var_285_object = var_388_object;
	func_4495();
	@StopDialog(var_291_object);
	var_291_object->GetReturnValue(-1);
	int var_293_int = var_284_int;
}
EMIT "Stack[-4] = 0";


void func_4512(bool var_78_bool, object var_79_object)
{
	int var_85_int; int var_86_int;
	@GetVariable("voice_common", var_85_int);
	if(var_85_int != 0) {
		bool var_89_bool; object var_90_object;
		var_79_object = var_90_object;
		func_4570(var_89_bool, var_90_object);
		if(!var_89_bool) { //@nz
			bool var_120_bool; object var_121_object;
			var_79_object = var_121_object;
			func_4607(var_120_bool, var_121_object);
			if(!var_120_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@irand(var_86_int, 2);
		if(var_86_int != 0)
			@SetVariable("voice_common", ((var_85_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_165_bool; object var_166_object;
		var_79_object = var_166_object;
		func_4607(var_165_bool, var_166_object);
		if(!var_165_bool) { //@nz
			bool var_168_bool; object var_169_object;
			var_79_object = var_169_object;
			func_4570(var_168_bool, var_169_object);
			if(!var_168_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4568;
	
Label_4568:
	var_78_bool = true;
	
}


void func_5284(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 240, 1, 519745);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_5323(var_97_bool, var_98_object, 238);
}
EMIT "Stack[-1] = 0";


void func_4773(float var_115_float)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_117_float = var_115_float;
}


// @pe
void func_4008(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_857_object, object var_858_object)
{
	var_0_object = var_858_object;
	var_1_object = var_857_object;
	var_3_string = false;
	if(1 != 0) {
		func_4066(var_858_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_4036;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfac";
	}
Label_4036:
	bool var_879_bool;
	func_4825(var_879_bool);
	if(var_879_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4065;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4065:
		return 0;

	}
	
}


void func_4778(int var_133_int)
{
	float var_135_float;
	@GetGameTime(var_135_float);
	var_133_int = 1 + (var_135_float / 24);
}


// @pe
void func_425(object var_2_object, string var_495_string)
{
	bool var_496_bool;
	func_4825(var_496_bool);
	if(!var_496_bool) //@nz
		return 0;
	if(var_495_string == var_2_object)
		return 0;
	string var_499_string; bool var_500_bool;
	var_495_string = var_499_string;
	if(var_495_string == "")
		var_500_bool = false;
	else
		var_500_bool = true;
	func_4657(var_499_string, var_500_bool);
	var_2_object = var_495_string;
	
}


void func_2986(object var_0_object, int var_608_int, object var_609_object)
{
	var_0_object = var_609_object;
	bool var_619_bool; object var_620_object;
	object var_621_object;
	func_4685(var_621_object);
	var_621_object = var_620_object;
	func_4512(var_619_bool, var_620_object);
	bool var_622_bool; object var_623_object;
	var_609_object = var_623_object;
	func_4427(var_622_bool, var_623_object, 70.0);
	if(!var_622_bool) { //@nz
		var_608_int = -2;
		return 8;
	}
	object var_615_object;
	@CreateDialog(var_615_object);
	int var_626_int;
	func_4819(var_626_int);
	var_615_object->SetNPCName(var_626_int);
	int var_627_int;
	func_4817(var_627_int);
	var_615_object->SetNPCDescription(var_627_int);
	string var_628_string;
	func_4821(var_628_string);
	var_615_object->SetPhoto(var_628_string);
	string var_629_string;
	func_4823(var_629_string);
	var_615_object->SetPhoto2(var_629_string);
	int var_630_int;
	func_5401(var_630_int);
	var_615_object->SetPlayerName(var_630_int);
	bool var_616_bool;
	@IsOverrideActive(var_616_bool);
	if(var_616_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	@DoDialog(var_615_object);
	object var_632_object; object var_633_object;
	var_609_object = var_632_object;
	var_615_object = var_633_object;
	TaskCall(14);
	func_3067(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object);
	TaskReturn();
	bool var_618_bool;
	var_615_object->IsDialogEnd(var_618_bool);
	
	for(;;) {
		var_681_bool = !var_618_bool; //@nz
		if(var_681_bool == 0) goto Label_3056;
		@sync();
		var_615_object->IsDialogEnd(var_618_bool);
	}
	
Label_3056:
	object var_682_object;
	var_609_object = var_682_object;
	func_4495();
	@StopDialog(var_615_object);
	var_615_object->GetReturnValue(-1);
	int var_617_int = var_608_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5035(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_943(object var_2_object, string var_422_string)
{
	bool var_423_bool;
	func_4825(var_423_bool);
	if(!var_423_bool) //@nz
		return 0;
	if(var_422_string == var_2_object)
		return 0;
	string var_426_string; bool var_427_bool;
	var_422_string = var_426_string;
	if(var_422_string == "")
		var_427_bool = false;
	else
		var_427_bool = true;
	func_4657(var_426_string, var_427_bool);
	var_2_object = var_422_string;
	
}


void func_5297(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 290, 1, 521461);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_5323(var_61_bool, var_62_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5041(void)
{
	@SetVariable("b2q01", 3);
	bool var_56_bool;
	func_4761(var_56_bool, "quest_b2_01", "place_box");
	object var_62_object;
	func_4706(var_62_object, "quest_b2_02");
}


// @pe
void func_4787(bool var_281_bool, int var_282_int)
{
	int var_283_int;
	func_4778(var_283_int);
	var_281_bool = var_283_int == var_282_int;
}


void func_4793(string var_85_string, int var_86_int)
{
	string var_88_string = "idle";
	if(var_86_int != 0)
		var_88_string += var_86_int;
	var_88_string = var_85_string;
}


void func_5310(object var_70_object)
{
	object var_72_object;
	@GetDiaryRoot(var_72_object);
	if(!var_72_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_70_object = false;
	}
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";


void func_4800(int var_79_int)
{
	int var_82_int; bool var_83_bool;
	var_82_int = 0;
	
	for(;;) {
		string var_85_string; int var_86_int;
		var_82_int = var_86_int;
		func_4793(var_85_string, var_86_int);
		@HasAnimation(var_83_bool, "all", var_85_string);
		if(!var_83_bool) //@nz
			break;
		var_82_int += 1;
	}
	var_82_int = var_79_int;
}


// @pe
void func_5056(void)
{
	@SetVariable("oob8Ospina1", 1);
}


// @pe
void func_2497(object var_2_object, string var_566_string)
{
	bool var_567_bool;
	func_4825(var_567_bool);
	if(!var_567_bool) //@nz
		return 0;
	if(var_566_string == var_2_object)
		return 0;
	string var_570_string; bool var_571_bool;
	var_566_string = var_570_string;
	if(var_566_string == "")
		var_571_bool = false;
	else
		var_571_bool = true;
	func_4657(var_570_string, var_571_bool);
	var_2_object = var_566_string;
	
}


// @pe
void func_5062(object var_79_object)
{
	@Trace("b8q01_bone is given");
	object var_82_object;
	var_79_object = var_82_object;
	func_4748(var_82_object, "b8q01_bone", 1);
}


void func_5323(bool var_61_bool, object var_62_object, int var_63_int)
{
	object var_70_object;
	func_5310(var_70_object);
	object var_67_object;
	var_70_object = var_67_object;
	object var_68_object;
	var_67_object->Find(var_63_int, var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_63_int);
		var_61_bool = false;
	}
	var_68_object->AddChild(var_62_object);
	@SendWorldWndMessage(7);
	int var_69_int;
	var_62_object->GetCategory(var_69_int);
	@SetDiarySection(var_69_int);
	var_61_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3535(object var_2_object, string var_726_string)
{
	bool var_727_bool;
	func_4825(var_727_bool);
	if(!var_727_bool) //@nz
		return 0;
	if(var_726_string == var_2_object)
		return 0;
	string var_730_string; bool var_731_bool;
	var_726_string = var_730_string;
	if(var_726_string == "")
		var_731_bool = false;
	else
		var_731_bool = true;
	func_4657(var_730_string, var_731_bool);
	var_2_object = var_726_string;
	
}


// @pe
void func_2256(object var_2_object, string var_240_string)
{
	bool var_241_bool;
	func_4825(var_241_bool);
	if(!var_241_bool) //@nz
		return 0;
	if(var_240_string == var_2_object)
		return 0;
	string var_244_string; bool var_245_bool;
	var_240_string = var_244_string;
	if(var_240_string == "")
		var_245_bool = false;
	else
		var_245_bool = true;
	func_4657(var_244_string, var_245_bool);
	var_2_object = var_240_string;
	
}


void func_4817(int var_221_int)
{
	var_221_int = 515549;
}


// @pe
void func_5073(bool var_575_bool)
{
	int var_577_int;
	func_4701(var_577_int, "b8q01");
	if(var_577_int == 5)
		var_575_bool = true;
	var_575_bool = false;
}


void func_4819(int var_220_int)
{
	var_220_int = 502874;
}


void func_4821(string var_222_string)
{
	var_222_string = "ui/NPC_Ospina.png";
}


void func_4823(string var_223_string)
{
	var_223_string = "ui/NPC_Ospina_b.png";
}


void func_4825(bool var_116_bool)
{
	var_116_bool = true;
}


void func_4570(bool var_89_bool, object var_90_object)
{
	string var_96_string; bool var_98_bool; int var_99_int; string var_100_string;
	var_96_string = "c";
	int var_97_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_90_object->HasProperty((var_96_string + (var_97_int + 1)), var_98_bool);
			if(!var_98_bool) { //@nz
			} else {
				var_97_int += 1;
			}
		}
		if(!var_97_int) { //@nz
			var_89_bool = false;
			return 10;
		}
		var_99_int = 0;
		if(var_97_int > 1)
			@irand(var_99_int, var_97_int);
		var_90_object->GetProperty((var_96_string + (var_99_int + 1)), var_100_string);
		bool var_112_bool; string var_113_string;
		var_100_string = var_113_string;
		func_4663(var_112_bool, var_113_string);
		var_112_bool = var_89_bool;
		return 10;

	}
}


// @pe
void func_4827(void)
{
	@SetVariable("oob5Ospina1", 1);
}


// @pe
void func_5085(bool var_659_bool)
{
	int var_661_int;
	func_4701(var_661_int, "b10q01");
	if(var_661_int == 4)
		var_659_bool = true;
	var_659_bool = false;
}


void func_4319(void)
{
	bool var_73_bool; int var_74_int; int var_75_int; bool var_76_bool;
	@WaitForAnimEnd();
	bool var_77_bool;
	func_4422(var_77_bool);
	if(!var_77_bool) //@nz
		return 12;
	int var_79_int;
	func_4800(var_79_int);
	int var_71_int;
	var_79_int = var_71_int;
	int var_72_int = 0;
	
	for(;;) {
		bool var_92_bool = false;
		if(var_72_int < 5) {
			bool var_95_bool;
			func_4422(var_95_bool);
			if(var_95_bool != 0)
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			if(!var_71_int) { //@nz
				@Sleep(3, var_73_bool);
				if(!var_73_bool) { //@nz
				} else {
			} else {
			@irand(var_74_int, var_71_int);
			@irand(var_75_int, 5);
			if(var_75_int != 0)
				var_74_int = 0;
			string var_106_string; int var_107_int;
			var_74_int = var_107_int;
			func_4793(var_106_string, var_107_int);
			@PlayAnimation("all", var_106_string);
			@WaitForAnimEnd(var_76_bool);
			var_108_bool = !var_76_bool; //@nz
			if(var_108_bool == 0) goto Label_4374;
			goto Label_4385;
			}
				Label_4374:
					bool var_99_bool;
					func_4388(var_99_bool);
					var_100_bool = !var_99_bool; //@nz
					if(var_100_bool == 0) goto Label_4380;
			}
		}
	Label_4385:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4380:
		@ResetAAS();
		var_72_int += 1;
	}
	
}


void func_4833(void)
{
	object var_61_object;
	int var_62_int;
	func_4701(var_62_int, "b5q01PlaceButchers");
	if(var_62_int == 0) {
		@SetVariable("b5q01PlaceButchers", 1);
		object var_70_object;
		func_5351(var_70_object);
		var_70_object = var_61_object;
		float var_81_float;
		func_4773(var_81_float);
		var_61_object->AddMark("b5q01GathererWife", "pt_gatherer3", 1, 530181, var_81_float);
		bool var_84_bool;
		func_4761(var_84_bool, "quest_b5_01", "place_butchers");
		var_61_object = null;
	}
}


// @pe
void func_4066(object var_2_object, string var_864_string)
{
	bool var_865_bool;
	func_4825(var_865_bool);
	if(!var_865_bool) //@nz
		return 0;
	if(var_864_string == var_2_object)
		return 0;
	string var_868_string; bool var_869_bool;
	var_864_string = var_868_string;
	if(var_864_string == "")
		var_869_bool = false;
	else
		var_869_bool = true;
	func_4657(var_868_string, var_869_bool);
	var_2_object = var_864_string;
	
}


void func_5351(object var_104_object)
{
	object var_107_object; object var_108_object;
	@GetMainOutdoorScene(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find main outdoor scene");
		var_108_object = null;
		var_108_object = var_104_object;
	}
	var_107_object->GetMap(var_108_object);
	var_108_object = var_104_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5097(bool var_650_bool)
{
	int var_652_int;
	func_4701(var_652_int, "b10q01");
	if(var_652_int == 1000)
		var_650_bool = true;
	var_650_bool = false;
}


// @pe
void func_1265(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_308_object, object var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_315_bool;
		func_5198(var_1_object);
		if(var_315_bool != 0) {
			func_1383(var_309_object, "Neutral");
			var_0_object->SetMessage(520279); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520280, 21473, 21472); //@t
			var_0_object->AddReply(520299, 21475, 21493); //@t
		} else {
					func_1383(var_309_object, "Neutral");
					var_0_object->SetMessage(520300); //@t
					var_0_object->ClearReplies(); //@t
					bool var_348_bool;
					func_5210(var_1_object);
					if(var_348_bool != 0)
						var_0_object->AddReply(520301, 21497, 21496); //@t
					bool var_357_bool;
					func_5222(var_1_object);
					if(var_357_bool != 0)
						var_0_object->AddReply(520317, 21513, 21512); //@t
					bool var_366_bool;
					func_5234(var_1_object);
					if(var_366_bool != 0)
						var_0_object->AddReply(520324, 21520, 21519); //@t
					bool var_375_bool;
					func_5246(var_1_object);
					if(var_375_bool != 0)
						var_0_object->AddReply(520327, 21523, 21522); //@t
					var_0_object->AddReply(520330, -1, 21525); //@t
		}
	}
	for(;;) {
		bool var_338_bool;
		func_4825(var_338_bool);
		if(var_338_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4650(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1382;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1382:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4f5";


// @pe
void func_5109(bool var_656_bool)
{
	var_656_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_5368(object var_103_object, string var_104_string, float var_105_float)
{
	object var_113_object;
	@GetMainOutdoorScene(var_113_object);
	if(var_113_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_111_cvector;
	cvector var_112_cvector;
	bool var_114_bool;
	var_113_object->GetLocator(var_104_string, var_114_bool, var_111_cvector, var_112_cvector);
	if(!var_114_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_104_string) + " doesnt exist");
	var_113_object->GetMap(var_103_object);
	if(var_103_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_124_float = GetByIndex(var_111_cvector, 0);
	var_125_float = GetByIndex(var_111_cvector, 2);
	var_103_object->SetMapParams(var_124_float, var_125_float, var_105_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5114(bool var_741_bool)
{
	int var_743_int;
	func_4701(var_743_int, "b11q01");
	if(var_743_int == 1000)
		var_741_bool = true;
	var_741_bool = false;
}


// @pe
void func_3067(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_632_object, object var_633_object)
{
	var_0_object = var_633_object;
	var_1_object = var_632_object;
	var_3_string = false;
	if(1 != 0) {
		func_3157(var_633_object, "Neutral");
		var_0_object->SetMessage(521945); //@t
		var_0_object->ClearReplies(); //@t
		bool var_648_bool = true;
		bool var_649_bool = false;
		bool var_650_bool;
		func_5097(var_1_object);
		if(var_650_bool != 0) {
			bool var_656_bool;
			func_5109(var_1_object);
			if(var_656_bool != 0)
				var_649_bool = true;
		}
		if(var_649_bool != 1) {
			bool var_658_bool = false;
			bool var_659_bool;
			func_5085(var_1_object);
			if(var_659_bool != 0) {
				bool var_665_bool;
				func_5109(var_1_object);
				if(var_665_bool != 0)
					var_658_bool = true;
			}
			if(var_658_bool != 1)
				var_648_bool = false;
		}
		if(var_648_bool != 0)
			var_0_object->AddReply(521946, 23122, 23120); //@t
		var_0_object->AddReply(521947, -1, 23121); //@t
		goto Label_3127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbff";
	}
Label_3127:
	bool var_673_bool;
	func_4825(var_673_bool);
	if(var_673_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4650(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3156:
		return 0;

	}
	
}


void func_4607(bool var_120_bool, object var_121_object)
{
	bool var_129_bool; int var_130_int; string var_131_string;
	int var_133_int;
	func_4778(var_133_int);
	string var_127_string = ("d" + var_133_int) + "m";
	int var_128_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_121_object->HasProperty((var_127_string + (var_128_int + 1)), var_129_bool);
			if(!var_129_bool) { //@nz
			} else {
				var_128_int += 1;
			}
		}
		if(!var_128_int) { //@nz
			var_120_bool = false;
			return 10;
		}
		var_130_int = 0;
		if(var_128_int > 1)
			@irand(var_130_int, var_128_int);
		var_121_object->GetProperty((var_127_string + (var_130_int + 1)), var_131_string);
		bool var_152_bool; string var_153_string;
		var_131_string = var_153_string;
		func_4663(var_152_bool, var_153_string);
		var_152_bool = var_120_bool;
		return 10;

	}
}


