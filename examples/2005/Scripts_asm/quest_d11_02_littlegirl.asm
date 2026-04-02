GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:cleanup
	W:restore
	A:GetPosition
	A:GetEyesHeight
	W:head
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:playsound
	W:giveitem
	W:powder is given
	W:powder
	W:ood11ULittleGirl1
	W:d11q02
	W:quest_d11_02
	W:init_graveyard
	W:completed
	W:ood11ULittleGirl2
	A:SetReturnValue
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d00000070006f007700640065007200200069007300200067006900760065006e00000070006f00770064006500720000006f006f0064003100310055004c006900740074006c0065004700690072006c00310000006400310031007100300032000000710075006500730074005f006400310031005f0030003200000069006e00690074005f00670072006100760065007900610072006400000063006f006d0070006c00650074006500640000006f006f0064003100310055004c006900740074006c0065004700690072006c003200000053657452657475726e56616c756500430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	Trace (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x20e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe6 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x213 Vars = (object)
		EVENT_26 Op = 0x225 Vars = (string)
		EVENT_6 Op = 0x241 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x253

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3fa

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3fc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e5

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x297

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x359

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0xd0

0x58: Pop(1)
0x59: Push((int) 514156)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 514169)
0x5f: Push((int) 15384)
0x60: Push((int) 15383)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 539603)
0x64: Push((int) 15384)
0x65: Push((int) 41547)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0xb2

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xd0

0x6c: Pop(1)
0x6d: Push((int) 514161)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 1
0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78: Call2 0x365

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x37d

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 1) GOTO 0x91; Pop(1)

0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 0
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x389

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x37d

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 1) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 0
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 514162)
0x93: Push((int) 15377)
0x94: Push((int) 15376)
0x95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96: Pop(3)
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x371

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x34d

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Stack[-1] = (bool) 1
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: Push((int) 514165)
0xa6: Push((int) 15380)
0xa7: Push((int) 15379)
0xa8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa9: Pop(3)
0xaa: Push((int) 514168)
0xab: Push((int) -1)
0xac: Push((int) 15382)
0xad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xae: Pop(3)
0xaf: GOTO 0xb2

0xb0: Return(); Pop(0)

0xb1: GOTO 0x4e

0xb2: PushEmpty(bool)
0xb3: Call2 0x3fe

0xb4: Pop(0)
0xb5: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb6: @ lshWaitForAnimEnd()
0xb7: Pop(0)
0xb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: GOTO 0xc0

0xbb: PushEmpty(string)
0xbc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbd: Call2 0x2a8

0xbe: Pop(1)
0xbf: GOTO 0xb6

0xc0: GOTO 0xcf

0xc1: Push("all") // @poff=138
0xc2: Push("idle") // @poff=146
0xc3: @ PlayAnimation(Stack[-2], Stack[-1])
0xc4: Pop(2)
0xc5: @ WaitForAnimEnd()
0xc6: Pop(0)
0xc7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: GOTO 0xcf

0xca: Push("all") // @poff=138
0xcb: Push("idle") // @poff=146
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: GOTO 0xc5

0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: PushEmpty(bool)
0xd2: Call2 0x3fe

0xd3: Pop(0)
0xd4: Pop(1); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(0)

0xd7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Return(); Pop(0)

0xda: PushEmpty(string, bool)
0xdb: Stack[-3] = Stack[-2]
0xdc: Push("") // @poff=102
0xdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: Stack[-1] = (bool) 0
0xe0: GOTO 0xe2

0xe1: Stack[-1] = (bool) 1
0xe2: Call2 0x2af

0xe3: Pop(2)
0xe4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Push((int) 1)
0xe8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0xe9: PushEmpty()
0xea: Call2 0x2b5

0xeb: Pop(0)
0xec: Push((int) 15373)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x320

0xf3: Pop(2)
0xf4: Push((int) 15376)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x342

0xfb: Pop(2)
0xfc: Push((int) 15378)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x331

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x30f

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x309

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x348

0x112: Pop(2)
0x113: Push((int) 41554)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x331

0x11a: Pop(2)
0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x348

0x11f: Pop(2)
0x120: Push((int) 15379)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x31a

0x127: Pop(2)
0x128: Push((int) 15381)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object, object)
0x12c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Call2 0x348

0x12f: Pop(2)
0x130: Push((int) 15370)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x359

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xd0

0x13b: Pop(1)
0x13c: Push((int) 514156)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 514169)
0x142: Push((int) 15384)
0x143: Push((int) 15383)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Push((int) 539603)
0x147: Push((int) 15384)
0x148: Push((int) 41547)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=89
0x14e: Call2 0xd0

0x14f: Pop(1)
0x150: Push((int) 514161)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=116
0x154: Pop(0)
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 1
0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x365

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0x37d

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 1) GOTO 0x174; Pop(1)

0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x389

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Call2 0x37d

0x16f: Pop(1)
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Stack[-1] = (bool) 1
0x172: IF (Stack[-1] == 1) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 0
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: Push((int) 514162)
0x176: Push((int) 15377)
0x177: Push((int) 15376)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x371

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x34d

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: Push((int) 514165)
0x189: Push((int) 15380)
0x18a: Push((int) 15379)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Push((int) 514168)
0x18e: Push((int) -1)
0x18f: Push((int) 15382)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 15380)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral" // @poff=89
0x198: Call2 0xd0

0x199: Pop(1)
0x19a: Push((int) 514166)
0x19b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19c: Pop(1)
0x19d: @@@ ClearReplies(); Obj=0 // @poff=116
0x19e: Pop(0)
0x19f: Push((int) 514167)
0x1a0: Push((int) -1)
0x1a1: Push((int) 15381)
0x1a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 15377)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral" // @poff=89
0x1aa: Call2 0xd0

0x1ab: Pop(1)
0x1ac: Push((int) 514163)
0x1ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ae: Pop(1)
0x1af: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b0: Pop(0)
0x1b1: Push((int) 514164)
0x1b2: Push((int) -1)
0x1b3: Push((int) 15378)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Push((int) 539608)
0x1b7: Push((int) -1)
0x1b8: Push((int) 41554)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 15384)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral" // @poff=89
0x1c1: Call2 0xd0

0x1c2: Pop(1)
0x1c3: Push((int) 514170)
0x1c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c5: Pop(1)
0x1c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c7: Pop(0)
0x1c8: Push((int) 514157)
0x1c9: Push((int) 15372)
0x1ca: Push((int) 15371)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Push((int) 539604)
0x1ce: Push((int) 41550)
0x1cf: Push((int) 41549)
0x1d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 41550)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral" // @poff=89
0x1d8: Call2 0xd0

0x1d9: Pop(1)
0x1da: Push((int) 539605)
0x1db: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dc: Pop(1)
0x1dd: @@@ ClearReplies(); Obj=0 // @poff=116
0x1de: Pop(0)
0x1df: Push((int) 539606)
0x1e0: Push((int) 15372)
0x1e1: Push((int) 41551)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Push((int) 539609)
0x1e5: Push((int) -1)
0x1e6: Push((int) 41555)
0x1e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 15372)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral" // @poff=89
0x1ef: Call2 0xd0

0x1f0: Pop(1)
0x1f1: Push((int) 514158)
0x1f2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f3: Pop(1)
0x1f4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f5: Pop(0)
0x1f6: Push((int) 514159)
0x1f7: Push((int) -1)
0x1f8: Push((int) 15373)
0x1f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fa: Pop(3)
0x1fb: Push((int) 514160)
0x1fc: Push((int) -1)
0x1fd: Push((int) 15374)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x202: PushEmpty(bool)
0x203: Call2 0x3fe

0x204: Pop(0)
0x205: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x206: @ lshStopAnimation()
0x207: Pop(0)
0x208: GOTO 0x20b

0x209: @ StopAnimation()
0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: GOTO 0xe7

0x20d: Return(); Pop(0)

0x20e: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x20f: PushEmpty()
0x210: Call2 0x221

0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: Push( Stack[1 + Tasks[-1].StackPointer] )
0x215: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x216: PushEmpty(int, object)
0x217: Stack[-3] = Stack[-1]
0x218: Push(-2, 1); TaskCall(0)
0x219: Call2 0x0

0x21a: Pop(-2, 1); TaskReturn
0x21b: Pop(1)
0x21c: Push((int) 1000)
0x21d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x220: Return(); Pop(0)

0x221: @ Hold()
0x222: Pop(0)
0x223: GOTO 0x221

0x224: Return(); Pop(0)

0x225: PushEmpty(bool, bool)
0x226: Push("cleanup") // @poff=156
0x227: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x229: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22a: @ IsLoaded(Stack[-1])
0x22b: Pop(0)
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: Pop(0); Push((bool) Stack[-2] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x230: PushEmpty(bool)
0x231: Call2 0x251

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 1
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: PushEmpty(object)
0x237: Call2 0x2bc

0x238: Pop(0)
0x239: @ RemoveActor(Stack[-1])
0x23a: Pop(1)
0x23b: GOTO 0x240

0x23c: Push("restore") // @poff=172
0x23d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x240: Return(); Pop(2)

0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: Push( Stack[0 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(bool)
0x246: Call2 0x251

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(object)
0x24c: Call2 0x2bc

0x24d: Pop(0)
0x24e: @ RemoveActor(Stack[-1])
0x24f: Pop(1)
0x250: Return(); Pop(0)

0x251: Stack[-1] = (bool) 1
0x252: Return(); Pop(0)

0x253: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x254: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x255: Pop(0)
0x256: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x257: Pop(0)
0x258: Push(CvectorIndex(Stack[-8], 1))
0x259: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25b: @ GetPosition(Stack[-7])
0x25c: Pop(0)
0x25d: @ GetEyesHeight(Stack[-9])
0x25e: Pop(0)
0x25f: Push(CvectorIndex(Stack[-7], 1))
0x260: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x261: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x262: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x263: Push(CvectorIndex(Stack[-6], 1))
0x264: Stack[-1] = (int) 0
0x265: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x266: Pop(0); Push(Stack[-6] | Stack[-6]);
0x267: Pop(1); Push(Sqrt(Stack[-1]))
0x268: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x269: Stack[-5] = -Stack[-6]; Pop(0);
0x26a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26b: PushEmpty(cvector, cvector)
0x26c: Push([0.0, 1.0, 0.0])
0x26d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26e: Call2 0x2c2

0x26f: Pop(1)
0x270: Push((int) 25)
0x271: Pop(2); Push(Stack[-2] * Stack[-1]);
0x272: Pop(2); Push(Stack[-2] + Stack[-1]);
0x273: Push([0.0, 10.0, 0.0])
0x274: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x275: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x276: @ IsOverrideActive(Stack[-2])
0x277: Pop(0)
0x278: Push(Stack[-2])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-21] = (bool) 0
0x27b: Return(); Pop(18)

0x27c: @ StopWorld()
0x27d: Pop(0)
0x27e: @ CameraTransit(Stack[-3], Stack[-5])
0x27f: Pop(0)
0x280: Push(CvectorIndex(Stack[-4], 0))
0x281: Push(CvectorIndex(Stack[-5], 2))
0x282: @ Rotate(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: PushEmpty(bool)
0x285: Call2 0x3fe

0x286: Pop(0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x291

0x289: Push("head") // @poff=214
0x28a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28b: Pop(1)
0x28c: Push(Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28e: Push("head") // @poff=214
0x28f: @ LookAsyncCamera(Stack[-1])
0x290: Pop(1)
0x291: @ CameraWaitForPlayFinish()
0x292: Pop(0)
0x293: @ ResumeWorld()
0x294: Pop(0)
0x295: Stack[-21] = (bool) 1
0x296: Return(); Pop(18)

0x297: PushEmpty(bool, bool)
0x298: @ CameraSwitchToNormal()
0x299: Pop(0)
0x29a: PushEmpty(bool)
0x29b: Call2 0x3fe

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2a7

0x29f: Push("head") // @poff=214
0x2a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Push("head") // @poff=214
0x2a5: @ UnlookAsync(Stack[-1])
0x2a6: Pop(1)
0x2a7: Return(); Pop(2)

0x2a8: PushEmpty(float, float, float, float)
0x2a9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2aa: Pop(0)
0x2ab: Push((bool) 0)
0x2ac: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(1)
0x2ae: Return(); Pop(4)

0x2af: PushEmpty(float, float, float, float)
0x2b0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2b1: Pop(0)
0x2b2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2b3: Pop(0)
0x2b4: Return(); Pop(4)

0x2b5: PushEmpty(bool)
0x2b6: Call2 0x3fe

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: @ lshStopSpeech()
0x2ba: Pop(0)
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(object, object)
0x2bd: @ self(Stack[-1])
0x2be: Pop(0)
0x2bf: Stack[-1] = Stack[-3]
0x2c0: Return(); Pop(2)

0x2c1: Stack[-1] = 0
0x2c2: PushEmpty(float, float)
0x2c3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c5: Push((float)9.999999974752427e-07)
0x2c6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-4] = [0.0, 0.0, 0.0]
0x2c9: Return(); Pop(2)

0x2ca: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(int, int)
0x2cd: @ GetVariable(Stack[-3], Stack[-1])
0x2ce: Pop(0)
0x2cf: Stack[-1] = Stack[-4]
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(object, object)
0x2d2: @ CreateIntVector(Stack[-1])
0x2d3: Pop(0)
0x2d4: @@ add(Stack[-4]); Obj=1 // @poff=224
0x2d5: Pop(0)
0x2d6: @@ add(Stack[-3]); Obj=1 // @poff=224
0x2d7: Pop(0)
0x2d8: Push((int) 3)
0x2d9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2da: Pop(1)
0x2db: Return(); Pop(2)

0x2dc: Stack[-1] = 0
0x2dd: PushEmpty(int, int, bool, int, int, bool)
0x2de: @@ GetItemID(Stack[-3]); Obj=8 // @poff=228
0x2df: Pop(0)
0x2e0: Push("Category") // @poff=238
0x2e1: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=256
0x2e4: Pop(0)
0x2e5: Pop(0); Push((bool) Stack[-1] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=264
0x2e8: Pop(0)
0x2e9: GOTO 0x2ef

0x2ea: PushEmpty(int, int)
0x2eb: Stack[-5] = Stack[-2]
0x2ec: Stack[-9] = Stack[-1]
0x2ed: Call2 0x2d1

0x2ee: Pop(2)
0x2ef: Return(); Pop(6)

0x2f0: PushEmpty(object, object)
0x2f1: @ CreateInvItem(Stack[-1])
0x2f2: Pop(0)
0x2f3: @@ SetItemName(Stack[-4]); Obj=1 // @poff=274
0x2f4: Pop(0)
0x2f5: PushEmpty(object, object, int)
0x2f6: Stack[-8] = Stack[-3]
0x2f7: Stack[-4] = Stack[-2]
0x2f8: Stack[-6] = Stack[-1]
0x2f9: Call2 0x2dd

0x2fa: Pop(3)
0x2fb: Return(); Pop(2)

0x2fc: Stack[-1] = 0
0x2fd: PushEmpty(object, object)
0x2fe: @ FindActor(Stack[-1], Stack[-4])
0x2ff: Pop(0)
0x300: Pop(0); PushNull((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-5] = (bool) 0
0x303: Return(); Pop(2)

0x304: @ Trigger(Stack[-1], Stack[-3])
0x305: Pop(0)
0x306: Stack[-5] = (bool) 1
0x307: Return(); Pop(2)

0x308: Stack[-1] = 0
0x309: PushEmpty()
0x30a: Push("playsound") // @poff=286
0x30b: Push("giveitem") // @poff=306
0x30c: @ TriggerWorld(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Push("powder is given") // @poff=324
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: PushEmpty(object, string, int)
0x314: Stack[-5] = Stack[-3]
0x315: Stack[-2] = "powder" // @poff=356
0x316: Stack[-1] = (int) 1
0x317: Call2 0x2f0

0x318: Pop(3)
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: Push("ood11ULittleGirl1") // @poff=370
0x31c: Push((int) 1)
0x31d: @ SetVariable(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: Return(); Pop(0)

0x320: PushEmpty()
0x321: Push("d11q02") // @poff=406
0x322: Push((int) 1)
0x323: @ SetVariable(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: PushEmpty()
0x326: Call2 0x395

0x327: Pop(0)
0x328: PushEmpty()
0x329: Call2 0x3af

0x32a: Pop(0)
0x32b: PushEmpty(bool, string, string)
0x32c: Stack[-2] = "quest_d11_02" // @poff=420
0x32d: Stack[-1] = "init_graveyard" // @poff=446
0x32e: Call2 0x2fd

0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: PushEmpty(int, string)
0x333: Stack[-1] = "d11q02" // @poff=406
0x334: Call2 0x2cc

0x335: Pop(1)
0x336: Push((int) 1000)
0x337: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x339: PushEmpty()
0x33a: Call2 0x3a2

0x33b: Pop(0)
0x33c: PushEmpty(bool, string, string)
0x33d: Stack[-2] = "quest_d11_02" // @poff=420
0x33e: Stack[-1] = "completed" // @poff=476
0x33f: Call2 0x2fd

0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: PushEmpty()
0x343: Push("ood11ULittleGirl2") // @poff=496
0x344: Push((int) 1)
0x345: @ SetVariable(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: Return(); Pop(0)

0x348: PushEmpty()
0x349: Push((int) 1000)
0x34a: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=532
0x34b: Pop(1)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(int, string)
0x34f: Stack[-1] = "ood11ULittleGirl1" // @poff=370
0x350: Call2 0x2cc

0x351: Pop(1)
0x352: Push((int) 0)
0x353: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-2] = (bool) 1
0x356: Return(); Pop(0)

0x357: Stack[-2] = (bool) 0
0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: PushEmpty(int, string)
0x35b: Stack[-1] = "d11q02" // @poff=406
0x35c: Call2 0x2cc

0x35d: Pop(1)
0x35e: Push((int) 0)
0x35f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = (bool) 1
0x362: Return(); Pop(0)

0x363: Stack[-2] = (bool) 0
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(int, string)
0x367: Stack[-1] = "d11q02" // @poff=406
0x368: Call2 0x2cc

0x369: Pop(1)
0x36a: Push((int) 2)
0x36b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-2] = (bool) 1
0x36e: Return(); Pop(0)

0x36f: Stack[-2] = (bool) 0
0x370: Return(); Pop(0)

0x371: PushEmpty()
0x372: PushEmpty(int, string)
0x373: Stack[-1] = "d11q02" // @poff=406
0x374: Call2 0x2cc

0x375: Pop(1)
0x376: Push((int) -1)
0x377: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-2] = (bool) 1
0x37a: Return(); Pop(0)

0x37b: Stack[-2] = (bool) 0
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(int, string)
0x37f: Stack[-1] = "ood11ULittleGirl2" // @poff=496
0x380: Call2 0x2cc

0x381: Pop(1)
0x382: Push((int) 0)
0x383: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-2] = (bool) 1
0x386: Return(); Pop(0)

0x387: Stack[-2] = (bool) 0
0x388: Return(); Pop(0)

0x389: PushEmpty()
0x38a: PushEmpty(int, string)
0x38b: Stack[-1] = "d11q02" // @poff=406
0x38c: Call2 0x2cc

0x38d: Pop(1)
0x38e: Push((int) 1000)
0x38f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-2] = (bool) 1
0x392: Return(); Pop(0)

0x393: Stack[-2] = (bool) 0
0x394: Return(); Pop(0)

0x395: PushEmpty(object, object)
0x396: Push((int) 197)
0x397: Push((int) 2)
0x398: Push((int) 515485)
0x399: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: PushEmpty(bool, object, int)
0x39c: Stack[-4] = Stack[-2]
0x39d: Stack[-1] = (int) -1
0x39e: Call2 0x3c9

0x39f: Pop(3)
0x3a0: Return(); Pop(2)

0x3a1: Stack[-1] = 0
0x3a2: PushEmpty(object, object)
0x3a3: Push((int) 198)
0x3a4: Push((int) 2)
0x3a5: Push((int) 515486)
0x3a6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: PushEmpty(bool, object, int)
0x3a9: Stack[-4] = Stack[-2]
0x3aa: Stack[-1] = (int) 197
0x3ab: Call2 0x3c9

0x3ac: Pop(3)
0x3ad: Return(); Pop(2)

0x3ae: Stack[-1] = 0
0x3af: PushEmpty(object, object)
0x3b0: Push((int) 199)
0x3b1: Push((int) 2)
0x3b2: Push((int) 515487)
0x3b3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: PushEmpty(bool, object, int)
0x3b6: Stack[-4] = Stack[-2]
0x3b7: Stack[-1] = (int) 197
0x3b8: Call2 0x3c9

0x3b9: Pop(3)
0x3ba: Return(); Pop(2)

0x3bb: Stack[-1] = 0
0x3bc: PushEmpty(object, object)
0x3bd: @ GetDiaryRoot(Stack[-1])
0x3be: Pop(0)
0x3bf: Pop(0); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c1: Push("Can't retrieve diary root") // @poff=547
0x3c2: @ Trace(Stack[-1])
0x3c3: Pop(1)
0x3c4: Stack[-3] = (bool) 0
0x3c5: Return(); Pop(2)

0x3c6: Stack[-1] = Stack[-3]
0x3c7: Return(); Pop(2)

0x3c8: Stack[-1] = 0
0x3c9: PushEmpty(object, object, int, object, object, int)
0x3ca: PushEmpty(object)
0x3cb: Call2 0x3bc

0x3cc: Stack[-1] = Stack[-4]
0x3cd: Pop(1)
0x3ce: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=599
0x3cf: Pop(0)
0x3d0: Pop(0); Push((bool) Stack[-2] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d2: Push("Can't find diary parent with id: ") // @poff=604
0x3d3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d4: @ Trace(Stack[-1])
0x3d5: Pop(1)
0x3d6: Stack[-9] = (bool) 0
0x3d7: Return(); Pop(6)

0x3d8: @@ AddChild(Stack[-8]); Obj=2 // @poff=672
0x3d9: Pop(0)
0x3da: Push((int) 7)
0x3db: @ SendWorldWndMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ GetCategory(Stack[-1]); Obj=8 // @poff=681
0x3de: Pop(0)
0x3df: @ SetDiarySection(Stack[-1])
0x3e0: Pop(0)
0x3e1: Stack[-9] = (bool) 0
0x3e2: Return(); Pop(6)

0x3e3: Stack[-2] = 0
0x3e4: Stack[-3] = 0
0x3e5: PushEmpty(int, int)
0x3e6: Push("branch") // @poff=693
0x3e7: @ GetVariable(Stack[-1], Stack[-2])
0x3e8: Pop(1)
0x3e9: Push((int) 0)
0x3ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ec: Stack[-3] = (int) 1
0x3ed: Return(); Pop(2)

0x3ee: GOTO 0x3f4

0x3ef: Push((int) 1)
0x3f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f2: Stack[-3] = (int) 2
0x3f3: Return(); Pop(2)

0x3f4: Stack[-3] = (int) 3
0x3f5: Return(); Pop(2)

0x3f6: Stack[-1] = (int) 515561
0x3f7: Return(); Pop(0)

0x3f8: Stack[-1] = (int) 503346
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=707
0x3fb: Return(); Pop(0)

0x3fc: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=747
0x3fd: Return(); Pop(0)

0x3fe: Stack[-1] = (bool) 0
0x3ff: Return(); Pop(0)

