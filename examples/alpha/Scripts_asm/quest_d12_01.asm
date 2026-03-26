GlobalVarCount = 0

Strings:
	W:place_birdmask
	W:pt_d12q01_birdmask
	W:pers_birdmask
	W:d12q01_birdmask.xml
	W:init_sobor
	W:NPC_Aglaja
	W:noaglaja
	W:pt_d12q01_Klara
	W:NPC_Klara
	W:d12q01_Klara.xml
	W:pt_d12q01_Block
	W:NPC_Block
	W:d12q01_Block.xml
	W:pt_d12q01_Burah
	W:NPC_Burah
	W:d12q01_Burah.xml
	W:pt_d12q01_Aglaja
	W:d12q01_Aglaja.xml
	W:isobor@door1
	W:init_theater
	W:d12q01_tbirdmask.xml
	W:pt_d12q01_whitemask
	W:pers_whitemask
	W:d12q01_twhitemask.xml
	W:itheater@door1
	W:init_mnogogrannik
	W:hidden_room@door1
	W:hidden_room
	W:pt_girl
	W:pers_littlegirl2
	W:d12q01_littlegirl.xml
	W:pt_boy
	W:pers_littleboy2
	W:d12q01_littleboy.xml
	W:fail
	W:completed
	W:d12q01
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:70006c006100630065005f0062006900720064006d00610073006b000000700074005f006400310032007100300031005f0062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b0000006400310032007100300031005f0062006900720064006d00610073006b002e0078006d006c00000069006e00690074005f0073006f0062006f00720000004e00500043005f00410067006c0061006a00610000006e006f00610067006c0061006a0061000000700074005f006400310032007100300031005f004b006c0061007200610000004e00500043005f004b006c0061007200610000006400310032007100300031005f004b006c006100720061002e0078006d006c000000700074005f006400310032007100300031005f0042006c006f0063006b0000004e00500043005f0042006c006f0063006b0000006400310032007100300031005f0042006c006f0063006b002e0078006d006c000000700074005f006400310032007100300031005f004200750072006100680000004e00500043005f004200750072006100680000006400310032007100300031005f00420075007200610068002e0078006d006c000000700074005f006400310032007100300031005f00410067006c0061006a00610000006400310032007100300031005f00410067006c0061006a0061002e0078006d006c000000690073006f0062006f007200400064006f006f0072003100000069006e00690074005f00740068006500610074006500720000006400310032007100300031005f00740062006900720064006d00610073006b002e0078006d006c000000700074005f006400310032007100300031005f00770068006900740065006d00610073006b00000070006500720073005f00770068006900740065006d00610073006b0000006400310032007100300031005f007400770068006900740065006d00610073006b002e0078006d006c00000069007400680065006100740065007200400064006f006f0072003100000069006e00690074005f006d006e006f0067006f006700720061006e006e0069006b000000680069006400640065006e005f0072006f006f006d00400064006f006f00720031000000680069006400640065006e005f0072006f006f006d000000700074005f006700690072006c00000070006500720073005f006c006900740074006c0065006700690072006c00320000006400310032007100300031005f006c006900740074006c0065006700690072006c002e0078006d006c000000700074005f0062006f007900000070006500720073005f006c006900740074006c00650062006f007900320000006400310032007100300031005f006c006900740074006c00650062006f0079002e0078006d006c0000006600610069006c00000063006f006d0070006c006500740065006400000064003100320071003000310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	AddActor (6 args)
	FindActor (2 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object, object, object, object, object)
0x5: @ Trace(Stack[-9])
0x6: Pop(0)
0x7: Push("place_birdmask") // @poff=0
0x8: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-9] = Stack[-4]
0xe: Stack[-3] = "pt_d12q01_birdmask" // @poff=30
0xf: Stack[-2] = "pers_birdmask" // @poff=68
0x10: Stack[-1] = "d12q01_birdmask.xml" // @poff=96
0x11: Call 0xad

0x12: Pop(5)
0x13: Stack[-4] = 0
0x14: GOTO 0x88

0x15: Push("init_sobor") // @poff=136
0x16: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x18: Push("sobor") // @poff=146
0x19: @ GetSceneByName(Stack[-4], Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(bool, string)
0x1c: Stack[-1] = "NPC_Aglaja" // @poff=158
0x1d: Call 0xcf

0x1e: Pop(2)
0x1f: Push("noaglaja") // @poff=180
0x20: @ Trigger(Stack[-4], Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-8] = Stack[-4]
0x24: Stack[-3] = "pt_d12q01_Klara" // @poff=198
0x25: Stack[-2] = "NPC_Klara" // @poff=230
0x26: Stack[-1] = "d12q01_Klara.xml" // @poff=250
0x27: Call 0x9b

0x28: Pop(5)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-8] = Stack[-4]
0x2b: Stack[-3] = "pt_d12q01_Block" // @poff=284
0x2c: Stack[-2] = "NPC_Block" // @poff=316
0x2d: Stack[-1] = "d12q01_Block.xml" // @poff=336
0x2e: Call 0x9b

0x2f: Pop(5)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-8] = Stack[-4]
0x32: Stack[-3] = "pt_d12q01_Burah" // @poff=370
0x33: Stack[-2] = "NPC_Burah" // @poff=402
0x34: Stack[-1] = "d12q01_Burah.xml" // @poff=422
0x35: Call 0x9b

0x36: Pop(5)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-8] = Stack[-4]
0x39: Stack[-3] = "pt_d12q01_Aglaja" // @poff=456
0x3a: Stack[-2] = "NPC_Aglaja" // @poff=158
0x3b: Stack[-1] = "d12q01_Aglaja.xml" // @poff=490
0x3c: Call 0x9b

0x3d: Pop(5)
0x3e: PushEmpty(string, bool)
0x3f: Stack[-2] = "isobor@door1" // @poff=526
0x40: Stack[-1] = (bool) 1
0x41: Call 0xbf

0x42: Pop(2)
0x43: Stack[-3] = 0
0x44: GOTO 0x88

0x45: Push("init_theater") // @poff=552
0x46: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x48: Push("theater") // @poff=562
0x49: @ GetSceneByName(Stack[-3], Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-7] = Stack[-4]
0x4d: Stack[-3] = "pt_d12q01_birdmask" // @poff=30
0x4e: Stack[-2] = "pers_birdmask" // @poff=68
0x4f: Stack[-1] = "d12q01_tbirdmask.xml" // @poff=578
0x50: Call 0x9b

0x51: Pop(5)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-7] = Stack[-4]
0x54: Stack[-3] = "pt_d12q01_whitemask" // @poff=620
0x55: Stack[-2] = "pers_whitemask" // @poff=660
0x56: Stack[-1] = "d12q01_twhitemask.xml" // @poff=690
0x57: Call 0x9b

0x58: Pop(5)
0x59: PushEmpty(string, bool)
0x5a: Stack[-2] = "itheater@door1" // @poff=734
0x5b: Stack[-1] = (bool) 1
0x5c: Call 0xbf

0x5d: Pop(2)
0x5e: Stack[-2] = 0
0x5f: GOTO 0x88

0x60: Push("init_mnogogrannik") // @poff=764
0x61: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x63: PushEmpty(string, bool)
0x64: Stack[-2] = "hidden_room@door1" // @poff=800
0x65: Stack[-1] = (bool) 0
0x66: Call 0xbf

0x67: Pop(2)
0x68: Push("hidden_room") // @poff=836
0x69: @ GetSceneByName(Stack[-2], Stack[-1])
0x6a: Pop(1)
0x6b: PushEmpty(object, object, string, string, string)
0x6c: Stack[-6] = Stack[-4]
0x6d: Stack[-3] = "pt_girl" // @poff=860
0x6e: Stack[-2] = "pers_littlegirl2" // @poff=876
0x6f: Stack[-1] = "d12q01_littlegirl.xml" // @poff=910
0x70: Call 0x9b

0x71: Pop(5)
0x72: PushEmpty(object, object, string, string, string)
0x73: Stack[-6] = Stack[-4]
0x74: Stack[-3] = "pt_boy" // @poff=954
0x75: Stack[-2] = "pers_littleboy2" // @poff=968
0x76: Stack[-1] = "d12q01_littleboy.xml" // @poff=1000
0x77: Call 0x9b

0x78: Pop(5)
0x79: Stack[-1] = 0
0x7a: GOTO 0x88

0x7b: Push("fail") // @poff=1042
0x7c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7e: PushEmpty()
0x7f: Call 0x89

0x80: Pop(0)
0x81: GOTO 0x88

0x82: Push("completed") // @poff=1052
0x83: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x85: PushEmpty()
0x86: Call 0x91

0x87: Pop(0)
0x88: Return(); Pop(8)

0x89: Push("d12q01") // @poff=1072
0x8a: Push((int) -1)
0x8b: @ SetVariable(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: PushEmpty()
0x8e: Call 0x99

0x8f: Pop(0)
0x90: Return(); Pop(0)

0x91: Push("d12q01") // @poff=1072
0x92: Push((int) 1000)
0x93: @ SetVariable(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: PushEmpty()
0x96: Call 0x99

0x97: Pop(0)
0x98: Return(); Pop(0)

0x99: EventDisable(26)
0x9a: Return(); Pop(0)

0x9b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1086
0x9d: Pop(0)
0x9e: Pop(0); Push((bool) Stack[-4] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa0: Push("Locator ") // @poff=1097
0xa1: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa2: Push(" doesn't exist") // @poff=1115
0xa3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa4: @ Trace(Stack[-1])
0xa5: Pop(1)
0xa6: Stack[-1] = 0
0xa7: GOTO 0xaa

0xa8: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa9: Pop(0)
0xaa: Stack[-1] = Stack[-13]
0xab: Return(); Pop(8)

0xac: Stack[-1] = 0
0xad: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xae: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1086
0xaf: Pop(0)
0xb0: Pop(0); Push((bool) Stack[-4] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb2: Push("Locator ") // @poff=1097
0xb3: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb4: Push(" doesn't exist") // @poff=1115
0xb5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb6: @ Trace(Stack[-1])
0xb7: Pop(1)
0xb8: Stack[-1] = 0
0xb9: GOTO 0xbc

0xba: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1145
0xbb: Pop(0)
0xbc: Stack[-1] = Stack[-13]
0xbd: Return(); Pop(8)

0xbe: Stack[-1] = 0
0xbf: PushEmpty(object, object)
0xc0: @ FindActor(Stack[-1], Stack[-4])
0xc1: Pop(0)
0xc2: Pop(0); Push((bool) Stack[-1] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc4: Push("Door ") // @poff=1164
0xc5: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc6: Push(" not found") // @poff=1176
0xc7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8: @ Trace(Stack[-1])
0xc9: Pop(1)
0xca: Push("locked") // @poff=1198
0xcb: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1212
0xcc: Pop(1)
0xcd: Return(); Pop(2)

0xce: Stack[-1] = 0
0xcf: PushEmpty(object, object)
0xd0: @ FindActor(Stack[-1], Stack[-3])
0xd1: Pop(0)
0xd2: Pop(0); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-4] = (bool) 0
0xd5: Return(); Pop(2)

0xd6: @ RemoveActor(Stack[-1])
0xd7: Pop(0)
0xd8: Stack[-4] = (bool) 1
0xd9: Return(); Pop(2)

0xda: Stack[-1] = 0
