// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 19713) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4828();
			}
			if(var_47_cvector == 19715) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_4834();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_5015();
				object var_115_object = var_1_object;
				func_5020(var_0_object);
			}
			if(var_47_cvector == 19963) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4834();
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_5015();
				object var_147_object = var_1_object;
				func_5020(var_0_object);
			}
			if(var_46_bool == 19712) {
				func_153(var_47_cvector, "Strange");
				var_0_object->SetMessage(518620); //@t
				var_0_object->ClearReplies(); //@t
				bool var_169_bool = false;
				bool var_170_bool;
				func_5151(var_1_object);
				if(var_170_bool != 0) {
					bool var_176_bool;
					func_5163(var_1_object);
					if(var_176_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0)
					var_0_object->AddReply(518621, 19933, 19713); //@t
				var_0_object->AddReply(518624, -1, 19716); //@t
				return 0;
			}
			if(var_46_bool == 19933) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518828); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518829, 19935, 19934); //@t
				return 0;
			}
			if(var_46_bool == 19935) {
				func_153(var_47_cvector, "Fear");
				var_0_object->SetMessage(518830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518831, 19937, 19936); //@t
				var_0_object->AddReply(518845, 19951, 19950); //@t
				return 0;
			}
			if(var_46_bool == 19951) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518847, 19937, 19952); //@t
				var_0_object->AddReply(518848, 19940, 19953); //@t
				return 0;
			}
			if(var_46_bool == 19937) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518834, 19940, 19939); //@t
				return 0;
			}
			if(var_46_bool == 19940) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518837, 19948, 19942); //@t
				var_0_object->AddReply(518836, 19943, 19941); //@t
				return 0;
			}
			if(var_46_bool == 19943) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518841, 19954, 19946); //@t
				var_0_object->AddReply(518839, 19945, 19944); //@t
				return 0;
			}
			if(var_46_bool == 19945) {
				func_153(var_47_cvector, "Grin");
				var_0_object->SetMessage(518840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518842, -1, 19947); //@t
				return 0;
			}
			if(var_46_bool == 19954) {
				func_153(var_47_cvector, "Grin");
				var_0_object->SetMessage(518849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518850, 19956, 19955); //@t
				var_0_object->AddReply(518852, 19956, 19957); //@t
				return 0;
			}
			if(var_46_bool == 19956) {
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518853, 19714, 19959); //@t
				return 0;
			}
			if(var_46_bool == 19948) {
				func_153(var_47_cvector, "Grimacing");
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
				func_153(var_47_cvector, "Neutral");
				var_0_object->SetMessage(518855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518856, -1, 19963); //@t
				return 0;
			}
			var_3_string = true;
			bool var_289_bool;
			func_4826(var_289_bool);
			if(var_289_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb0";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 20446) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4872();
				object var_101_object = var_1_object;
				func_4900(var_0_object);
			}
			if(var_47_cvector == 20443) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_4866();
			}
			if(var_46_bool == 20425) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519273); //@t
				var_0_object->ClearReplies(); //@t
				bool var_153_bool;
				func_5187(var_1_object);
				if(var_153_bool != 0)
					var_0_object->AddReply(519274, 20428, 20426); //@t
				bool var_164_bool;
				func_5175(var_1_object);
				if(var_164_bool != 0)
					var_0_object->AddReply(519289, 20444, 20443); //@t
				var_0_object->AddReply(519275, -1, 20427); //@t
				return 0;
			}
			if(var_46_bool == 20444) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519291, -1, 20445); //@t
				return 0;
			}
			if(var_46_bool == 20428) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519277, 20432, 20429); //@t
				var_0_object->AddReply(519278, 20431, 20430); //@t
				return 0;
			}
			if(var_46_bool == 20431) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519279); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519281, 20432, 20433); //@t
				return 0;
			}
			if(var_46_bool == 20432) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519282, 20436, 20435); //@t
				var_0_object->AddReply(527864, 20439, 29209); //@t
				return 0;
			}
			if(var_46_bool == 20436) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519284, 20441, 20437); //@t
				var_0_object->AddReply(519285, 20439, 20438); //@t
				return 0;
			}
			if(var_46_bool == 20439) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519287, 20441, 20440); //@t
				return 0;
			}
			if(var_46_bool == 20441) {
				func_671(var_47_cvector, "Neutral");
				var_0_object->SetMessage(519288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519292, -1, 20446); //@t
				return 0;
			}
			var_3_string = true;
			bool var_234_bool;
			func_4826(var_234_bool);
			if(var_234_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2b6";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 21486) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5042();
			}
			if(var_47_cvector == 21480) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_5042();
			}
			if(var_47_cvector == 21481) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_5042();
			}
			if(var_47_cvector == 21496) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_4916();
			}
			if(var_47_cvector == 21512) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_4922();
			}
			if(var_47_cvector == 21518) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_4940();
			}
			if(var_47_cvector == 21519) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_4928();
			}
			if(var_47_cvector == 21522) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_4934();
			}
			if(var_46_bool == 21471) {
				bool var_142_bool;
				func_5199(var_1_object);
				if(var_142_bool != 0) {
					func_1111(var_47_cvector, "Neutral");
					var_0_object->SetMessage(520279); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520280, 21473, 21472); //@t
					var_0_object->AddReply(520299, 21475, 21493); //@t
					return 0;
				}
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520300); //@t
				var_0_object->ClearReplies(); //@t
				bool var_174_bool;
				func_5211(var_1_object);
				if(var_174_bool != 0)
					var_0_object->AddReply(520301, 21497, 21496); //@t
				bool var_183_bool;
				func_5223(var_1_object);
				if(var_183_bool != 0)
					var_0_object->AddReply(520317, 21513, 21512); //@t
				bool var_192_bool;
				func_5235(var_1_object);
				if(var_192_bool != 0)
					var_0_object->AddReply(520324, 21520, 21519); //@t
				bool var_201_bool;
				func_5247(var_1_object);
				if(var_201_bool != 0)
					var_0_object->AddReply(520327, 21523, 21522); //@t
				var_0_object->AddReply(520330, -1, 21525); //@t
				return 0;
			}
			if(var_46_bool == 21523) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527820, 29160, 29159); //@t
				return 0;
			}
			if(var_46_bool == 29160) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527822, 29162, 29161); //@t
				return 0;
			}
			if(var_46_bool == 29162) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520329, -1, 21524); //@t
				return 0;
			}
			if(var_46_bool == 21520) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527824, 29164, 29163); //@t
				var_0_object->AddReply(520326, -1, 21521); //@t
				return 0;
			}
			if(var_46_bool == 29164) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527826, -1, 29165); //@t
				var_0_object->AddReply(527827, -1, 29166); //@t
				return 0;
			}
			if(var_46_bool == 21513) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520319, 21515, 21514); //@t
				return 0;
			}
			if(var_46_bool == 21515) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527818, 29158, 29157); //@t
				return 0;
			}
			if(var_46_bool == 29158) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520321, 21517, 21516); //@t
				return 0;
			}
			if(var_46_bool == 21517) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520323, -1, 21518); //@t
				return 0;
			}
			if(var_46_bool == 21497) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520303, 21499, 21498); //@t
				var_0_object->AddReply(527811, 29150, 29149); //@t
				return 0;
			}
			if(var_46_bool == 29150) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527813, 29152, 29151); //@t
				return 0;
			}
			if(var_46_bool == 29152) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527815, 29154, 29153); //@t
				return 0;
			}
			if(var_46_bool == 29154) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527817, 21499, 29155); //@t
				return 0;
			}
			if(var_46_bool == 21499) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520305, 21501, 21500); //@t
				var_0_object->AddReply(520311, 21507, 21506); //@t
				return 0;
			}
			if(var_46_bool == 21507) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520313, 21509, 21508); //@t
				return 0;
			}
			if(var_46_bool == 21509) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520315, -1, 21510); //@t
				var_0_object->AddReply(520316, -1, 21511); //@t
				return 0;
			}
			if(var_46_bool == 21501) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520307, -1, 21502); //@t
				var_0_object->AddReply(520308, 21504, 21503); //@t
				return 0;
			}
			if(var_46_bool == 21504) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520310, -1, 21505); //@t
				return 0;
			}
			if(var_46_bool == 21473) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520282, 21475, 21474); //@t
				var_0_object->AddReply(520294, 21488, 21487); //@t
				return 0;
			}
			if(var_46_bool == 21488) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520296, 21490, 21489); //@t
				var_0_object->AddReply(527807, 21477, 29143); //@t
				return 0;
			}
			if(var_46_bool == 21490) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527805, 29142, 29141); //@t
				return 0;
			}
			if(var_46_bool == 29142) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520298, 21477, 21491); //@t
				return 0;
			}
			if(var_46_bool == 21475) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520290, 21483, 21482); //@t
				var_0_object->AddReply(520284, 21477, 21476); //@t
				return 0;
			}
			if(var_46_bool == 21477) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520286, 21479, 21478); //@t
				var_0_object->AddReply(527808, 29146, 29145); //@t
				return 0;
			}
			if(var_46_bool == 29146) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527810, 21479, 29147); //@t
				return 0;
			}
			if(var_46_bool == 21479) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520288, -1, 21480); //@t
				var_0_object->AddReply(520289, -1, 21481); //@t
				return 0;
			}
			if(var_46_bool == 21483) {
				func_1111(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520292, 21477, 21484); //@t
				var_0_object->AddReply(520293, -1, 21486); //@t
				return 0;
			}
			var_3_string = true;
			bool var_438_bool;
			func_4826(var_438_bool);
			if(var_438_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x46e";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_46_bool == 22017) {
				func_1984(var_47_cvector, "Neutral");
				var_0_object->SetMessage(520800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520801, 29131, 22018); //@t
				var_0_object->AddReply(527799, -1, 29132); //@t
				return 0;
			}
			if(var_46_bool == 29131) {
				func_1984(var_47_cvector, "Neutral");
				var_0_object->SetMessage(527798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527800, -1, 29133); //@t
				var_0_object->AddReply(527801, -1, 29134); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_4826(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7d7";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 22612) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4985();
				object var_79_object = var_1_object;
				func_5063(var_0_object);
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_5036();
			}
			if(var_47_cvector == 24978) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4985();
				object var_111_object = var_1_object;
				func_5063(var_0_object);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5036();
			}
			if(var_47_cvector == 24931) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_5057();
			}
			if(var_46_bool == 22609) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521431); //@t
				var_0_object->ClearReplies(); //@t
				bool var_141_bool;
				func_5074(var_1_object);
				if(var_141_bool != 0)
					var_0_object->AddReply(521432, 22611, 22610); //@t
				bool var_152_bool;
				func_5139(var_1_object);
				if(var_152_bool != 0)
					var_0_object->AddReply(523679, 24958, 24931); //@t
				var_0_object->AddReply(521435, -1, 22613); //@t
				return 0;
			}
			if(var_46_bool == 24958) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523704, 24960, 24959); //@t
				var_0_object->AddReply(523706, -1, 24961); //@t
				var_0_object->AddReply(523707, -1, 24962); //@t
				return 0;
			}
			if(var_46_bool == 24960) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523681, 24934, 24933); //@t
				return 0;
			}
			if(var_46_bool == 24934) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523683, 24936, 24935); //@t
				var_0_object->AddReply(523701, 24957, 24956); //@t
				var_0_object->AddReply(523708, -1, 24963); //@t
				return 0;
			}
			if(var_46_bool == 24957) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523702); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523709, 24965, 24964); //@t
				return 0;
			}
			if(var_46_bool == 24965) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523710); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523712, -1, 24967); //@t
				var_0_object->AddReply(523711, -1, 24966); //@t
				return 0;
			}
			if(var_46_bool == 24936) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523685, 24968, 24937); //@t
				return 0;
			}
			if(var_46_bool == 24968) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523713); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523714, -1, 24969); //@t
				return 0;
			}
			if(var_46_bool == 22611) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523686, 24939, 24938); //@t
				var_0_object->AddReply(523690, 24941, 24942); //@t
				return 0;
			}
			if(var_46_bool == 24939) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523688, 24941, 24940); //@t
				var_0_object->AddReply(523695, 24949, 24948); //@t
				return 0;
			}
			if(var_46_bool == 24949) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523697, 24941, 24950); //@t
				var_0_object->AddReply(523698, 24952, 24951); //@t
				return 0;
			}
			if(var_46_bool == 24952) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523699); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523700, 24941, 24953); //@t
				return 0;
			}
			if(var_46_bool == 24941) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523691, 24944, 24943); //@t
				var_0_object->AddReply(523715, 24971, 24970); //@t
				return 0;
			}
			if(var_46_bool == 24971) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523718, 24944, 24973); //@t
				var_0_object->AddReply(523719, 24944, 24974); //@t
				return 0;
			}
			if(var_46_bool == 24944) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523693, 24946, 24945); //@t
				var_0_object->AddReply(523717, 24977, 24972); //@t
				return 0;
			}
			if(var_46_bool == 24977) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523720); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523722, 24980, 24979); //@t
				return 0;
			}
			if(var_46_bool == 24980) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523724, 24946, 24981); //@t
				return 0;
			}
			if(var_46_bool == 24946) {
				func_2225(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521434, -1, 22612); //@t
				var_0_object->AddReply(523721, -1, 24978); //@t
				return 0;
			}
			var_3_string = true;
			bool var_319_bool;
			func_4826(var_319_bool);
			if(var_319_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8c8";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 23120) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4994();
			}
			if(var_46_bool == 23119) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521945); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool = true;
				bool var_77_bool = false;
				bool var_78_bool;
				func_5098(var_1_object);
				if(var_78_bool != 0) {
					bool var_86_bool;
					func_5110(var_1_object);
					if(var_86_bool != 0)
						var_77_bool = true;
				}
				if(var_77_bool != 1) {
					bool var_88_bool = false;
					bool var_89_bool;
					func_5086(var_1_object);
					if(var_89_bool != 0) {
						bool var_95_bool;
						func_5110(var_1_object);
						if(var_95_bool != 0)
							var_88_bool = true;
					}
					if(var_88_bool != 1)
						var_76_bool = false;
				}
				if(var_76_bool != 0)
					var_0_object->AddReply(521946, 23122, 23120); //@t
				var_0_object->AddReply(521947, -1, 23121); //@t
				return 0;
			}
			if(var_46_bool == 23122) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521949, 23730, 23123); //@t
				return 0;
			}
			if(var_46_bool == 23730) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522552, 23732, 23731); //@t
				return 0;
			}
			if(var_46_bool == 23732) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522554, 23734, 23733); //@t
				var_0_object->AddReply(522556, -1, 23735); //@t
				return 0;
			}
			if(var_46_bool == 23734) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522557, 23737, 23736); //@t
				return 0;
			}
			if(var_46_bool == 23737) {
				func_2885(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522559, -1, 23738); //@t
				return 0;
			}
			var_3_string = true;
			bool var_141_bool;
			func_4826(var_141_bool);
			if(var_141_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb5c";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_47_cvector == 23259) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5000();
			}
			if(var_46_bool == 23258) {
				bool var_81_bool;
				func_5127(var_1_object);
				if(var_81_bool != 0) {
					object var_89_object; object var_90_object;
					var_89_object = var_1_object;
					var_90_object = var_0_object;
					func_5009();
					func_3263(var_47_cvector, "Neutral");
					var_0_object->SetMessage(522089); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523647, 24892, 24891); //@t
					var_0_object->AddReply(523657, 24892, 24901); //@t
					bool var_117_bool;
					func_5115(var_1_object);
					if(var_117_bool != 0)
						var_0_object->AddReply(522091, 23261, 23260); //@t
					return 0;
				}
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523598, 24834, 24833); //@t
				var_0_object->AddReply(522095, -1, 23264); //@t
				return 0;
			}
			if(var_46_bool == 24834) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523655, 24900, 24899); //@t
				return 0;
			}
			if(var_46_bool == 24900) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534554, -1, 36186); //@t
				return 0;
			}
			if(var_46_bool == 23261) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(522092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523645, 24889, 24888); //@t
				var_0_object->AddReply(523644, 24889, 24887); //@t
				return 0;
			}
			if(var_46_bool == 24889) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522093, -1, 23262); //@t
				return 0;
			}
			if(var_46_bool == 24892) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523649, 24894, 24893); //@t
				var_0_object->AddReply(523658, 24908, 24903); //@t
				return 0;
			}
			if(var_46_bool == 24908) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523663); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523664, 24905, 24909); //@t
				var_0_object->AddReply(523665, 24912, 24910); //@t
				return 0;
			}
			if(var_46_bool == 24912) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523668, 24905, 24913); //@t
				return 0;
			}
			if(var_46_bool == 24894) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523659, 24905, 24904); //@t
				var_0_object->AddReply(523666, 24896, 24911); //@t
				return 0;
			}
			if(var_46_bool == 24905) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523661, 24896, 24906); //@t
				var_0_object->AddReply(523669, 24896, 24915); //@t
				var_0_object->AddReply(523651, 24918, 24895); //@t
				return 0;
			}
			if(var_46_bool == 24918) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523671, 24896, 24919); //@t
				return 0;
			}
			if(var_46_bool == 24896) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523653, 24898, 24897); //@t
				var_0_object->AddReply(523675, 24925, 24924); //@t
				return 0;
			}
			if(var_46_bool == 24925) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523677, 24898, 24926); //@t
				return 0;
			}
			if(var_46_bool == 24898) {
				func_3263(var_47_cvector, "Neutral");
				var_0_object->SetMessage(523654); //@t
				var_0_object->ClearReplies(); //@t
				bool var_243_bool;
				func_5115(var_1_object);
				if(!var_243_bool) //@nz
					var_0_object->AddReply(522090, -1, 23259); //@t
				var_0_object->AddReply(523678, -1, 24928); //@t
				return 0;
			}
			var_3_string = true;
			bool var_252_bool;
			func_4826(var_252_bool);
			if(var_252_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd6";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_46_bool == 36971) {
				func_3799(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_46_bool == 36973) {
				func_3799(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_46_bool == 36975) {
				func_3799(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_4826(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xeee";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_4679();
			if(var_46_int == 42560) {
				func_4053(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_4826(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfec";
	
	}

}


maintask task_18
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		var_46_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4124(var_45_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, int var_46_int)
	{
		if(var_46_int == 10) {
			func_4189();
			bool var_50_bool = false;
			bool var_51_bool;
			func_4403(var_51_bool);
			if(var_51_bool != 0) {
				bool var_54_bool;
				func_4158(var_54_bool);
				if(var_54_bool != 0)
					var_50_bool = true;
			}
			if(var_50_bool != 0) {
				bool var_71_bool;
				func_4138(var_71_bool);
				if(var_71_bool != 0) {
					bool var_90_bool; object var_91_object;
					object var_92_object;
					func_4686(var_92_object);
					var_92_object = var_91_object;
					func_4553(var_90_bool, var_91_object);
				}
			} else {
				func_4153(var_46_int);
				func_4180();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		func_4371();
		func_4189();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		@StopGroup0();
		func_4189();
		func_4633("Neutral");
		func_4180();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, bool var_46_bool)
	{
		if(var_46_bool != 0)
			func_4180();
		else
			func_4633("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, object var_46_object)
	{
		bool var_48_bool;
		@IsOverrideActive(var_48_bool);
		if(!var_48_bool) { //@nz
			disable OnUse;
			func_4371();
			bool var_50_bool; object var_51_object;
			var_46_object = var_51_object;
			func_4394(var_50_bool, var_51_object);
			enable OnUse;
			object var_64_object;
			var_46_object = var_64_object;
			func_5419(var_64_object);
			func_4633("Neutral");
			func_4189();
			func_4180();
		}
	}

}


void func_0(object var_0_object, int var_476_int, object var_477_object)
{
	var_0_object = var_477_object;
	bool var_487_bool; object var_488_object;
	var_477_object = var_488_object;
	func_4408(var_487_bool, var_488_object, 70.0);
	if(!var_487_bool) { //@nz
		var_476_int = -2;
		return 8;
	}
	object var_483_object;
	@CreateDialog(var_483_object);
	int var_491_int;
	func_4820(var_491_int);
	var_483_object->SetNPCName(var_491_int);
	int var_492_int;
	func_4818(var_492_int);
	var_483_object->SetNPCDescription(var_492_int);
	string var_493_string;
	func_4822(var_493_string);
	var_483_object->SetPhoto(var_493_string);
	string var_494_string;
	func_4824(var_494_string);
	var_483_object->SetPhoto2(var_494_string);
	int var_495_int;
	func_5402(var_495_int);
	var_483_object->SetPlayerName(var_495_int);
	bool var_484_bool;
	@IsOverrideActive(var_484_bool);
	if(var_484_bool != 0) {
		var_476_int = -2;
		return 8;
	}
	@DoDialog(var_483_object);
	bool var_497_bool; object var_498_object;
	object var_499_object;
	func_4686(var_499_object);
	var_499_object = var_498_object;
	func_4495(var_497_bool, var_498_object);
	object var_500_object; object var_501_object;
	var_477_object = var_500_object;
	var_483_object = var_501_object;
	TaskCall(1);
	func_81(var_502_object, var_503_object, var_504_string, var_505_bool, var_500_object, var_501_object);
	TaskReturn();
	bool var_486_bool;
	var_483_object->IsDialogEnd(var_486_bool);
	
	for(;;) {
		var_543_bool = !var_486_bool; //@nz
		if(var_543_bool == 0) goto Label_70;
		@sync();
		var_483_object->IsDialogEnd(var_486_bool);
	}
	
Label_70:
	object var_544_object;
	var_477_object = var_544_object;
	func_4477();
	@StopDialog(var_483_object);
	var_483_object->GetReturnValue(-1);
	int var_485_int = var_476_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4866(void)
{
	@SetVariable("oob3Ospina1", 1);
}


void func_517(object var_0_object, int var_403_int, object var_404_object)
{
	var_0_object = var_404_object;
	bool var_414_bool; object var_415_object;
	var_404_object = var_415_object;
	func_4408(var_414_bool, var_415_object, 70.0);
	if(!var_414_bool) { //@nz
		var_403_int = -2;
		return 8;
	}
	object var_410_object;
	@CreateDialog(var_410_object);
	int var_418_int;
	func_4820(var_418_int);
	var_410_object->SetNPCName(var_418_int);
	int var_419_int;
	func_4818(var_419_int);
	var_410_object->SetNPCDescription(var_419_int);
	string var_420_string;
	func_4822(var_420_string);
	var_410_object->SetPhoto(var_420_string);
	string var_421_string;
	func_4824(var_421_string);
	var_410_object->SetPhoto2(var_421_string);
	int var_422_int;
	func_5402(var_422_int);
	var_410_object->SetPlayerName(var_422_int);
	bool var_411_bool;
	@IsOverrideActive(var_411_bool);
	if(var_411_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	@DoDialog(var_410_object);
	bool var_424_bool; object var_425_object;
	object var_426_object;
	func_4686(var_426_object);
	var_426_object = var_425_object;
	func_4495(var_424_bool, var_425_object);
	object var_427_object; object var_428_object;
	var_404_object = var_427_object;
	var_410_object = var_428_object;
	TaskCall(3);
	func_598(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object);
	TaskReturn();
	bool var_413_bool;
	var_410_object->IsDialogEnd(var_413_bool);
	
	for(;;) {
		var_472_bool = !var_413_bool; //@nz
		if(var_472_bool == 0) goto Label_587;
		@sync();
		var_410_object->IsDialogEnd(var_413_bool);
	}
	
Label_587:
	object var_473_object;
	var_404_object = var_473_object;
	func_4477();
	@StopDialog(var_410_object);
	var_410_object->GetReturnValue(-1);
	int var_412_int = var_403_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5127(bool var_728_bool)
{
	int var_730_int;
	func_4702(var_730_int, "oob11Ospina1");
	if(var_730_int == 0) {
		var_728_bool = true;
		return 0;
	}
	var_728_bool = false;
}


void func_4872(void)
{
	@SetVariable("b3q01", 2);
	object var_58_object;
	func_5352(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_4774(var_69_float);
	var_55_object->AddMark("b3q01OspinaGotoButcher", "pt_gmap_house5_24", 1, 519635, var_69_float);
	func_5272();
	bool var_95_bool;
	func_4762(var_95_bool, "quest_b3_01", "place_butcher");
}
EMIT "Stack[-1] = 0";


void func_3084(object var_0_object, int var_697_int, object var_698_object)
{
	var_0_object = var_698_object;
	bool var_708_bool; object var_709_object;
	var_698_object = var_709_object;
	func_4408(var_708_bool, var_709_object, 70.0);
	if(!var_708_bool) { //@nz
		var_697_int = -2;
		return 8;
	}
	object var_704_object;
	@CreateDialog(var_704_object);
	int var_712_int;
	func_4820(var_712_int);
	var_704_object->SetNPCName(var_712_int);
	int var_713_int;
	func_4818(var_713_int);
	var_704_object->SetNPCDescription(var_713_int);
	string var_714_string;
	func_4822(var_714_string);
	var_704_object->SetPhoto(var_714_string);
	string var_715_string;
	func_4824(var_715_string);
	var_704_object->SetPhoto2(var_715_string);
	int var_716_int;
	func_5402(var_716_int);
	var_704_object->SetPlayerName(var_716_int);
	bool var_705_bool;
	@IsOverrideActive(var_705_bool);
	if(var_705_bool != 0) {
		var_697_int = -2;
		return 8;
	}
	@DoDialog(var_704_object);
	bool var_718_bool; object var_719_object;
	object var_720_object;
	func_4686(var_720_object);
	var_720_object = var_719_object;
	func_4495(var_718_bool, var_719_object);
	object var_721_object; object var_722_object;
	var_698_object = var_721_object;
	var_704_object = var_722_object;
	TaskCall(13);
	func_3165(var_723_object, var_724_object, var_725_string, var_726_bool, var_721_object, var_722_object);
	TaskReturn();
	bool var_707_bool;
	var_704_object->IsDialogEnd(var_707_bool);
	
	for(;;) {
		var_778_bool = !var_707_bool; //@nz
		if(var_778_bool == 0) goto Label_3154;
		@sync();
		var_704_object->IsDialogEnd(var_707_bool);
	}
	
Label_3154:
	object var_779_object;
	var_698_object = var_779_object;
	func_4477();
	@StopDialog(var_704_object);
	var_704_object->GetReturnValue(-1);
	int var_706_int = var_697_int;
}
EMIT "Stack[-4] = 0";


void func_4369(bool var_85_bool)
{
	var_85_bool = true;
}


// @pe
void func_5139(bool var_596_bool)
{
	int var_598_int;
	func_4702(var_598_int, "oob8Ospina1");
	if(var_598_int == 0) {
		var_596_bool = true;
		return 0;
	}
	var_596_bool = false;
}


void func_4371(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2071(object var_0_object, int var_547_int, object var_548_object)
{
	var_0_object = var_548_object;
	bool var_558_bool; object var_559_object;
	var_548_object = var_559_object;
	func_4408(var_558_bool, var_559_object, 70.0);
	if(!var_558_bool) { //@nz
		var_547_int = -2;
		return 8;
	}
	object var_554_object;
	@CreateDialog(var_554_object);
	int var_562_int;
	func_4820(var_562_int);
	var_554_object->SetNPCName(var_562_int);
	int var_563_int;
	func_4818(var_563_int);
	var_554_object->SetNPCDescription(var_563_int);
	string var_564_string;
	func_4822(var_564_string);
	var_554_object->SetPhoto(var_564_string);
	string var_565_string;
	func_4824(var_565_string);
	var_554_object->SetPhoto2(var_565_string);
	int var_566_int;
	func_5402(var_566_int);
	var_554_object->SetPlayerName(var_566_int);
	bool var_555_bool;
	@IsOverrideActive(var_555_bool);
	if(var_555_bool != 0) {
		var_547_int = -2;
		return 8;
	}
	@DoDialog(var_554_object);
	bool var_568_bool; object var_569_object;
	object var_570_object;
	func_4686(var_570_object);
	var_570_object = var_569_object;
	func_4495(var_568_bool, var_569_object);
	object var_571_object; object var_572_object;
	var_548_object = var_571_object;
	var_554_object = var_572_object;
	TaskCall(9);
	func_2152(var_573_object, var_574_object, var_575_string, var_576_bool, var_571_object, var_572_object);
	TaskReturn();
	bool var_557_bool;
	var_554_object->IsDialogEnd(var_557_bool);
	
	for(;;) {
		var_616_bool = !var_557_bool; //@nz
		if(var_616_bool == 0) goto Label_2141;
		@sync();
		var_554_object->IsDialogEnd(var_557_bool);
	}
	
Label_2141:
	object var_617_object;
	var_548_object = var_617_object;
	func_4477();
	@StopDialog(var_554_object);
	var_554_object->GetReturnValue(-1);
	int var_556_int = var_547_int;
}
EMIT "Stack[-4] = 0";


void func_4376(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


void func_4633(string var_267_string)
{
	bool var_271_bool; float var_272_float; float var_273_float;
	@lshHasAnimation(var_271_bool, var_267_string);
	if(var_271_bool != 0) {
		@lshGetAnimTimes(var_267_string, var_272_float, var_273_float);
		@lshPlayAnimation(var_272_float, var_273_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_267_string);
	}
	
}


void func_5402(int var_130_int)
{
	int var_132_int;
	@GetVariable("branch", var_132_int);
	if(var_132_int == 0) {
		var_130_int = 1;
		return 2;
	EMIT "GOTO 0x1529";
	}
	if(var_132_int == 1) {
		var_130_int = 2;
		return 2;
	}
	var_130_int = 3;
}


void func_4124(object var_0_object)
{
	bool var_47_bool;
	func_4403(var_47_bool);
	if(!var_47_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4300();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_5151(bool var_517_bool)
{
	int var_519_int;
	func_4702(var_519_int, "b5q01");
	if(var_519_int == 1)
		var_517_bool = true;
	var_517_bool = false;
}


void func_4384(bool var_54_bool, cvector var_55_cvector)
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
void func_4900(object var_102_object)
{
	object var_106_object;
	func_5352(var_106_object);
	object var_103_object;
	var_106_object = var_103_object;
	func_5369(var_103_object, "pt_gmap_house5_24", (float)2);
	object var_126_object;
	func_5352(var_126_object);
	var_102_object->ShowMap(var_126_object);
}


void func_4649(string var_245_string, bool var_246_bool)
{
	bool var_252_bool; float var_253_float; float var_254_float;
	@lshHasAnimation(var_252_bool, var_245_string);
	if(var_252_bool != 0) {
		@lshGetAnimTimes(var_245_string, var_253_float, var_254_float);
		@lshPlayAnimation(var_253_float, var_254_float, var_246_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_245_string);
	}
	
}


void func_4138(bool var_71_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) //@nz
		var_71_bool = false;
	bool var_76_bool; object var_77_object;
	var_73_object = var_77_object;
	func_4394(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5163(bool var_523_bool)
{
	int var_525_int;
	func_4702(var_525_int, "oob5Ospina1");
	if(var_525_int == 0) {
		var_523_bool = true;
		return 0;
	}
	var_523_bool = false;
}


void func_4394(bool var_50_bool, object var_51_object)
{
	cvector var_53_cvector;
	var_51_object->GetPosition(var_53_cvector);
	bool var_54_bool; cvector var_55_cvector;
	var_53_cvector = var_55_cvector;
	func_4384(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
}


// @pe
void func_5419(object var_64_object)
{
	var_65_bool = GlobalVars[1];
	if(!var_65_bool) { //@nz
		int var_67_int; object var_68_object;
		var_64_object = var_68_object;
		TaskCall(6);
		func_1845(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_292_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_293_bool;
	func_4788(var_293_bool, 2);
	if(var_293_bool != 0) {
		int var_296_int; object var_297_object;
		var_64_object = var_297_object;
		TaskCall(4);
		func_912(var_298_object, var_296_int, var_297_object);
		TaskReturn();
		return 0;
	}
	bool var_401_bool;
	func_4788(var_401_bool, 3);
	if(var_401_bool != 0) {
		int var_403_int; object var_404_object;
		var_64_object = var_404_object;
		TaskCall(2);
		func_517(var_405_object, var_403_int, var_404_object);
		TaskReturn();
		return 0;
	}
	bool var_474_bool;
	func_4788(var_474_bool, 5);
	if(var_474_bool != 0) {
		int var_476_int; object var_477_object;
		var_64_object = var_477_object;
		TaskCall(0);
		func_0(var_478_object, var_476_int, var_477_object);
		TaskReturn();
		return 0;
	}
	bool var_545_bool;
	func_4788(var_545_bool, 8);
	if(var_545_bool != 0) {
		int var_547_int; object var_548_object;
		var_64_object = var_548_object;
		TaskCall(8);
		func_2071(var_549_object, var_547_int, var_548_object);
		TaskReturn();
		return 0;
	}
	bool var_618_bool;
	func_4788(var_618_bool, 10);
	if(var_618_bool != 0) {
		int var_620_int; object var_621_object;
		var_64_object = var_621_object;
		TaskCall(10);
		func_2714(var_622_object, var_620_int, var_621_object);
		TaskReturn();
		return 0;
	}
	bool var_695_bool;
	func_4788(var_695_bool, 11);
	if(var_695_bool != 0) {
		int var_697_int; object var_698_object;
		var_64_object = var_698_object;
		TaskCall(12);
		func_3084(var_699_object, var_697_int, var_698_object);
		TaskReturn();
		return 0;
	}
	bool var_780_bool = false;
	bool var_781_bool;
	func_4788(var_781_bool, 12);
	if(var_781_bool != 0) {
		var_783_bool = GlobalVars[2];
		if(!var_783_bool) //@nz
			var_780_bool = true;
	}
	if(var_780_bool != 0) {
		int var_785_int; object var_786_object;
		var_64_object = var_786_object;
		TaskCall(14);
		func_3655(var_787_object, var_785_int, var_786_object);
		TaskReturn();
		var_844_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_845_int; object var_846_object;
	var_64_object = var_846_object;
	TaskCall(16);
	func_3914(var_847_object, var_845_int, var_846_object);
	TaskReturn();
}


void func_4403(bool var_47_bool)
{
	bool var_49_bool;
	@IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
}


// @pe
void func_4916(void)
{
	@SetVariable("oob2Ospina1", 1);
}


void func_1845(object var_0_object, int var_67_int, object var_68_object)
{
	var_0_object = var_68_object;
	bool var_78_bool; object var_79_object;
	var_68_object = var_79_object;
	func_4408(var_78_bool, var_79_object, 70.0);
	if(!var_78_bool) { //@nz
		var_67_int = -2;
		return 8;
	}
	object var_74_object;
	@CreateDialog(var_74_object);
	int var_126_int;
	func_4820(var_126_int);
	var_74_object->SetNPCName(var_126_int);
	int var_127_int;
	func_4818(var_127_int);
	var_74_object->SetNPCDescription(var_127_int);
	string var_128_string;
	func_4822(var_128_string);
	var_74_object->SetPhoto(var_128_string);
	string var_129_string;
	func_4824(var_129_string);
	var_74_object->SetPhoto2(var_129_string);
	int var_130_int;
	func_5402(var_130_int);
	var_74_object->SetPlayerName(var_130_int);
	bool var_75_bool;
	@IsOverrideActive(var_75_bool);
	if(var_75_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	@DoDialog(var_74_object);
	bool var_139_bool; object var_140_object;
	object var_141_object;
	func_4686(var_141_object);
	var_141_object = var_140_object;
	func_4495(var_139_bool, var_140_object);
	object var_234_object; object var_235_object;
	var_68_object = var_234_object;
	var_74_object = var_235_object;
	TaskCall(7);
	func_1926(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object);
	TaskReturn();
	bool var_77_bool;
	var_74_object->IsDialogEnd(var_77_bool);
	
	for(;;) {
		var_283_bool = !var_77_bool; //@nz
		if(var_283_bool == 0) goto Label_1915;
		@sync();
		var_74_object->IsDialogEnd(var_77_bool);
	}
	
Label_1915:
	object var_284_object;
	var_68_object = var_284_object;
	func_4477();
	@StopDialog(var_74_object);
	var_74_object->GetReturnValue(-1);
	int var_76_int = var_67_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5175(bool var_452_bool)
{
	int var_454_int;
	func_4702(var_454_int, "oob3Ospina1");
	if(var_454_int == 0) {
		var_452_bool = true;
		return 0;
	}
	var_452_bool = false;
}


void func_4664(bool var_173_bool, string var_174_string)
{
	bool var_176_bool;
	bool var_177_bool;
	func_4826(var_177_bool);
	if(var_177_bool != 0) {
		@lshHasSpeech(var_176_bool, var_174_string);
		if(var_176_bool != 0) {
			@lshPlaySpeech(var_174_string);
			var_173_bool = true;
		}
	}
	var_173_bool = false;
}


void func_4153(object var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_123_float, var_124_float);
}


void func_4408(bool var_78_bool, object var_79_object, float var_80_float)
{
	cvector var_91_cvector; bool var_98_bool;
	var_79_object->GetPosition(var_91_cvector);
	float var_90_float;
	var_79_object->GetEyesHeight(var_90_float);
	var_99_float = GetByIndex(var_91_cvector, 1);
	SetByIndex(var_91_cvector, 1) = (var_99_float + var_90_float);
	cvector var_92_cvector;
	@GetPosition(var_92_cvector);
	@GetEyesHeight(var_90_float);
	var_100_float = GetByIndex(var_92_cvector, 1);
	SetByIndex(var_92_cvector, 1) = (var_100_float + var_90_float);
	cvector var_93_cvector = var_91_cvector - var_92_cvector;
	var_101_float = GetByIndex(var_93_cvector, 1);
	SetByIndex(var_93_cvector, 1) = (float)0;
	var_103_float = sqrt(var_93_cvector | var_93_cvector);
	var_93_cvector /= var_103_float;
	cvector var_94_cvector = -var_93_cvector;
	cvector var_105_cvector;
	func_4692(var_105_cvector, (var_94_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_95_cvector = ((var_93_cvector * var_80_float) + (var_105_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_97_bool;
	@IsOverrideActive(var_97_bool);
	if(var_97_bool != 0)
		var_78_bool = false;
	@StopWorld();
	@CameraTransit((var_92_cvector + var_95_cvector), var_94_cvector, true);
	var_119_float = GetByIndex(var_95_cvector, 0);
	var_120_float = GetByIndex(var_95_cvector, 2);
	@Rotate(var_119_float, var_120_float);
	bool var_121_bool;
	func_4826(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		@HasAnimationTrack(var_98_bool, "head");
		if(var_98_bool == 0) goto Label_4471;
		@LookAsyncCamera("head");
	}
Label_4471:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_78_bool = true;
	
}


// @pe
void func_4922(void)
{
	@SetVariable("oob2Ospina2", 1);
}


void func_4158(bool var_54_bool)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	if(!var_57_object) { //@nz
		var_54_bool = false;
		return 4;
	}
	float var_61_float; object var_62_object;
	func_4376(var_61_float, var_62_object);
	if(var_61_float > 90000.0) {
		var_54_bool = false;
		return 4;
	}
	bool var_58_bool;
	@CanSee(var_58_bool, var_62_object);
	var_58_bool = var_54_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_4928(void)
{
	@SetVariable("oob2Ospina3", 1);
}


// @pe
void func_5187(bool var_443_bool)
{
	int var_445_int;
	func_4702(var_445_int, "b3q01");
	if(var_445_int == 1)
		var_443_bool = true;
	var_443_bool = false;
}


// @pe
void func_2885(object var_2_object, string var_651_string)
{
	bool var_652_bool;
	func_4826(var_652_bool);
	if(!var_652_bool) //@nz
		return 0;
	if(var_651_string == var_2_object)
		return 0;
	string var_655_string; bool var_656_bool;
	var_651_string = var_655_string;
	if(var_651_string == "")
		var_656_bool = false;
	else
		var_656_bool = true;
	func_4649(var_655_string, var_656_bool);
	var_2_object = var_651_string;
	
}


// @pe
void func_4934(void)
{
	@SetVariable("oob2Ospina4", 1);
}


void func_4679(void)
{
	bool var_49_bool;
	func_4826(var_49_bool);
	if(var_49_bool != 0)
		@lshStopSpeech();
}


void func_3655(object var_0_object, int var_785_int, object var_786_object)
{
	var_0_object = var_786_object;
	bool var_796_bool; object var_797_object;
	var_786_object = var_797_object;
	func_4408(var_796_bool, var_797_object, 70.0);
	if(!var_796_bool) { //@nz
		var_785_int = -2;
		return 8;
	}
	object var_792_object;
	@CreateDialog(var_792_object);
	int var_800_int;
	func_4820(var_800_int);
	var_792_object->SetNPCName(var_800_int);
	int var_801_int;
	func_4818(var_801_int);
	var_792_object->SetNPCDescription(var_801_int);
	string var_802_string;
	func_4822(var_802_string);
	var_792_object->SetPhoto(var_802_string);
	string var_803_string;
	func_4824(var_803_string);
	var_792_object->SetPhoto2(var_803_string);
	int var_804_int;
	func_5402(var_804_int);
	var_792_object->SetPlayerName(var_804_int);
	bool var_793_bool;
	@IsOverrideActive(var_793_bool);
	if(var_793_bool != 0) {
		var_785_int = -2;
		return 8;
	}
	@DoDialog(var_792_object);
	bool var_806_bool; object var_807_object;
	object var_808_object;
	func_4686(var_808_object);
	var_808_object = var_807_object;
	func_4495(var_806_bool, var_807_object);
	object var_809_object; object var_810_object;
	var_786_object = var_809_object;
	var_792_object = var_810_object;
	TaskCall(15);
	func_3736(var_811_object, var_812_object, var_813_string, var_814_bool, var_809_object, var_810_object);
	TaskReturn();
	bool var_795_bool;
	var_792_object->IsDialogEnd(var_795_bool);
	
	for(;;) {
		var_842_bool = !var_795_bool; //@nz
		if(var_842_bool == 0) goto Label_3725;
		@sync();
		var_792_object->IsDialogEnd(var_795_bool);
	}
	
Label_3725:
	object var_843_object;
	var_786_object = var_843_object;
	func_4477();
	@StopDialog(var_792_object);
	var_792_object->GetReturnValue(-1);
	int var_794_int = var_785_int;
}
EMIT "Stack[-4] = 0";


void func_3914(object var_0_object, int var_845_int, object var_846_object)
{
	var_0_object = var_846_object;
	bool var_856_bool; object var_857_object;
	var_846_object = var_857_object;
	func_4408(var_856_bool, var_857_object, 70.0);
	if(!var_856_bool) { //@nz
		var_845_int = -2;
		return 8;
	}
	object var_852_object;
	@CreateDialog(var_852_object);
	int var_860_int;
	func_4820(var_860_int);
	var_852_object->SetNPCName(var_860_int);
	int var_861_int;
	func_4818(var_861_int);
	var_852_object->SetNPCDescription(var_861_int);
	string var_862_string;
	func_4822(var_862_string);
	var_852_object->SetPhoto(var_862_string);
	string var_863_string;
	func_4824(var_863_string);
	var_852_object->SetPhoto2(var_863_string);
	int var_864_int;
	func_5402(var_864_int);
	var_852_object->SetPlayerName(var_864_int);
	bool var_853_bool;
	@IsOverrideActive(var_853_bool);
	if(var_853_bool != 0) {
		var_845_int = -2;
		return 8;
	}
	@DoDialog(var_852_object);
	bool var_866_bool; object var_867_object;
	object var_868_object;
	func_4686(var_868_object);
	var_868_object = var_867_object;
	func_4495(var_866_bool, var_867_object);
	object var_869_object; object var_870_object;
	var_846_object = var_869_object;
	var_852_object = var_870_object;
	TaskCall(17);
	func_3995(var_871_object, var_872_object, var_873_string, var_874_bool, var_869_object, var_870_object);
	TaskReturn();
	bool var_855_bool;
	var_852_object->IsDialogEnd(var_855_bool);
	
	for(;;) {
		var_899_bool = !var_855_bool; //@nz
		if(var_899_bool == 0) goto Label_3984;
		@sync();
		var_852_object->IsDialogEnd(var_855_bool);
	}
	
Label_3984:
	object var_900_object;
	var_846_object = var_900_object;
	func_4477();
	@StopDialog(var_852_object);
	var_852_object->GetReturnValue(-1);
	int var_854_int = var_845_int;
}
EMIT "Stack[-4] = 0";


void func_4940(void)
{
	object var_95_object;
	int var_96_int;
	func_4702(var_96_int, "b2TravnikMark");
	if(var_96_int == 0) {
		@SetVariable("b2TravnikMark", 1);
		object var_104_object;
		func_5352(var_104_object);
		var_104_object = var_95_object;
		float var_115_float;
		func_4774(var_115_float);
		var_95_object->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, var_115_float);
		float var_122_float;
		func_4774(var_122_float);
		var_95_object->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, var_122_float);
		float var_127_float;
		func_4774(var_127_float);
		var_95_object->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, var_127_float);
		var_95_object = null;
	}
}


void func_4686(object var_141_object)
{
	object var_143_object;
	@self(var_143_object);
	var_143_object = var_141_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5199(bool var_327_bool)
{
	int var_329_int;
	func_4702(var_329_int, "b2q01");
	if(var_329_int == 2)
		var_327_bool = true;
	var_327_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_500_object, object var_501_object)
{
	var_0_object = var_501_object;
	var_1_object = var_500_object;
	var_3_string = false;
	if(1 != 0) {
		func_153(var_501_object, "Strange");
		var_0_object->SetMessage(518620); //@t
		var_0_object->ClearReplies(); //@t
		bool var_516_bool = false;
		bool var_517_bool;
		func_5151(var_1_object);
		if(var_517_bool != 0) {
			bool var_523_bool;
			func_5163(var_1_object);
			if(var_523_bool != 0)
				var_516_bool = true;
		}
		if(var_516_bool != 0)
			var_0_object->AddReply(518621, 19933, 19713); //@t
		var_0_object->AddReply(518624, -1, 19716); //@t
		goto Label_123;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_123:
	bool var_535_bool;
	func_4826(var_535_bool);
	if(var_535_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_152;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_152:
		return 0;

	}
	
}


void func_4180(void)
{
	float var_904_float;
	@rand(var_904_float, 8, 16);
	@SetTimer(10, var_904_float);
}


void func_4692(cvector var_105_cvector, cvector var_106_cvector)
{
	float var_109_float = sqrt(var_106_cvector | var_106_cvector);
	if(var_109_float < 0.000001)
		var_105_cvector = [0.0, 0.0, 0.0];
	var_105_cvector = var_106_cvector / var_109_float;
}


// @pe
void func_598(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_427_object, object var_428_object)
{
	var_0_object = var_428_object;
	var_1_object = var_427_object;
	var_3_string = false;
	if(1 != 0) {
		func_671(var_428_object, "Neutral");
		var_0_object->SetMessage(519273); //@t
		var_0_object->ClearReplies(); //@t
		bool var_443_bool;
		func_5187(var_1_object);
		if(var_443_bool != 0)
			var_0_object->AddReply(519274, 20428, 20426); //@t
		bool var_452_bool;
		func_5175(var_1_object);
		if(var_452_bool != 0)
			var_0_object->AddReply(519289, 20444, 20443); //@t
		var_0_object->AddReply(519275, -1, 20427); //@t
		goto Label_641;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x25a";
	}
Label_641:
	bool var_464_bool;
	func_4826(var_464_bool);
	if(var_464_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_670;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_670:
		return 0;

	}
	
}


// @pe
void func_1111(object var_2_object, string var_335_string)
{
	bool var_336_bool;
	func_4826(var_336_bool);
	if(!var_336_bool) //@nz
		return 0;
	if(var_335_string == var_2_object)
		return 0;
	string var_339_string; bool var_340_bool;
	var_335_string = var_339_string;
	if(var_335_string == "")
		var_340_bool = false;
	else
		var_340_bool = true;
	func_4649(var_339_string, var_340_bool);
	var_2_object = var_335_string;
	
}


// @pe
void func_5211(bool var_360_bool)
{
	int var_362_int;
	func_4702(var_362_int, "oob2Ospina1");
	if(var_362_int == 0) {
		var_360_bool = true;
		return 0;
	}
	var_360_bool = false;
}


// @pe
void func_3165(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_721_object, object var_722_object)
{
	var_0_object = var_722_object;
	var_1_object = var_721_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_728_bool;
		func_5127(var_1_object);
		if(var_728_bool != 0) {
			object var_734_object; object var_735_object;
			var_734_object = var_1_object;
			var_735_object = var_0_object;
			func_5009();
			func_3263(var_722_object, "Neutral");
			var_0_object->SetMessage(522089); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523647, 24892, 24891); //@t
			var_0_object->AddReply(523657, 24892, 24901); //@t
			bool var_753_bool;
			func_5115(var_1_object);
			if(var_753_bool != 0)
				var_0_object->AddReply(522091, 23261, 23260); //@t
		} else {
					func_3263(var_722_object, "Neutral");
					var_0_object->SetMessage(522094); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523598, 24834, 24833); //@t
					var_0_object->AddReply(522095, -1, 23264); //@t
		}
	}
	for(;;) {
		bool var_762_bool;
		func_4826(var_762_bool);
		if(var_762_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4633(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3262;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3262:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc61";


void func_4189(void)
{
	@KillTimer(10);
}


void func_4702(int var_329_int, string var_330_string)
{
	int var_332_int;
	@GetVariable(var_330_string, var_332_int);
	var_332_int = var_329_int;
}


void func_4707(object var_62_object, string var_63_string)
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
void func_5223(bool var_369_bool)
{
	int var_371_int;
	func_4702(var_371_int, "oob2Ospina2");
	if(var_371_int == 0) {
		var_369_bool = true;
		return 0;
	}
	var_369_bool = false;
}


// @pe
void func_2152(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_571_object, object var_572_object)
{
	var_0_object = var_572_object;
	var_1_object = var_571_object;
	var_3_string = false;
	if(1 != 0) {
		func_2225(var_572_object, "Neutral");
		var_0_object->SetMessage(521431); //@t
		var_0_object->ClearReplies(); //@t
		bool var_587_bool;
		func_5074(var_1_object);
		if(var_587_bool != 0)
			var_0_object->AddReply(521432, 22611, 22610); //@t
		bool var_596_bool;
		func_5139(var_1_object);
		if(var_596_bool != 0)
			var_0_object->AddReply(523679, 24958, 24931); //@t
		var_0_object->AddReply(521435, -1, 22613); //@t
		goto Label_2195;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x86c";
	}
Label_2195:
	bool var_608_bool;
	func_4826(var_608_bool);
	if(var_608_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2224;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2224:
		return 0;

	}
	
}


void func_4718(int var_98_int, int var_99_int)
{
	object var_101_object;
	@CreateIntVector(var_101_object);
	var_101_object->add(var_98_int);
	var_101_object->add(var_99_int);
	@SendWorldWndMessage(3, var_101_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5235(bool var_378_bool)
{
	int var_380_int;
	func_4702(var_380_int, "oob2Ospina3");
	if(var_380_int == 0) {
		var_378_bool = true;
		return 0;
	}
	var_378_bool = false;
}


// @pe
void func_4985(void)
{
	@SetVariable("b8q01", 6);
	func_5298();
}


void func_4730(object var_87_object, object var_88_object, int var_89_int)
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
		func_4718(var_98_int, var_99_int);
	}
	
}


void func_4477(void)
{
	bool var_286_bool;
	@CameraSwitchToNormal(true);
	bool var_288_bool;
	func_4826(var_288_bool);
	if(var_288_bool != 0) {
	} else {
		@HasAnimationTrack(var_286_bool, "head");
		if(var_286_bool == 0) goto Label_4494;
		@UnlookAsync("head");
	}
Label_4494:
	
}


// @pe
void func_5247(bool var_387_bool)
{
	int var_389_int;
	func_4702(var_389_int, "oob2Ospina4");
	if(var_389_int == 0) {
		var_387_bool = true;
		return 0;
	}
	var_387_bool = false;
}


// @pe
void func_4994(void)
{
	@SetVariable("oob10Ospina1", 1);
}


// @pe
void func_1926(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_234_object, object var_235_object)
{
	var_0_object = var_235_object;
	var_1_object = var_234_object;
	var_3_string = false;
	if(1 != 0) {
		func_1984(var_235_object, "Neutral");
		var_0_object->SetMessage(520800); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520801, 29131, 22018); //@t
		var_0_object->AddReply(527799, -1, 29132); //@t
		goto Label_1954;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x78a";
	}
Label_1954:
	bool var_265_bool;
	func_4826(var_265_bool);
	if(var_265_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1983;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1983:
		return 0;

	}
	
}


// @pe
void func_5000(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_5259();
}


void func_5259(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 315, 1, 522057);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_5324(var_61_bool, var_62_object, 313);
}
EMIT "Stack[-1] = 0";


void func_4749(object var_82_object, string var_83_string, int var_84_int)
{
	object var_86_object;
	@CreateInvItem(var_86_object);
	var_86_object->SetItemName(var_83_string);
	object var_87_object; object var_88_object; int var_89_int;
	var_82_object = var_87_object;
	var_86_object = var_88_object;
	var_84_int = var_89_int;
	func_4730(var_87_object, var_88_object, var_89_int);
}
EMIT "Stack[-1] = 0";


void func_4495(bool var_139_bool, object var_140_object)
{
	int var_146_int; int var_147_int;
	@GetVariable("voice_common", var_146_int);
	if(var_146_int != 0) {
		bool var_150_bool; object var_151_object;
		var_140_object = var_151_object;
		func_4553(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			bool var_181_bool; object var_182_object;
			var_140_object = var_182_object;
			func_4590(var_181_bool, var_182_object);
			if(!var_181_bool) { //@nz
				var_139_bool = false;
				return 4;
			}
		}
		@irand(var_147_int, 2);
		if(var_147_int != 0)
			@SetVariable("voice_common", ((var_146_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_226_bool; object var_227_object;
		var_140_object = var_227_object;
		func_4590(var_226_bool, var_227_object);
		if(!var_226_bool) { //@nz
			bool var_229_bool; object var_230_object;
			var_140_object = var_230_object;
			func_4553(var_229_bool, var_230_object);
			if(!var_229_bool) { //@nz
				var_139_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4551;
	
Label_4551:
	var_139_bool = true;
	
}


void func_912(object var_0_object, int var_296_int, object var_297_object)
{
	var_0_object = var_297_object;
	bool var_307_bool; object var_308_object;
	var_297_object = var_308_object;
	func_4408(var_307_bool, var_308_object, 70.0);
	if(!var_307_bool) { //@nz
		var_296_int = -2;
		return 8;
	}
	object var_303_object;
	@CreateDialog(var_303_object);
	int var_311_int;
	func_4820(var_311_int);
	var_303_object->SetNPCName(var_311_int);
	int var_312_int;
	func_4818(var_312_int);
	var_303_object->SetNPCDescription(var_312_int);
	string var_313_string;
	func_4822(var_313_string);
	var_303_object->SetPhoto(var_313_string);
	string var_314_string;
	func_4824(var_314_string);
	var_303_object->SetPhoto2(var_314_string);
	int var_315_int;
	func_5402(var_315_int);
	var_303_object->SetPlayerName(var_315_int);
	bool var_304_bool;
	@IsOverrideActive(var_304_bool);
	if(var_304_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	@DoDialog(var_303_object);
	bool var_317_bool; object var_318_object;
	object var_319_object;
	func_4686(var_319_object);
	var_319_object = var_318_object;
	func_4495(var_317_bool, var_318_object);
	object var_320_object; object var_321_object;
	var_297_object = var_320_object;
	var_303_object = var_321_object;
	TaskCall(5);
	func_993(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object);
	TaskReturn();
	bool var_306_bool;
	var_303_object->IsDialogEnd(var_306_bool);
	
	for(;;) {
		var_399_bool = !var_306_bool; //@nz
		if(var_399_bool == 0) goto Label_982;
		@sync();
		var_303_object->IsDialogEnd(var_306_bool);
	}
	
Label_982:
	object var_400_object;
	var_297_object = var_400_object;
	func_4477();
	@StopDialog(var_303_object);
	var_303_object->GetReturnValue(-1);
	int var_305_int = var_296_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5009(void)
{
	@SetVariable("oob11Ospina1", 1);
}


// @pe
void func_5015(void)
{
	func_5285();
}


// @pe
void func_3736(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_809_object, object var_810_object)
{
	var_0_object = var_810_object;
	var_1_object = var_809_object;
	var_3_string = false;
	if(1 != 0) {
		func_3799(var_810_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_3769;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe9c";
	}
Label_3769:
	bool var_834_bool;
	func_4826(var_834_bool);
	if(var_834_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3798;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3798:
		return 0;

	}
	
}


// @pe
void func_153(object var_2_object, string var_507_string)
{
	bool var_508_bool;
	func_4826(var_508_bool);
	if(!var_508_bool) //@nz
		return 0;
	if(var_507_string == var_2_object)
		return 0;
	string var_511_string; bool var_512_bool;
	var_507_string = var_511_string;
	if(var_507_string == "")
		var_512_bool = false;
	else
		var_512_bool = true;
	func_4649(var_511_string, var_512_bool);
	var_2_object = var_507_string;
	
}


void func_4762(bool var_56_bool, string var_57_string, string var_58_string)
{
	object var_60_object;
	@FindActor(var_60_object, var_57_string);
	if(var_60_object == null)
		var_56_bool = false;
	@Trigger(var_60_object, var_58_string);
	var_56_bool = true;
}
EMIT "Stack[-1] = 0";


void func_5272(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 223, 1, 519636);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_5324(var_77_bool, var_78_object, 221);
}
EMIT "Stack[-1] = 0";


void func_2714(object var_0_object, int var_620_int, object var_621_object)
{
	var_0_object = var_621_object;
	bool var_631_bool; object var_632_object;
	var_621_object = var_632_object;
	func_4408(var_631_bool, var_632_object, 70.0);
	if(!var_631_bool) { //@nz
		var_620_int = -2;
		return 8;
	}
	object var_627_object;
	@CreateDialog(var_627_object);
	int var_635_int;
	func_4820(var_635_int);
	var_627_object->SetNPCName(var_635_int);
	int var_636_int;
	func_4818(var_636_int);
	var_627_object->SetNPCDescription(var_636_int);
	string var_637_string;
	func_4822(var_637_string);
	var_627_object->SetPhoto(var_637_string);
	string var_638_string;
	func_4824(var_638_string);
	var_627_object->SetPhoto2(var_638_string);
	int var_639_int;
	func_5402(var_639_int);
	var_627_object->SetPlayerName(var_639_int);
	bool var_628_bool;
	@IsOverrideActive(var_628_bool);
	if(var_628_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	@DoDialog(var_627_object);
	bool var_641_bool; object var_642_object;
	object var_643_object;
	func_4686(var_643_object);
	var_643_object = var_642_object;
	func_4495(var_641_bool, var_642_object);
	object var_644_object; object var_645_object;
	var_621_object = var_644_object;
	var_627_object = var_645_object;
	TaskCall(11);
	func_2795(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object);
	TaskReturn();
	bool var_630_bool;
	var_627_object->IsDialogEnd(var_630_bool);
	
	for(;;) {
		var_693_bool = !var_630_bool; //@nz
		if(var_693_bool == 0) goto Label_2784;
		@sync();
		var_627_object->IsDialogEnd(var_630_bool);
	}
	
Label_2784:
	object var_694_object;
	var_621_object = var_694_object;
	func_4477();
	@StopDialog(var_627_object);
	var_627_object->GetReturnValue(-1);
	int var_629_int = var_620_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3995(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_869_object, object var_870_object)
{
	var_0_object = var_870_object;
	var_1_object = var_869_object;
	var_3_string = false;
	if(1 != 0) {
		func_4053(var_870_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_4023;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf9f";
	}
Label_4023:
	bool var_891_bool;
	func_4826(var_891_bool);
	if(var_891_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4052;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4052:
		return 0;

	}
	
}


// @pe
void func_5020(object var_116_object)
{
	object var_120_object;
	func_5352(var_120_object);
	object var_117_object;
	var_120_object = var_117_object;
	func_5369(var_117_object, "pt_gatherer3", (float)2);
	object var_140_object;
	func_5352(var_140_object);
	var_116_object->ShowMap(var_140_object);
}


// @pe
void func_671(object var_2_object, string var_434_string)
{
	bool var_435_bool;
	func_4826(var_435_bool);
	if(!var_435_bool) //@nz
		return 0;
	if(var_434_string == var_2_object)
		return 0;
	string var_438_string; bool var_439_bool;
	var_434_string = var_438_string;
	if(var_434_string == "")
		var_439_bool = false;
	else
		var_439_bool = true;
	func_4649(var_438_string, var_439_bool);
	var_2_object = var_434_string;
	
}


void func_5285(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 240, 1, 519745);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_5324(var_97_bool, var_98_object, 238);
}
EMIT "Stack[-1] = 0";


void func_4774(float var_115_float)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_117_float = var_115_float;
}


void func_4779(int var_194_int)
{
	float var_196_float;
	@GetGameTime(var_196_float);
	var_194_int = 1 + (var_196_float / 24);
}


// @pe
void func_5036(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2225(object var_2_object, string var_578_string)
{
	bool var_579_bool;
	func_4826(var_579_bool);
	if(!var_579_bool) //@nz
		return 0;
	if(var_578_string == var_2_object)
		return 0;
	string var_582_string; bool var_583_bool;
	var_578_string = var_582_string;
	if(var_578_string == "")
		var_583_bool = false;
	else
		var_583_bool = true;
	func_4649(var_582_string, var_583_bool);
	var_2_object = var_578_string;
	
}


void func_5298(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 290, 1, 521461);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_5324(var_61_bool, var_62_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5042(void)
{
	@SetVariable("b2q01", 3);
	bool var_56_bool;
	func_4762(var_56_bool, "quest_b2_01", "place_box");
	object var_62_object;
	func_4707(var_62_object, "quest_b2_02");
}


// @pe
void func_4788(bool var_293_bool, int var_294_int)
{
	int var_295_int;
	func_4779(var_295_int);
	var_293_bool = var_295_int == var_294_int;
}


void func_4794(string var_71_string, int var_72_int)
{
	string var_74_string = "idle";
	if(var_72_int != 0)
		var_74_string += var_72_int;
	var_74_string = var_71_string;
}


// @pe
void func_3263(object var_2_object, string var_738_string)
{
	bool var_739_bool;
	func_4826(var_739_bool);
	if(!var_739_bool) //@nz
		return 0;
	if(var_738_string == var_2_object)
		return 0;
	string var_742_string; bool var_743_bool;
	var_738_string = var_742_string;
	if(var_738_string == "")
		var_743_bool = false;
	else
		var_743_bool = true;
	func_4649(var_742_string, var_743_bool);
	var_2_object = var_738_string;
	
}


void func_5311(object var_70_object)
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


void func_4801(int var_65_int)
{
	int var_68_int; bool var_69_bool;
	var_68_int = 0;
	
	for(;;) {
		string var_71_string; int var_72_int;
		var_68_int = var_72_int;
		func_4794(var_71_string, var_72_int);
		@HasAnimation(var_69_bool, "all", var_71_string);
		if(!var_69_bool) //@nz
			break;
		var_68_int += 1;
	}
	var_68_int = var_65_int;
}


// @pe
void func_1984(object var_2_object, string var_241_string)
{
	bool var_242_bool;
	func_4826(var_242_bool);
	if(!var_242_bool) //@nz
		return 0;
	if(var_241_string == var_2_object)
		return 0;
	string var_245_string; bool var_246_bool;
	var_241_string = var_245_string;
	if(var_241_string == "")
		var_246_bool = false;
	else
		var_246_bool = true;
	func_4649(var_245_string, var_246_bool);
	var_2_object = var_241_string;
	
}


// @pe
void func_5057(void)
{
	@SetVariable("oob8Ospina1", 1);
}


// @pe
void func_5063(object var_79_object)
{
	@Trace("b8q01_bone is given");
	object var_82_object;
	var_79_object = var_82_object;
	func_4749(var_82_object, "b8q01_bone", 1);
}


void func_4553(bool var_150_bool, object var_151_object)
{
	string var_157_string; bool var_159_bool; int var_160_int; string var_161_string;
	var_157_string = "c";
	int var_158_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_151_object->HasProperty((var_157_string + (var_158_int + 1)), var_159_bool);
			if(!var_159_bool) { //@nz
			} else {
				var_158_int += 1;
			}
		}
		if(!var_158_int) { //@nz
			var_150_bool = false;
			return 10;
		}
		var_160_int = 0;
		if(var_158_int > 1)
			@irand(var_160_int, var_158_int);
		var_151_object->GetProperty((var_157_string + (var_160_int + 1)), var_161_string);
		bool var_173_bool; string var_174_string;
		var_161_string = var_174_string;
		func_4664(var_173_bool, var_174_string);
		var_173_bool = var_150_bool;
		return 10;

	}
}


void func_4300(void)
{
	bool var_59_bool; int var_60_int; int var_61_int; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	func_4403(var_63_bool);
	if(!var_63_bool) //@nz
		return 12;
	int var_65_int;
	func_4801(var_65_int);
	int var_57_int;
	var_65_int = var_57_int;
	int var_58_int = 0;
	
	for(;;) {
		bool var_78_bool = false;
		if(var_58_int < 5) {
			bool var_81_bool;
			func_4403(var_81_bool);
			if(var_81_bool != 0)
				var_78_bool = true;
		}
		if(var_78_bool != 0) {
			if(!var_57_int) { //@nz
				@Sleep(3, var_59_bool);
				if(!var_59_bool) { //@nz
				} else {
			} else {
			@irand(var_60_int, var_57_int);
			@irand(var_61_int, 5);
			if(var_61_int != 0)
				var_60_int = 0;
			string var_92_string; int var_93_int;
			var_60_int = var_93_int;
			func_4794(var_92_string, var_93_int);
			@PlayAnimation("all", var_92_string);
			@WaitForAnimEnd(var_62_bool);
			var_94_bool = !var_62_bool; //@nz
			if(var_94_bool == 0) goto Label_4355;
			goto Label_4366;
			}
				Label_4355:
					bool var_85_bool;
					func_4369(var_85_bool);
					var_86_bool = !var_85_bool; //@nz
					if(var_86_bool == 0) goto Label_4361;
			}
		}
	Label_4366:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4361:
		@ResetAAS();
		var_58_int += 1;
	}
	
}


void func_5324(bool var_61_bool, object var_62_object, int var_63_int)
{
	object var_70_object;
	func_5311(var_70_object);
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


void func_4818(int var_127_int)
{
	var_127_int = 515549;
}


// @pe
void func_5074(bool var_587_bool)
{
	int var_589_int;
	func_4702(var_589_int, "b8q01");
	if(var_589_int == 5)
		var_587_bool = true;
	var_587_bool = false;
}


void func_4820(int var_126_int)
{
	var_126_int = 502874;
}


// @pe
void func_4053(object var_2_object, string var_876_string)
{
	bool var_877_bool;
	func_4826(var_877_bool);
	if(!var_877_bool) //@nz
		return 0;
	if(var_876_string == var_2_object)
		return 0;
	string var_880_string; bool var_881_bool;
	var_876_string = var_880_string;
	if(var_876_string == "")
		var_881_bool = false;
	else
		var_881_bool = true;
	func_4649(var_880_string, var_881_bool);
	var_2_object = var_876_string;
	
}


void func_4822(string var_128_string)
{
	var_128_string = "ui/NPC_Ospina.png";
}


// @pe
void func_3799(object var_2_object, string var_816_string)
{
	bool var_817_bool;
	func_4826(var_817_bool);
	if(!var_817_bool) //@nz
		return 0;
	if(var_816_string == var_2_object)
		return 0;
	string var_820_string; bool var_821_bool;
	var_816_string = var_820_string;
	if(var_816_string == "")
		var_821_bool = false;
	else
		var_821_bool = true;
	func_4649(var_820_string, var_821_bool);
	var_2_object = var_816_string;
	
}


void func_4824(string var_129_string)
{
	var_129_string = "ui/NPC_Ospina_b.png";
}


void func_4826(bool var_121_bool)
{
	var_121_bool = true;
}


// @pe
void func_4828(void)
{
	@SetVariable("oob5Ospina1", 1);
}


// @pe
void func_5086(bool var_671_bool)
{
	int var_673_int;
	func_4702(var_673_int, "b10q01");
	if(var_673_int == 4)
		var_671_bool = true;
	var_671_bool = false;
}


// @pe
void func_993(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_320_object, object var_321_object)
{
	var_0_object = var_321_object;
	var_1_object = var_320_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_327_bool;
		func_5199(var_1_object);
		if(var_327_bool != 0) {
			func_1111(var_321_object, "Neutral");
			var_0_object->SetMessage(520279); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520280, 21473, 21472); //@t
			var_0_object->AddReply(520299, 21475, 21493); //@t
		} else {
					func_1111(var_321_object, "Neutral");
					var_0_object->SetMessage(520300); //@t
					var_0_object->ClearReplies(); //@t
					bool var_360_bool;
					func_5211(var_1_object);
					if(var_360_bool != 0)
						var_0_object->AddReply(520301, 21497, 21496); //@t
					bool var_369_bool;
					func_5223(var_1_object);
					if(var_369_bool != 0)
						var_0_object->AddReply(520317, 21513, 21512); //@t
					bool var_378_bool;
					func_5235(var_1_object);
					if(var_378_bool != 0)
						var_0_object->AddReply(520324, 21520, 21519); //@t
					bool var_387_bool;
					func_5247(var_1_object);
					if(var_387_bool != 0)
						var_0_object->AddReply(520327, 21523, 21522); //@t
					var_0_object->AddReply(520330, -1, 21525); //@t
		}
	}
	for(;;) {
		bool var_350_bool;
		func_4826(var_350_bool);
		if(var_350_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4633(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1110;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1110:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e5";


void func_4834(void)
{
	object var_61_object;
	int var_62_int;
	func_4702(var_62_int, "b5q01PlaceButchers");
	if(var_62_int == 0) {
		@SetVariable("b5q01PlaceButchers", 1);
		object var_70_object;
		func_5352(var_70_object);
		var_70_object = var_61_object;
		float var_81_float;
		func_4774(var_81_float);
		var_61_object->AddMark("b5q01GathererWife", "pt_gatherer3", 1, 530181, var_81_float);
		bool var_84_bool;
		func_4762(var_84_bool, "quest_b5_01", "place_butchers");
		var_61_object = null;
	}
}


void func_5352(object var_104_object)
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
void func_5098(bool var_662_bool)
{
	int var_664_int;
	func_4702(var_664_int, "b10q01");
	if(var_664_int == 1000)
		var_662_bool = true;
	var_662_bool = false;
}


// @pe
void func_2795(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_644_object, object var_645_object)
{
	var_0_object = var_645_object;
	var_1_object = var_644_object;
	var_3_string = false;
	if(1 != 0) {
		func_2885(var_645_object, "Neutral");
		var_0_object->SetMessage(521945); //@t
		var_0_object->ClearReplies(); //@t
		bool var_660_bool = true;
		bool var_661_bool = false;
		bool var_662_bool;
		func_5098(var_1_object);
		if(var_662_bool != 0) {
			bool var_668_bool;
			func_5110(var_1_object);
			if(var_668_bool != 0)
				var_661_bool = true;
		}
		if(var_661_bool != 1) {
			bool var_670_bool = false;
			bool var_671_bool;
			func_5086(var_1_object);
			if(var_671_bool != 0) {
				bool var_677_bool;
				func_5110(var_1_object);
				if(var_677_bool != 0)
					var_670_bool = true;
			}
			if(var_670_bool != 1)
				var_660_bool = false;
		}
		if(var_660_bool != 0)
			var_0_object->AddReply(521946, 23122, 23120); //@t
		var_0_object->AddReply(521947, -1, 23121); //@t
		goto Label_2855;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaef";
	}
Label_2855:
	bool var_685_bool;
	func_4826(var_685_bool);
	if(var_685_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4633(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2884;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2884:
		return 0;

	}
	
}


void func_4590(bool var_181_bool, object var_182_object)
{
	bool var_190_bool; int var_191_int; string var_192_string;
	int var_194_int;
	func_4779(var_194_int);
	string var_188_string = ("d" + var_194_int) + "m";
	int var_189_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_182_object->HasProperty((var_188_string + (var_189_int + 1)), var_190_bool);
			if(!var_190_bool) { //@nz
			} else {
				var_189_int += 1;
			}
		}
		if(!var_189_int) { //@nz
			var_181_bool = false;
			return 10;
		}
		var_191_int = 0;
		if(var_189_int > 1)
			@irand(var_191_int, var_189_int);
		var_182_object->GetProperty((var_188_string + (var_191_int + 1)), var_192_string);
		bool var_213_bool; string var_214_string;
		var_192_string = var_214_string;
		func_4664(var_213_bool, var_214_string);
		var_213_bool = var_181_bool;
		return 10;

	}
}


// @pe
void func_5110(bool var_668_bool)
{
	var_668_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_5369(object var_103_object, string var_104_string, float var_105_float)
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
void func_5115(bool var_753_bool)
{
	int var_755_int;
	func_4702(var_755_int, "b11q01");
	if(var_755_int == 1000)
		var_753_bool = true;
	var_753_bool = false;
}


