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
	W:Can't find lsh animation : 
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:playsound
	W:giveitem
	W:ood2WomanD1
	W:d2q01
	W:d2q01WomanDGotoAlexandr
	W:pt_map_alexandr
	A:AddMark
	W:key is given
	W:d2q01_key
	W:quest_d2_01
	W:cursed_women
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000430061006e00270074002000660069006e00640020006c0073006800200061006e0069006d006100740069006f006e0020003a0020000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f006400320057006f006d0061006e004400310000006400320071003000310000006400320071003000310057006f006d0061006e00440047006f0074006f0041006c006500780061006e00640072000000700074005f006d00610070005f0061006c006500780061006e006400720000004164644d61726b006b0065007900200069007300200067006900760065006e000000640032007100300031005f006b00650079000000710075006500730074005f00640032005f003000310000006300750072007300650064005f0077006f006d0065006e000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x18b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x183 Vars = (object)
		EVENT_26 Op = 0x18f Vars = (string)
		EVENT_6 Op = 0x1ab Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1bd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x323

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x321

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x325

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x327

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x310

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
0x41: Call2 0x202

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2bd

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 506748)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 506749)
0x5f: Push((int) 7440)
0x60: Push((int) 7439)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 507345)
0x64: Push((int) 7440)
0x65: Push((int) 8098)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 507350)
0x69: Push((int) 7440)
0x6a: Push((int) 8104)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 506753)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 506754)
0x78: Push((int) 8102)
0x79: Push((int) 7444)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x329

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x214

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x329

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x224

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x233

0xb8: Pop(0)
0xb9: Push((int) 8110)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x292

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x298

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x28c

0xca: Pop(2)
0xcb: Push((int) 7438)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x2bd

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral" // @poff=89
0xd5: Call2 0x9d

0xd6: Pop(1)
0xd7: Push((int) 506748)
0xd8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd9: Pop(1)
0xda: @@@ ClearReplies(); Obj=0 // @poff=116
0xdb: Pop(0)
0xdc: Push((int) 506749)
0xdd: Push((int) 7440)
0xde: Push((int) 7439)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Push((int) 507345)
0xe2: Push((int) 7440)
0xe3: Push((int) 8098)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 507350)
0xe7: Push((int) 7440)
0xe8: Push((int) 8104)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral" // @poff=89
0xee: Call2 0x9d

0xef: Pop(1)
0xf0: Push((int) 506753)
0xf1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf2: Pop(1)
0xf3: @@@ ClearReplies(); Obj=0 // @poff=116
0xf4: Pop(0)
0xf5: Push((int) 506754)
0xf6: Push((int) 8102)
0xf7: Push((int) 7444)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 8102)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral" // @poff=89
0x100: Call2 0x9d

0x101: Pop(1)
0x102: Push((int) 507348)
0x103: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x104: Pop(1)
0x105: @@@ ClearReplies(); Obj=0 // @poff=116
0x106: Pop(0)
0x107: Push((int) 507349)
0x108: Push((int) -1)
0x109: Push((int) 8103)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 7440)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 506750)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 506751)
0x11a: Push((int) 8099)
0x11b: Push((int) 7441)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Push((int) 507356)
0x11f: Push((int) 8106)
0x120: Push((int) 8111)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 8099)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 507346)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 507347)
0x131: Push((int) 8106)
0x132: Push((int) 8100)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 8106)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0x9d

0x13c: Pop(1)
0x13d: Push((int) 507351)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 507352)
0x143: Push((int) 7442)
0x144: Push((int) 8107)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Push((int) 507357)
0x148: Push((int) 7442)
0x149: Push((int) 8113)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 7442)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0x9d

0x153: Pop(1)
0x154: Push((int) 506752)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 507353)
0x15a: Push((int) 8109)
0x15b: Push((int) 8108)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 507358)
0x15f: Push((int) 8109)
0x160: Push((int) 8115)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 8109)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x9d

0x16a: Pop(1)
0x16b: Push((int) 507354)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 507355)
0x171: Push((int) -1)
0x172: Push((int) 8110)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x177: PushEmpty(bool)
0x178: Call2 0x329

0x179: Pop(0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: @ lshStopAnimation()
0x17c: Pop(0)
0x17d: GOTO 0x180

0x17e: @ StopAnimation()
0x17f: Pop(0)
0x180: Return(); Pop(0)

0x181: GOTO 0xb4

0x182: Return(); Pop(0)

0x183: PushEmpty()
0x184: PushEmpty(int, object)
0x185: Stack[-3] = Stack[-1]
0x186: Push(-2, 1); TaskCall(0)
0x187: Call2 0x0

0x188: Pop(-2, 1); TaskReturn
0x189: Pop(2)
0x18a: Return(); Pop(0)

0x18b: @ Hold()
0x18c: Pop(0)
0x18d: GOTO 0x18b

0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool, bool)
0x190: Push("cleanup") // @poff=156
0x191: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x193: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x194: @ IsLoaded(Stack[-1])
0x195: Pop(0)
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: Pop(0); Push((bool) Stack[-2] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(bool)
0x19b: Call2 0x1bb

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-1] = (bool) 1
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(object)
0x1a1: Call2 0x23a

0x1a2: Pop(0)
0x1a3: @ RemoveActor(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x1aa

0x1a6: Push("restore") // @poff=172
0x1a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1aa: Return(); Pop(2)

0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: PushEmpty(bool)
0x1b0: Call2 0x1bb

0x1b1: Pop(0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(object)
0x1b6: Call2 0x23a

0x1b7: Pop(0)
0x1b8: @ RemoveActor(Stack[-1])
0x1b9: Pop(1)
0x1ba: Return(); Pop(0)

0x1bb: Stack[-1] = (bool) 1
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1be: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x1bf: Pop(0)
0x1c0: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x1c1: Pop(0)
0x1c2: Push(CvectorIndex(Stack[-8], 1))
0x1c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1c5: @ GetPosition(Stack[-7])
0x1c6: Pop(0)
0x1c7: @ GetEyesHeight(Stack[-9])
0x1c8: Pop(0)
0x1c9: Push(CvectorIndex(Stack[-7], 1))
0x1ca: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1cb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1cc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1cd: Push(CvectorIndex(Stack[-6], 1))
0x1ce: Stack[-1] = (int) 0
0x1cf: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1d1: Pop(1); Push(Sqrt(Stack[-1]))
0x1d2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1d3: Stack[-5] = -Stack[-6]; Pop(0);
0x1d4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1d5: PushEmpty(cvector, cvector)
0x1d6: Push(CVector(0.0, 1.0, 0.0))
0x1d7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1d8: Call2 0x240

0x1d9: Pop(1)
0x1da: Push((int) 25)
0x1db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1dd: Push(CVector(0.0, 10.0, 0.0))
0x1de: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1df: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1e0: @ IsOverrideActive(Stack[-2])
0x1e1: Pop(0)
0x1e2: Push(Stack[-2])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-21] = (bool) 0
0x1e5: Return(); Pop(18)

0x1e6: @ StopWorld()
0x1e7: Pop(0)
0x1e8: Push((bool) 1)
0x1e9: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1ea: Pop(1)
0x1eb: Push(CvectorIndex(Stack[-4], 0))
0x1ec: Push(CvectorIndex(Stack[-5], 2))
0x1ed: @ Rotate(Stack[-2], Stack[-1])
0x1ee: Pop(2)
0x1ef: PushEmpty(bool)
0x1f0: Call2 0x329

0x1f1: Pop(0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x1fc

0x1f4: Push("head") // @poff=214
0x1f5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f6: Pop(1)
0x1f7: Push(Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: Push("head") // @poff=214
0x1fa: @ LookAsyncCamera(Stack[-1])
0x1fb: Pop(1)
0x1fc: @ CameraWaitForPlayFinish()
0x1fd: Pop(0)
0x1fe: @ ResumeWorld()
0x1ff: Pop(0)
0x200: Stack[-21] = (bool) 1
0x201: Return(); Pop(18)

0x202: PushEmpty(bool, bool)
0x203: Push((bool) 1)
0x204: @ CameraSwitchToNormal(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(bool)
0x207: Call2 0x329

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x213

0x20b: Push("head") // @poff=214
0x20c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20d: Pop(1)
0x20e: Push(Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x210: Push("head") // @poff=214
0x211: @ UnlookAsync(Stack[-1])
0x212: Pop(1)
0x213: Return(); Pop(2)

0x214: PushEmpty(bool, float, float, bool, float, float)
0x215: @ lshHasAnimation(Stack[-3], Stack[-7])
0x216: Pop(0)
0x217: Push(Stack[-3])
0x218: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x219: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x21a: Pop(0)
0x21b: Push((bool) 0)
0x21c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(1)
0x21e: GOTO 0x223

0x21f: Push("Can't find lsh animation : ") // @poff=224
0x220: Pop(1); Push(Stack[-1] + Stack[-8]);
0x221: @ Trace(Stack[-1])
0x222: Pop(1)
0x223: Return(); Pop(6)

0x224: PushEmpty(bool, float, float, bool, float, float)
0x225: @ lshHasAnimation(Stack[-3], Stack[-8])
0x226: Pop(0)
0x227: Push(Stack[-3])
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x22a: Pop(0)
0x22b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x22c: Pop(0)
0x22d: GOTO 0x232

0x22e: Push("Can't find lsh animation : ") // @poff=224
0x22f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x230: @ Trace(Stack[-1])
0x231: Pop(1)
0x232: Return(); Pop(6)

0x233: PushEmpty(bool)
0x234: Call2 0x329

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: @ lshStopSpeech()
0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: PushEmpty(object, object)
0x23b: @ self(Stack[-1])
0x23c: Pop(0)
0x23d: Stack[-1] = Stack[-3]
0x23e: Return(); Pop(2)

0x23f: Stack[-1] = 0
0x240: PushEmpty(float, float)
0x241: Pop(0); Push(Stack[-3] | Stack[-3]);
0x242: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x243: Push((float)9.999999974752427e-07)
0x244: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x247: Return(); Pop(2)

0x248: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x249: Return(); Pop(2)

0x24a: PushEmpty(int, int)
0x24b: @ GetVariable(Stack[-3], Stack[-1])
0x24c: Pop(0)
0x24d: Stack[-1] = Stack[-4]
0x24e: Return(); Pop(2)

0x24f: PushEmpty(object, object)
0x250: @ CreateIntVector(Stack[-1])
0x251: Pop(0)
0x252: @@ add(Stack[-4]); Obj=1 // @poff=280
0x253: Pop(0)
0x254: @@ add(Stack[-3]); Obj=1 // @poff=280
0x255: Pop(0)
0x256: Push((int) 3)
0x257: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x258: Pop(1)
0x259: Return(); Pop(2)

0x25a: Stack[-1] = 0
0x25b: PushEmpty(int, int, bool, int, int, bool)
0x25c: @@ GetItemID(Stack[-3]); Obj=8 // @poff=284
0x25d: Pop(0)
0x25e: Push("Category") // @poff=294
0x25f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x260: Pop(1)
0x261: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=312
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x265: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=320
0x266: Pop(0)
0x267: GOTO 0x26d

0x268: PushEmpty(int, int)
0x269: Stack[-5] = Stack[-2]
0x26a: Stack[-9] = Stack[-1]
0x26b: Call2 0x24f

0x26c: Pop(2)
0x26d: Return(); Pop(6)

0x26e: PushEmpty(object, object)
0x26f: @ CreateInvItem(Stack[-1])
0x270: Pop(0)
0x271: @@ SetItemName(Stack[-4]); Obj=1 // @poff=330
0x272: Pop(0)
0x273: PushEmpty(object, object, int)
0x274: Stack[-8] = Stack[-3]
0x275: Stack[-4] = Stack[-2]
0x276: Stack[-6] = Stack[-1]
0x277: Call2 0x25b

0x278: Pop(3)
0x279: Return(); Pop(2)

0x27a: Stack[-1] = 0
0x27b: PushEmpty(object, object)
0x27c: @ FindActor(Stack[-1], Stack[-4])
0x27d: Pop(0)
0x27e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-5] = (bool) 0
0x281: Return(); Pop(2)

0x282: @ Trigger(Stack[-1], Stack[-3])
0x283: Pop(0)
0x284: Stack[-5] = (bool) 1
0x285: Return(); Pop(2)

0x286: Stack[-1] = 0
0x287: PushEmpty(float, float)
0x288: @ GetGameTime(Stack[-1])
0x289: Pop(0)
0x28a: Stack[-1] = Stack[-3]
0x28b: Return(); Pop(2)

0x28c: PushEmpty()
0x28d: Push("playsound") // @poff=342
0x28e: Push("giveitem") // @poff=362
0x28f: @ TriggerWorld(Stack[-2], Stack[-1])
0x290: Pop(2)
0x291: Return(); Pop(0)

0x292: PushEmpty()
0x293: Push("ood2WomanD1") // @poff=380
0x294: Push((int) 1)
0x295: @ SetVariable(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: Return(); Pop(0)

0x298: PushEmpty(object, object)
0x299: Push("d2q01") // @poff=404
0x29a: Push((int) 5)
0x29b: @ SetVariable(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: PushEmpty(object)
0x29e: Call2 0x2ff

0x29f: Stack[-1] = Stack[-2]
0x2a0: Pop(1)
0x2a1: Push("d2q01WomanDGotoAlexandr") // @poff=416
0x2a2: Push("pt_map_alexandr") // @poff=464
0x2a3: Push((int) 1)
0x2a4: Push((int) 515271)
0x2a5: PushEmpty(float)
0x2a6: Call2 0x287

0x2a7: Pop(0)
0x2a8: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=496
0x2a9: Pop(5)
0x2aa: PushEmpty()
0x2ab: Call2 0x2c9

0x2ac: Pop(0)
0x2ad: Push("key is given") // @poff=504
0x2ae: @ Trace(Stack[-1])
0x2af: Pop(1)
0x2b0: PushEmpty(object, string, int)
0x2b1: Stack[-7] = Stack[-3]
0x2b2: Stack[-2] = "d2q01_key" // @poff=530
0x2b3: Stack[-1] = (int) 1
0x2b4: Call2 0x26e

0x2b5: Pop(3)
0x2b6: PushEmpty(bool, string, string)
0x2b7: Stack[-2] = "quest_d2_01" // @poff=550
0x2b8: Stack[-1] = "cursed_women" // @poff=574
0x2b9: Call2 0x27b

0x2ba: Pop(3)
0x2bb: Return(); Pop(2)

0x2bc: Stack[-1] = 0
0x2bd: PushEmpty()
0x2be: PushEmpty(int, string)
0x2bf: Stack[-1] = "ood2WomanD1" // @poff=380
0x2c0: Call2 0x24a

0x2c1: Pop(1)
0x2c2: Push((int) 0)
0x2c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-2] = (bool) 1
0x2c6: Return(); Pop(0)

0x2c7: Stack[-2] = (bool) 0
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(object, object)
0x2ca: Push((int) 54)
0x2cb: Push((int) 1)
0x2cc: Push((int) 512136)
0x2cd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: PushEmpty(bool, object, int)
0x2d0: Stack[-4] = Stack[-2]
0x2d1: Stack[-1] = (int) 10
0x2d2: Call2 0x2e3

0x2d3: Pop(3)
0x2d4: Return(); Pop(2)

0x2d5: Stack[-1] = 0
0x2d6: PushEmpty(object, object)
0x2d7: @ GetDiaryRoot(Stack[-1])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: Push("Can't retrieve diary root") // @poff=600
0x2dc: @ Trace(Stack[-1])
0x2dd: Pop(1)
0x2de: Stack[-3] = (bool) 0
0x2df: Return(); Pop(2)

0x2e0: Stack[-1] = Stack[-3]
0x2e1: Return(); Pop(2)

0x2e2: Stack[-1] = 0
0x2e3: PushEmpty(object, object, int, object, object, int)
0x2e4: PushEmpty(object)
0x2e5: Call2 0x2d6

0x2e6: Stack[-1] = Stack[-4]
0x2e7: Pop(1)
0x2e8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=652
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-2] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ec: Push("Can't find diary parent with id: ") // @poff=657
0x2ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ee: @ Trace(Stack[-1])
0x2ef: Pop(1)
0x2f0: Stack[-9] = (bool) 0
0x2f1: Return(); Pop(6)

0x2f2: @@ AddChild(Stack[-8]); Obj=2 // @poff=725
0x2f3: Pop(0)
0x2f4: Push((int) 7)
0x2f5: @ SendWorldWndMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=734
0x2f8: Pop(0)
0x2f9: @ SetDiarySection(Stack[-1])
0x2fa: Pop(0)
0x2fb: Stack[-9] = (bool) 0
0x2fc: Return(); Pop(6)

0x2fd: Stack[-2] = 0
0x2fe: Stack[-3] = 0
0x2ff: PushEmpty(object, object, object, object)
0x300: @ GetMainOutdoorScene(Stack[-2])
0x301: Pop(0)
0x302: Pop(0); PushNull((bool) Stack[-2] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x304: Push("Can't find main outdoor scene") // @poff=746
0x305: @ Trace(Stack[-1])
0x306: Pop(1)
0x307: Stack[-1] = 0
0x308: Stack[-1] = Stack[-5]
0x309: Return(); Pop(4)

0x30a: @@ GetMap(Stack[-1]); Obj=2 // @poff=806
0x30b: Pop(0)
0x30c: Stack[-1] = Stack[-5]
0x30d: Return(); Pop(4)

0x30e: Stack[-1] = 0
0x30f: Stack[-2] = 0
0x310: PushEmpty(int, int)
0x311: Push("branch") // @poff=813
0x312: @ GetVariable(Stack[-1], Stack[-2])
0x313: Pop(1)
0x314: Push((int) 0)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x317: Stack[-3] = (int) 1
0x318: Return(); Pop(2)

0x319: GOTO 0x31f

0x31a: Push((int) 1)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-3] = (int) 2
0x31e: Return(); Pop(2)

0x31f: Stack[-3] = (int) 3
0x320: Return(); Pop(2)

0x321: Stack[-1] = (int) 515567
0x322: Return(); Pop(0)

0x323: Stack[-1] = (int) 503352
0x324: Return(); Pop(0)

0x325: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=827
0x326: Return(); Pop(0)

0x327: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=867
0x328: Return(); Pop(0)

0x329: Stack[-1] = (bool) 0
0x32a: Return(); Pop(0)

