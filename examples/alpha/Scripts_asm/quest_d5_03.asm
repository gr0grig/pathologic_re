GlobalVarCount = 0

Strings:
	W:d5q03
	W:completed
	W:uprava_prison
	W:cs_uprava_prisoner1
	W:cs_play_all.bin
	W:cs_uprava_prisoner2
	W:cs_uprava_prisoner3
	W:cs_uprava_prisoner4
	W:cs_uprava_prisoner5
	A:ForceGeometryLoad
	W:player
	W:space
	W:cs_uprava_prison1.mot
	W:fail
	W:place_prisoners
	W:uprava_prison@door1
	W:pt_guard
	W:pers_birdmask
	W:d5q03_birdmask.xml
	W:pt_prisoner1
	W:pers_unosha
	W:d5q03_unosha.xml
	A:add
	W:pt_prisoner2
	W:pers_worker
	W:d5q03_worker.xml
	W:pt_prisoner3
	W:pers_wasted_male
	W:d5q03_wastedmale.xml
	W:pt_prisoner4
	W:pers_alkash
	W:d5q03_alkash.xml
	W:pt_prisoner5
	W:pt_prisoner6
	W:cleanup
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:size
	A:get
	A:clear
// @pool_raw:64003500710030003300000063006f006d0070006c00650074006500640000007500700072006100760061005f0070007200690073006f006e000000630073005f007500700072006100760061005f0070007200690073006f006e006500720031000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000630073005f007500700072006100760061005f0070007200690073006f006e006500720032000000630073005f007500700072006100760061005f0070007200690073006f006e006500720033000000630073005f007500700072006100760061005f0070007200690073006f006e006500720034000000630073005f007500700072006100760061005f0070007200690073006f006e006500720035000000466f72636547656f6d657472794c6f61640070006c0061007900650072000000730070006100630065000000630073005f007500700072006100760061005f0070007200690073006f006e0031002e006d006f00740000006600610069006c00000070006c006100630065005f0070007200690073006f006e0065007200730000007500700072006100760061005f0070007200690073006f006e00400064006f006f00720031000000700074005f0067007500610072006400000070006500720073005f0062006900720064006d00610073006b000000640035007100300033005f0062006900720064006d00610073006b002e0078006d006c000000700074005f0070007200690073006f006e00650072003100000070006500720073005f0075006e006f007300680061000000640035007100300033005f0075006e006f007300680061002e0078006d006c00000061646400700074005f0070007200690073006f006e00650072003200000070006500720073005f0077006f0072006b00650072000000640035007100300033005f0077006f0072006b00650072002e0078006d006c000000700074005f0070007200690073006f006e00650072003300000070006500720073005f007700610073007400650064005f006d0061006c0065000000640035007100300033005f007700610073007400650064006d0061006c0065002e0078006d006c000000700074005f0070007200690073006f006e00650072003400000070006500720073005f0061006c006b006100730068000000640035007100300033005f0061006c006b006100730068002e0078006d006c000000700074005f0070007200690073006f006e006500720035000000700074005f0070007200690073006f006e00650072003600000063006c00650061006e007500700000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000073697a650067657400636c65617200

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	FindActor (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_24 Op = 0xbf Vars = (int)
		EVENT_9 Op = 0x119 Vars = (int, float)


0x0: Push("d5q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call 0x14f

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 5
0xa: Call 0x106

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0xe: @ Trace(Stack[-19])
0xf: Pop(0)
0x10: Push("completed") // @poff=12
0x11: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x13: Push("uprava_prison") // @poff=32
0x14: @ GetSceneByName(Stack[-10], Stack[-1])
0x15: Pop(1)
0x16: Push("cs_uprava_prisoner1") // @poff=60
0x17: Push("cs_play_all.bin") // @poff=100
0x18: Push(CVector(0.0, 0.0, 0.0))
0x19: @ AddScriptedActor(Stack[-11], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x1a: Pop(3)
0x1b: Push("cs_uprava_prisoner2") // @poff=132
0x1c: Push("cs_play_all.bin") // @poff=100
0x1d: Push(CVector(0.0, 0.0, 0.0))
0x1e: @ AddScriptedActor(Stack[-10], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x1f: Pop(3)
0x20: Push("cs_uprava_prisoner3") // @poff=172
0x21: Push("cs_play_all.bin") // @poff=100
0x22: Push(CVector(0.0, 0.0, 0.0))
0x23: @ AddScriptedActor(Stack[-9], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x24: Pop(3)
0x25: Push("cs_uprava_prisoner4") // @poff=212
0x26: Push("cs_play_all.bin") // @poff=100
0x27: Push(CVector(0.0, 0.0, 0.0))
0x28: @ AddScriptedActor(Stack[-8], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x29: Pop(3)
0x2a: Push("cs_uprava_prisoner5") // @poff=252
0x2b: Push("cs_play_all.bin") // @poff=100
0x2c: Push(CVector(0.0, 0.0, 0.0))
0x2d: @ AddScriptedActor(Stack[-7], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x2e: Pop(3)
0x2f: @@ ForceGeometryLoad(); Obj=8 // @poff=292
0x30: Pop(0)
0x31: @@ ForceGeometryLoad(); Obj=7 // @poff=292
0x32: Pop(0)
0x33: @@ ForceGeometryLoad(); Obj=6 // @poff=292
0x34: Pop(0)
0x35: @@ ForceGeometryLoad(); Obj=5 // @poff=292
0x36: Pop(0)
0x37: @@ ForceGeometryLoad(); Obj=4 // @poff=292
0x38: Pop(0)
0x39: Push("player") // @poff=310
0x3a: @ FindActor(Stack[-4], Stack[-1])
0x3b: Pop(1)
0x3c: PushEmpty(object)
0x3d: Stack[-4] = Stack[-1]
0x3e: Call 0x11e

0x3f: Pop(1)
0x40: Push("space") // @poff=324
0x41: @ RegisterKeyCallback(Stack[-1])
0x42: Pop(1)
0x43: Push("cs_uprava_prison1.mot") // @poff=336
0x44: @ CameraPlay(Stack[-1])
0x45: Pop(1)
0x46: @ CameraWaitForPlayFinish()
0x47: Pop(0)
0x48: Push("space") // @poff=324
0x49: @ UnregisterKeyCallback(Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object)
0x4c: Stack[-4] = Stack[-1]
0x4d: Call 0x135

0x4e: Pop(1)
0x4f: @ RemoveActor(Stack[-8])
0x50: Pop(0)
0x51: @ RemoveActor(Stack[-7])
0x52: Pop(0)
0x53: @ RemoveActor(Stack[-6])
0x54: Pop(0)
0x55: @ RemoveActor(Stack[-5])
0x56: Pop(0)
0x57: @ RemoveActor(Stack[-4])
0x58: Pop(0)
0x59: @ CameraSwitchToNormal()
0x5a: Pop(0)
0x5b: PushEmpty()
0x5c: Call 0xdb

0x5d: Pop(0)
0x5e: Stack[-3] = 0
0x5f: Stack[-4] = 0
0x60: Stack[-5] = 0
0x61: Stack[-6] = 0
0x62: Stack[-7] = 0
0x63: Stack[-8] = 0
0x64: Stack[-9] = 0
0x65: GOTO 0xbe

0x66: Push("fail") // @poff=380
0x67: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x69: PushEmpty()
0x6a: Call 0xce

0x6b: Pop(0)
0x6c: GOTO 0xbe

0x6d: Push("place_prisoners") // @poff=390
0x6e: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0x70: PushEmpty(string, bool)
0x71: Stack[-2] = "uprava_prison@door1" // @poff=422
0x72: Stack[-1] = (bool) 0
0x73: Call 0x167

0x74: Pop(2)
0x75: Push("uprava_prison") // @poff=32
0x76: @ GetSceneByName(Stack[-3], Stack[-1])
0x77: Pop(1)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-7] = Stack[-4]
0x7a: Stack[-3] = "pt_guard" // @poff=462
0x7b: Stack[-2] = "pers_birdmask" // @poff=480
0x7c: Stack[-1] = "d5q03_birdmask.xml" // @poff=508
0x7d: Call 0x155

0x7e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x7f: Pop(5)
0x80: PushEmpty(object, object, string, string, string)
0x81: Stack[-7] = Stack[-4]
0x82: Stack[-3] = "pt_prisoner1" // @poff=546
0x83: Stack[-2] = "pers_unosha" // @poff=572
0x84: Stack[-1] = "d5q03_unosha.xml" // @poff=596
0x85: Call 0x155

0x86: Stack[-5] = Stack[-6]
0x87: Pop(5)
0x88: @@@ add(Stack[-1]); Obj=0 // @poff=630
0x89: Pop(0)
0x8a: PushEmpty(object, object, string, string, string)
0x8b: Stack[-7] = Stack[-4]
0x8c: Stack[-3] = "pt_prisoner2" // @poff=634
0x8d: Stack[-2] = "pers_worker" // @poff=660
0x8e: Stack[-1] = "d5q03_worker.xml" // @poff=684
0x8f: Call 0x155

0x90: Stack[-5] = Stack[-6]
0x91: Pop(5)
0x92: @@@ add(Stack[-1]); Obj=0 // @poff=630
0x93: Pop(0)
0x94: PushEmpty(object, object, string, string, string)
0x95: Stack[-7] = Stack[-4]
0x96: Stack[-3] = "pt_prisoner3" // @poff=718
0x97: Stack[-2] = "pers_wasted_male" // @poff=744
0x98: Stack[-1] = "d5q03_wastedmale.xml" // @poff=778
0x99: Call 0x155

0x9a: Stack[-5] = Stack[-6]
0x9b: Pop(5)
0x9c: @@@ add(Stack[-1]); Obj=0 // @poff=630
0x9d: Pop(0)
0x9e: PushEmpty(object, object, string, string, string)
0x9f: Stack[-7] = Stack[-4]
0xa0: Stack[-3] = "pt_prisoner4" // @poff=820
0xa1: Stack[-2] = "pers_alkash" // @poff=846
0xa2: Stack[-1] = "d5q03_alkash.xml" // @poff=870
0xa3: Call 0x155

0xa4: Stack[-5] = Stack[-6]
0xa5: Pop(5)
0xa6: @@@ add(Stack[-1]); Obj=0 // @poff=630
0xa7: Pop(0)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-7] = Stack[-4]
0xaa: Stack[-3] = "pt_prisoner5" // @poff=904
0xab: Stack[-2] = "pers_worker" // @poff=660
0xac: Stack[-1] = "d5q03_worker.xml" // @poff=684
0xad: Call 0x155

0xae: Stack[-5] = Stack[-6]
0xaf: Pop(5)
0xb0: @@@ add(Stack[-1]); Obj=0 // @poff=630
0xb1: Pop(0)
0xb2: PushEmpty(object, object, string, string, string)
0xb3: Stack[-7] = Stack[-4]
0xb4: Stack[-3] = "pt_prisoner6" // @poff=930
0xb5: Stack[-2] = "pers_unosha" // @poff=572
0xb6: Stack[-1] = "d5q03_unosha.xml" // @poff=596
0xb7: Call 0x155

0xb8: Stack[-5] = Stack[-6]
0xb9: Pop(5)
0xba: @@@ add(Stack[-1]); Obj=0 // @poff=630
0xbb: Pop(0)
0xbc: Stack[-1] = 0
0xbd: Stack[-2] = 0
0xbe: Return(); Pop(18)

0xbf: PushEmpty()
0xc0: @ CameraSwitchToNormal()
0xc1: Pop(0)
0xc2: Return(); Pop(0)

0xc3: PushEmpty(int, int)
0xc4: Push("d5q03") // @poff=0
0xc5: @ GetVariable(Stack[-1], Stack[-2])
0xc6: Pop(1)
0xc7: Push((int) 1000)
0xc8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xca: PushEmpty()
0xcb: Call 0xce

0xcc: Pop(0)
0xcd: Return(); Pop(2)

0xce: Push("d5q03") // @poff=0
0xcf: Push((int) -1)
0xd0: @ SetVariable(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = "uprava_prison@door1" // @poff=422
0xd4: Stack[-1] = (bool) 1
0xd5: Call 0x167

0xd6: Pop(2)
0xd7: PushEmpty()
0xd8: Call 0xf6

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty(int, int)
0xdc: Push("d5q03") // @poff=0
0xdd: @ GetVariable(Stack[-1], Stack[-2])
0xde: Pop(1)
0xdf: PushEmpty(bool)
0xe0: Stack[-1] = (bool) 0
0xe1: Push((int) 1000)
0xe2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe4: Push((int) -1)
0xe5: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-1] = (bool) 1
0xe8: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe9: Push("d5q03") // @poff=0
0xea: Push((int) 1000)
0xeb: @ SetVariable(Stack[-2], Stack[-1])
0xec: Pop(2)
0xed: PushEmpty(string, bool)
0xee: Stack[-2] = "uprava_prison@door1" // @poff=422
0xef: Stack[-1] = (bool) 1
0xf0: Call 0x167

0xf1: Pop(2)
0xf2: PushEmpty()
0xf3: Call 0xf6

0xf4: Pop(0)
0xf5: Return(); Pop(2)

0xf6: EventDisable(26)
0xf7: PushEmpty(object)
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call 0x177

0xfa: Pop(1)
0xfb: Push( Stack[1 + Tasks[-1].StackPointer] )
0xfc: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfd: Push("cleanup") // @poff=956
0xfe: @ Trigger(Stack[-1]T, Stack[-1])
0xff: Pop(1)
0x100: PushEmpty(object)
0x101: Call 0x149

0x102: Pop(0)
0x103: @ RemoveActor(Stack[-1])
0x104: Pop(1)
0x105: Return(); Pop(0)

0x106: PushEmpty(float, float)
0x107: @ GetGameTime(Stack[-1])
0x108: Pop(0)
0x109: Push((int) 24)
0x10a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x10b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10d: PushEmpty()
0x10e: Call 0xf6

0x10f: Pop(0)
0x110: GOTO 0x118

0x111: Push((int) 0)
0x112: Push((int) 24)
0x113: Pop(1); Push(Stack[-5] * Stack[-1]);
0x114: @ SetTimeEvent(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: @ Hold()
0x117: Pop(0)
0x118: Return(); Pop(2)

0x119: PushEmpty()
0x11a: PushEmpty()
0x11b: Call 0xc3

0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: PushEmpty(bool, int, bool, int)
0x11f: Pop(0); Push((bool) Stack[-5] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Return(); Pop(4)

0x122: Push("noaccess") // @poff=972
0x123: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=990
0x124: Pop(1)
0x125: Push(Stack[-2])
0x126: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x127: Push("noaccess") // @poff=972
0x128: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=1002
0x129: Pop(1)
0x12a: Push("noaccess") // @poff=972
0x12b: Push((int) 1)
0x12c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12d: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=1014
0x12e: Pop(2)
0x12f: GOTO 0x134

0x130: Push("noaccess") // @poff=972
0x131: Push((int) 1)
0x132: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=1014
0x133: Pop(2)
0x134: Return(); Pop(4)

0x135: PushEmpty(int, int)
0x136: Pop(0); Push((bool) Stack[-3] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Return(); Pop(2)

0x139: Push("noaccess") // @poff=972
0x13a: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=1002
0x13b: Pop(1)
0x13c: Push((int) 1)
0x13d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13f: Push("noaccess") // @poff=972
0x140: Push((int) 1)
0x141: Pop(1); Push(Stack[-3] - Stack[-1]);
0x142: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=1014
0x143: Pop(2)
0x144: GOTO 0x148

0x145: Push("noaccess") // @poff=972
0x146: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=1026
0x147: Pop(1)
0x148: Return(); Pop(2)

0x149: PushEmpty(object, object)
0x14a: @ self(Stack[-1])
0x14b: Pop(0)
0x14c: Stack[-1] = Stack[-3]
0x14d: Return(); Pop(2)

0x14e: Stack[-1] = 0
0x14f: PushEmpty(object, object)
0x150: @ CreateObjectVector(Stack[-1])
0x151: Pop(0)
0x152: Stack[-1] = Stack[-3]
0x153: Return(); Pop(2)

0x154: Stack[-1] = 0
0x155: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x156: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1041
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-4] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15a: Push("Locator ") // @poff=1052
0x15b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x15c: Push(" doesn't exist") // @poff=1070
0x15d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15e: @ Trace(Stack[-1])
0x15f: Pop(1)
0x160: Stack[-1] = 0
0x161: GOTO 0x164

0x162: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x163: Pop(0)
0x164: Stack[-1] = Stack[-13]
0x165: Return(); Pop(8)

0x166: Stack[-1] = 0
0x167: PushEmpty(object, object)
0x168: @ FindActor(Stack[-1], Stack[-4])
0x169: Pop(0)
0x16a: Pop(0); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: Push("Door ") // @poff=1100
0x16d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x16e: Push(" not found") // @poff=1112
0x16f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x170: @ Trace(Stack[-1])
0x171: Pop(1)
0x172: Push("locked") // @poff=1134
0x173: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1014
0x174: Pop(1)
0x175: Return(); Pop(2)

0x176: Stack[-1] = 0
0x177: PushEmpty(int, int, object, int, int, object)
0x178: @@ size(Stack[-3]); Obj=7 // @poff=1148
0x179: Pop(0)
0x17a: Stack[-2] = (int) 0
0x17b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x17c: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x17d: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=1153
0x17e: Pop(0)
0x17f: Push(Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: @ RemoveActor(Stack[-1])
0x182: Pop(0)
0x183: Stack[-1] = 0
0x184: Push((int) 1)
0x185: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x186: GOTO 0x17b

0x187: @@ clear(); Obj=7 // @poff=1157
0x188: Pop(0)
0x189: Return(); Pop(6)

