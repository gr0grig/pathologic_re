GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	ood2WomanD1
	d2q01
	d2q01WomanDGotoAlexandr
	pt_map_alexandr
	AddMark
	key is given
	d2q01_key
	quest_d2_01
	cursed_women
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
0x3: Stack[-2] = Stack[-12]
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
0xe: Call2 0x321

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x31f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x323

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x325

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x30e

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
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
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x201

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
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
0x52: Call2 0x2bb

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 506748)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 506749)
0x5f: Push((int) 7440)
0x60: Push((int) 7439)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 507345)
0x64: Push((int) 7440)
0x65: Push((int) 8098)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 507350)
0x69: Push((int) 7440)
0x6a: Push((int) 8104)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 506753)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 506754)
0x78: Push((int) 8102)
0x79: Push((int) 7444)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x327

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x212

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x327

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x222

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x231

0xb8: Pop(0)
0xb9: Push((int) 8110)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x290

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x296

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x28a

0xca: Pop(2)
0xcb: Push((int) 7438)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x2bb

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x9d

0xd6: Pop(1)
0xd7: Push((int) 506748)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 506749)
0xdd: Push((int) 7440)
0xde: Push((int) 7439)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 507345)
0xe2: Push((int) 7440)
0xe3: Push((int) 8098)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 507350)
0xe7: Push((int) 7440)
0xe8: Push((int) 8104)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0x9d

0xef: Pop(1)
0xf0: Push((int) 506753)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 506754)
0xf6: Push((int) 8102)
0xf7: Push((int) 7444)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 8102)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call2 0x9d

0x101: Pop(1)
0x102: Push((int) 507348)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 507349)
0x108: Push((int) -1)
0x109: Push((int) 8103)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 7440)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 506750)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 506751)
0x11a: Push((int) 8099)
0x11b: Push((int) 7441)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 507356)
0x11f: Push((int) 8106)
0x120: Push((int) 8111)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 8099)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 507346)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 507347)
0x131: Push((int) 8106)
0x132: Push((int) 8100)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 8106)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x9d

0x13c: Pop(1)
0x13d: Push((int) 507351)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 507352)
0x143: Push((int) 7442)
0x144: Push((int) 8107)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 507357)
0x148: Push((int) 7442)
0x149: Push((int) 8113)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 7442)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0x9d

0x153: Pop(1)
0x154: Push((int) 506752)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 507353)
0x15a: Push((int) 8109)
0x15b: Push((int) 8108)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 507358)
0x15f: Push((int) 8109)
0x160: Push((int) 8115)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 8109)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral"
0x169: Call2 0x9d

0x16a: Pop(1)
0x16b: Push((int) 507354)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 507355)
0x171: Push((int) -1)
0x172: Push((int) 8110)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x177: PushEmpty(bool)
0x178: Call2 0x327

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
0x185: Stack[-1] = Stack[-3]
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
0x190: Push("cleanup")
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
0x1a1: Call2 0x238

0x1a2: Pop(0)
0x1a3: @ RemoveActor(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x1aa

0x1a6: Push("restore")
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
0x1b6: Call2 0x238

0x1b7: Pop(0)
0x1b8: @ RemoveActor(Stack[-1])
0x1b9: Pop(1)
0x1ba: Return(); Pop(0)

0x1bb: Stack[-1] = (bool) 1
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1be: @@ GetPosition(Stack[-8])
0x1bf: Pop(0)
0x1c0: @@ GetEyesHeight(Stack[-9])
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
0x1d8: Call2 0x23e

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
0x1e8: @ CameraTransit(Stack[-3], Stack[-5])
0x1e9: Pop(0)
0x1ea: Push(CvectorIndex(Stack[-4], 0))
0x1eb: Push(CvectorIndex(Stack[-5], 2))
0x1ec: @ Rotate(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x327

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x1fb

0x1f3: Push("head")
0x1f4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f5: Pop(1)
0x1f6: Push(Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f8: Push("head")
0x1f9: @ LookAsyncCamera(Stack[-1])
0x1fa: Pop(1)
0x1fb: @ CameraWaitForPlayFinish()
0x1fc: Pop(0)
0x1fd: @ ResumeWorld()
0x1fe: Pop(0)
0x1ff: Stack[-21] = (bool) 1
0x200: Return(); Pop(18)

0x201: PushEmpty(bool, bool)
0x202: @ CameraSwitchToNormal()
0x203: Pop(0)
0x204: PushEmpty(bool)
0x205: Call2 0x327

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: GOTO 0x211

0x209: Push("head")
0x20a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20b: Pop(1)
0x20c: Push(Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20e: Push("head")
0x20f: @ UnlookAsync(Stack[-1])
0x210: Pop(1)
0x211: Return(); Pop(2)

0x212: PushEmpty(bool, float, float, bool, float, float)
0x213: @ lshHasAnimation(Stack[-3], Stack[-7])
0x214: Pop(0)
0x215: Push(Stack[-3])
0x216: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x217: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x218: Pop(0)
0x219: Push((bool) 0)
0x21a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(1)
0x21c: GOTO 0x221

0x21d: Push("Can't find lsh animation : ")
0x21e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x21f: @ Trace(Stack[-1])
0x220: Pop(1)
0x221: Return(); Pop(6)

0x222: PushEmpty(bool, float, float, bool, float, float)
0x223: @ lshHasAnimation(Stack[-3], Stack[-8])
0x224: Pop(0)
0x225: Push(Stack[-3])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x228: Pop(0)
0x229: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x22a: Pop(0)
0x22b: GOTO 0x230

0x22c: Push("Can't find lsh animation : ")
0x22d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x22e: @ Trace(Stack[-1])
0x22f: Pop(1)
0x230: Return(); Pop(6)

0x231: PushEmpty(bool)
0x232: Call2 0x327

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: @ lshStopSpeech()
0x236: Pop(0)
0x237: Return(); Pop(0)

0x238: PushEmpty(object, object)
0x239: @ self(Stack[-1])
0x23a: Pop(0)
0x23b: Stack[-3] = Stack[-1]
0x23c: Return(); Pop(2)

0x23d: Stack[-1] = 0
0x23e: PushEmpty(float, float)
0x23f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x240: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x241: Push((float)0.0)
0x242: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x245: Return(); Pop(2)

0x246: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x247: Return(); Pop(2)

0x248: PushEmpty(int, int)
0x249: @ GetVariable(Stack[-3], Stack[-1])
0x24a: Pop(0)
0x24b: Stack[-4] = Stack[-1]
0x24c: Return(); Pop(2)

0x24d: PushEmpty(object, object)
0x24e: @ CreateIntVector(Stack[-1])
0x24f: Pop(0)
0x250: @@ add(Stack[-4])
0x251: Pop(0)
0x252: @@ add(Stack[-3])
0x253: Pop(0)
0x254: Push((int) 3)
0x255: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x256: Pop(1)
0x257: Return(); Pop(2)

0x258: Stack[-1] = 0
0x259: PushEmpty(int, int, bool, int, int, bool)
0x25a: @@ GetItemID(Stack[-3])
0x25b: Pop(0)
0x25c: Push("Category")
0x25d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x25e: Pop(1)
0x25f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x260: Pop(0)
0x261: Pop(0); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x263: @@ DropItems(Stack[-8], Stack[-7])
0x264: Pop(0)
0x265: GOTO 0x26b

0x266: PushEmpty(int, int)
0x267: Stack[-2] = Stack[-5]
0x268: Stack[-1] = Stack[-9]
0x269: Call2 0x24d

0x26a: Pop(2)
0x26b: Return(); Pop(6)

0x26c: PushEmpty(object, object)
0x26d: @ CreateInvItem(Stack[-1])
0x26e: Pop(0)
0x26f: @@ SetItemName(Stack[-4])
0x270: Pop(0)
0x271: PushEmpty(object, object, int)
0x272: Stack[-3] = Stack[-8]
0x273: Stack[-2] = Stack[-4]
0x274: Stack[-1] = Stack[-6]
0x275: Call2 0x259

0x276: Pop(3)
0x277: Return(); Pop(2)

0x278: Stack[-1] = 0
0x279: PushEmpty(object, object)
0x27a: @ FindActor(Stack[-1], Stack[-4])
0x27b: Pop(0)
0x27c: Pop(0); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: Stack[-5] = (bool) 0
0x27f: Return(); Pop(2)

0x280: @ Trigger(Stack[-1], Stack[-3])
0x281: Pop(0)
0x282: Stack[-5] = (bool) 1
0x283: Return(); Pop(2)

0x284: Stack[-1] = 0
0x285: PushEmpty(float, float)
0x286: @ GetGameTime(Stack[-1])
0x287: Pop(0)
0x288: Stack[-3] = Stack[-1]
0x289: Return(); Pop(2)

0x28a: PushEmpty()
0x28b: Push("playsound")
0x28c: Push("giveitem")
0x28d: @ TriggerWorld(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: Return(); Pop(0)

0x290: PushEmpty()
0x291: Push("ood2WomanD1")
0x292: Push((int) 1)
0x293: @ SetVariable(Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: Return(); Pop(0)

0x296: PushEmpty(object, object)
0x297: Push("d2q01")
0x298: Push((int) 5)
0x299: @ SetVariable(Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: PushEmpty(object)
0x29c: Call2 0x2fd

0x29d: Stack[-2] = Stack[-1]
0x29e: Pop(1)
0x29f: Push("d2q01WomanDGotoAlexandr")
0x2a0: Push("pt_map_alexandr")
0x2a1: Push((int) 1)
0x2a2: Push((int) 515271)
0x2a3: PushEmpty(float)
0x2a4: Call2 0x285

0x2a5: Pop(0)
0x2a6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(5)
0x2a8: PushEmpty()
0x2a9: Call2 0x2c7

0x2aa: Pop(0)
0x2ab: Push("key is given")
0x2ac: @ Trace(Stack[-1])
0x2ad: Pop(1)
0x2ae: PushEmpty(object, string, int)
0x2af: Stack[-3] = Stack[-7]
0x2b0: Stack[-2] = "d2q01_key"
0x2b1: Stack[-1] = (int) 1
0x2b2: Call2 0x26c

0x2b3: Pop(3)
0x2b4: PushEmpty(bool, string, string)
0x2b5: Stack[-2] = "quest_d2_01"
0x2b6: Stack[-1] = "cursed_women"
0x2b7: Call2 0x279

0x2b8: Pop(3)
0x2b9: Return(); Pop(2)

0x2ba: Stack[-1] = 0
0x2bb: PushEmpty()
0x2bc: PushEmpty(int, string)
0x2bd: Stack[-1] = "ood2WomanD1"
0x2be: Call2 0x248

0x2bf: Pop(1)
0x2c0: Push((int) 0)
0x2c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-2] = (bool) 1
0x2c4: Return(); Pop(0)

0x2c5: Stack[-2] = (bool) 0
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(object, object)
0x2c8: Push((int) 54)
0x2c9: Push((int) 1)
0x2ca: Push((int) 512136)
0x2cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: PushEmpty(bool, object, int)
0x2ce: Stack[-2] = Stack[-4]
0x2cf: Stack[-1] = (int) 10
0x2d0: Call2 0x2e1

0x2d1: Pop(3)
0x2d2: Return(); Pop(2)

0x2d3: Stack[-1] = 0
0x2d4: PushEmpty(object, object)
0x2d5: @ GetDiaryRoot(Stack[-1])
0x2d6: Pop(0)
0x2d7: Pop(0); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: Push("Can't retrieve diary root")
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Stack[-3] = (bool) 0
0x2dd: Return(); Pop(2)

0x2de: Stack[-3] = Stack[-1]
0x2df: Return(); Pop(2)

0x2e0: Stack[-1] = 0
0x2e1: PushEmpty(object, object, int, object, object, int)
0x2e2: PushEmpty(object)
0x2e3: Call2 0x2d4

0x2e4: Stack[-4] = Stack[-1]
0x2e5: Pop(1)
0x2e6: @@ Find(Stack[-7], Stack[-2])
0x2e7: Pop(0)
0x2e8: Pop(0); Push((bool) Stack[-2] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ea: Push("Can't find diary parent with id: ")
0x2eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ec: @ Trace(Stack[-1])
0x2ed: Pop(1)
0x2ee: Stack[-9] = (bool) 0
0x2ef: Return(); Pop(6)

0x2f0: @@ AddChild(Stack[-8])
0x2f1: Pop(0)
0x2f2: Push((int) 7)
0x2f3: @ SendWorldWndMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ GetCategory(Stack[-1])
0x2f6: Pop(0)
0x2f7: @ SetDiarySection(Stack[-1])
0x2f8: Pop(0)
0x2f9: Stack[-9] = (bool) 0
0x2fa: Return(); Pop(6)

0x2fb: Stack[-2] = 0
0x2fc: Stack[-3] = 0
0x2fd: PushEmpty(object, object, object, object)
0x2fe: @ GetMainOutdoorScene(Stack[-2])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-2] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: Push("Can't find main outdoor scene")
0x303: @ Trace(Stack[-1])
0x304: Pop(1)
0x305: Stack[-1] = 0
0x306: Stack[-5] = Stack[-1]
0x307: Return(); Pop(4)

0x308: @@ GetMap(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-5] = Stack[-1]
0x30b: Return(); Pop(4)

0x30c: Stack[-1] = 0
0x30d: Stack[-2] = 0
0x30e: PushEmpty(int, int)
0x30f: Push("branch")
0x310: @ GetVariable(Stack[-1], Stack[-2])
0x311: Pop(1)
0x312: Push((int) 0)
0x313: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x315: Stack[-3] = (int) 1
0x316: Return(); Pop(2)

0x317: GOTO 0x31d

0x318: Push((int) 1)
0x319: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-3] = (int) 2
0x31c: Return(); Pop(2)

0x31d: Stack[-3] = (int) 3
0x31e: Return(); Pop(2)

0x31f: Stack[-1] = (int) 515567
0x320: Return(); Pop(0)

0x321: Stack[-1] = (int) 503352
0x322: Return(); Pop(0)

0x323: Stack[-1] = "ui/NPC_Citizen3.png"
0x324: Return(); Pop(0)

0x325: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x326: Return(); Pop(0)

0x327: Stack[-1] = (bool) 0
0x328: Return(); Pop(0)

