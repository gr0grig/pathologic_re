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
	d2q03
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ood2Birdmask1
	d2q03BirdmaskGotoLara
	pt_map_lara
	AddMark
	KnowTheater
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	GetVariable (2 args)
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
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1b0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1b5 Vars = (object)
		EVENT_26 Op = 0x1cb Vars = (string)
		EVENT_6 Op = 0x1e7 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1f9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x32b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x329

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x32d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x32f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x318

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
0x41: Call2 0x23e

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2b9

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 506910)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 506911)
0x5f: Push((int) 7618)
0x60: Push((int) 7617)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x2ad

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 507249)
0x69: Push((int) 7993)
0x6a: Push((int) 7989)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x331

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x250

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x331

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x260

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x26f

0xa9: Pop(0)
0xaa: Push((int) 7988)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x290

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x296

0xb6: Pop(2)
0xb7: Push((int) 7990)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x290

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x296

0xc3: Pop(2)
0xc4: Push((int) 7991)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x290

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x296

0xd0: Pop(2)
0xd1: Push((int) 7992)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x290

0xd8: Pop(2)
0xd9: Push((int) 7616)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0x2b9

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x8e

0xe4: Pop(1)
0xe5: Push((int) 506910)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 506911)
0xeb: Push((int) 7618)
0xec: Push((int) 7617)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x2ad

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: Push((int) 507249)
0xf5: Push((int) 7993)
0xf6: Push((int) 7989)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 7993)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral"
0xff: Call2 0x8e

0x100: Pop(1)
0x101: Push((int) 507253)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 507254)
0x107: Push((int) 7995)
0x108: Push((int) 7994)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 7995)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0x8e

0x112: Pop(1)
0x113: Push((int) 507255)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 507256)
0x119: Push((int) 7997)
0x11a: Push((int) 7996)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 7997)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0x8e

0x124: Pop(1)
0x125: Push((int) 507257)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 507258)
0x12b: Push((int) 7999)
0x12c: Push((int) 7998)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 507261)
0x130: Push((int) 7618)
0x131: Push((int) 8002)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 7999)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0x8e

0x13b: Pop(1)
0x13c: Push((int) 507259)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 507260)
0x142: Push((int) 7618)
0x143: Push((int) 8000)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 7618)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0x8e

0x14d: Pop(1)
0x14e: Push((int) 506912)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 507242)
0x154: Push((int) 7983)
0x155: Push((int) 7982)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0x2c5

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: Push((int) 507252)
0x15e: Push((int) -1)
0x15f: Push((int) 7992)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 7983)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call2 0x8e

0x169: Pop(1)
0x16a: Push((int) 507243)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 507244)
0x170: Push((int) 7985)
0x171: Push((int) 7984)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 507251)
0x175: Push((int) -1)
0x176: Push((int) 7991)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 7985)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0x8e

0x180: Pop(1)
0x181: Push((int) 507245)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 507246)
0x187: Push((int) 7987)
0x188: Push((int) 7986)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 507250)
0x18c: Push((int) -1)
0x18d: Push((int) 7990)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 7987)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0x8e

0x197: Pop(1)
0x198: Push((int) 507247)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 507248)
0x19e: Push((int) -1)
0x19f: Push((int) 7988)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x331

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: @ lshStopAnimation()
0x1a9: Pop(0)
0x1aa: GOTO 0x1ad

0x1ab: @ StopAnimation()
0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: GOTO 0xa5

0x1af: Return(); Pop(0)

0x1b0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1b1: PushEmpty()
0x1b2: Call2 0x1c7

0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(int, int)
0x1b6: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(2)

0x1b9: Push("d2q03")
0x1ba: @ GetVariable(Stack[-1], Stack[-2])
0x1bb: Pop(1)
0x1bc: Push((int) -1)
0x1bd: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1bf: PushEmpty(int, object)
0x1c0: Stack[-1] = Stack[-5]
0x1c1: Push(-2, 1); TaskCall(0)
0x1c2: Call2 0x0

0x1c3: Pop(-2, 1); TaskReturn
0x1c4: Pop(2)
0x1c5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c6: Return(); Pop(2)

0x1c7: @ Hold()
0x1c8: Pop(0)
0x1c9: GOTO 0x1c7

0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(bool, bool)
0x1cc: Push("cleanup")
0x1cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1cf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d0: @ IsLoaded(Stack[-1])
0x1d1: Pop(0)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Pop(0); Push((bool) Stack[-2] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x1f7

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(object)
0x1dd: Call2 0x276

0x1de: Pop(0)
0x1df: @ RemoveActor(Stack[-1])
0x1e0: Pop(1)
0x1e1: GOTO 0x1e6

0x1e2: Push("restore")
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(bool)
0x1e8: Stack[-1] = (bool) 0
0x1e9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: PushEmpty(bool)
0x1ec: Call2 0x1f7

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Stack[-1] = (bool) 1
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: PushEmpty(object)
0x1f2: Call2 0x276

0x1f3: Pop(0)
0x1f4: @ RemoveActor(Stack[-1])
0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: Stack[-1] = (bool) 1
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1fa: @@ GetPosition(Stack[-8])
0x1fb: Pop(0)
0x1fc: @@ GetEyesHeight(Stack[-9])
0x1fd: Pop(0)
0x1fe: Push(CvectorIndex(Stack[-8], 1))
0x1ff: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x200: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x201: @ GetPosition(Stack[-7])
0x202: Pop(0)
0x203: @ GetEyesHeight(Stack[-9])
0x204: Pop(0)
0x205: Push(CvectorIndex(Stack[-7], 1))
0x206: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x207: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x208: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x209: Push(CvectorIndex(Stack[-6], 1))
0x20a: Stack[-1] = (int) 0
0x20b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x20c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x20d: Pop(1); Push(Sqrt(Stack[-1]))
0x20e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x20f: Stack[-5] = -Stack[-6]; Pop(0);
0x210: Pop(0); Push(Stack[-6] * Stack[-19]);
0x211: PushEmpty(cvector, cvector)
0x212: Push(CVector(0.0, 1.0, 0.0))
0x213: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x214: Call2 0x27c

0x215: Pop(1)
0x216: Push((int) 25)
0x217: Pop(2); Push(Stack[-2] * Stack[-1]);
0x218: Pop(2); Push(Stack[-2] + Stack[-1]);
0x219: Push(CVector(0.0, 10.0, 0.0))
0x21a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x21b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x21c: @ IsOverrideActive(Stack[-2])
0x21d: Pop(0)
0x21e: Push(Stack[-2])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-21] = (bool) 0
0x221: Return(); Pop(18)

0x222: @ StopWorld()
0x223: Pop(0)
0x224: Push((bool) 1)
0x225: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x226: Pop(1)
0x227: Push(CvectorIndex(Stack[-4], 0))
0x228: Push(CvectorIndex(Stack[-5], 2))
0x229: @ Rotate(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: PushEmpty(bool)
0x22c: Call2 0x331

0x22d: Pop(0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x238

0x230: Push("head")
0x231: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x232: Pop(1)
0x233: Push(Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: Push("head")
0x236: @ LookAsyncCamera(Stack[-1])
0x237: Pop(1)
0x238: @ CameraWaitForPlayFinish()
0x239: Pop(0)
0x23a: @ ResumeWorld()
0x23b: Pop(0)
0x23c: Stack[-21] = (bool) 1
0x23d: Return(); Pop(18)

0x23e: PushEmpty(bool, bool)
0x23f: Push((bool) 1)
0x240: @ CameraSwitchToNormal(Stack[-1])
0x241: Pop(1)
0x242: PushEmpty(bool)
0x243: Call2 0x331

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x24f

0x247: Push("head")
0x248: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x249: Pop(1)
0x24a: Push(Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24c: Push("head")
0x24d: @ UnlookAsync(Stack[-1])
0x24e: Pop(1)
0x24f: Return(); Pop(2)

0x250: PushEmpty(bool, float, float, bool, float, float)
0x251: @ lshHasAnimation(Stack[-3], Stack[-7])
0x252: Pop(0)
0x253: Push(Stack[-3])
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x256: Pop(0)
0x257: Push((bool) 0)
0x258: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(1)
0x25a: GOTO 0x25f

0x25b: Push("Can't find lsh animation : ")
0x25c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x25d: @ Trace(Stack[-1])
0x25e: Pop(1)
0x25f: Return(); Pop(6)

0x260: PushEmpty(bool, float, float, bool, float, float)
0x261: @ lshHasAnimation(Stack[-3], Stack[-8])
0x262: Pop(0)
0x263: Push(Stack[-3])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x266: Pop(0)
0x267: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x268: Pop(0)
0x269: GOTO 0x26e

0x26a: Push("Can't find lsh animation : ")
0x26b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x26c: @ Trace(Stack[-1])
0x26d: Pop(1)
0x26e: Return(); Pop(6)

0x26f: PushEmpty(bool)
0x270: Call2 0x331

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x273: @ lshStopSpeech()
0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: PushEmpty(object, object)
0x277: @ self(Stack[-1])
0x278: Pop(0)
0x279: Stack[-3] = Stack[-1]
0x27a: Return(); Pop(2)

0x27b: Stack[-1] = 0
0x27c: PushEmpty(float, float)
0x27d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x27e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x27f: Push((float)0.0)
0x280: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x283: Return(); Pop(2)

0x284: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x285: Return(); Pop(2)

0x286: PushEmpty(int, int)
0x287: @ GetVariable(Stack[-3], Stack[-1])
0x288: Pop(0)
0x289: Stack[-4] = Stack[-1]
0x28a: Return(); Pop(2)

0x28b: PushEmpty(float, float)
0x28c: @ GetGameTime(Stack[-1])
0x28d: Pop(0)
0x28e: Stack[-3] = Stack[-1]
0x28f: Return(); Pop(2)

0x290: PushEmpty()
0x291: Push("ood2Birdmask1")
0x292: Push((int) 1)
0x293: @ SetVariable(Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: Return(); Pop(0)

0x296: PushEmpty(object, object)
0x297: Push("d2q03")
0x298: Push((int) 3)
0x299: @ SetVariable(Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: PushEmpty(object)
0x29c: Call2 0x307

0x29d: Stack[-2] = Stack[-1]
0x29e: Pop(1)
0x29f: Push("d2q03BirdmaskGotoLara")
0x2a0: Push("pt_map_lara")
0x2a1: Push((int) 0)
0x2a2: Push((int) 515293)
0x2a3: PushEmpty(float)
0x2a4: Call2 0x28b

0x2a5: Pop(0)
0x2a6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(5)
0x2a8: PushEmpty()
0x2a9: Call2 0x2d1

0x2aa: Pop(0)
0x2ab: Return(); Pop(2)

0x2ac: Stack[-1] = 0
0x2ad: PushEmpty()
0x2ae: PushEmpty(int, string)
0x2af: Stack[-1] = "KnowTheater"
0x2b0: Call2 0x286

0x2b1: Pop(1)
0x2b2: Push((int) 1)
0x2b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b5: Stack[-2] = (bool) 1
0x2b6: Return(); Pop(0)

0x2b7: Stack[-2] = (bool) 0
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: PushEmpty(int, string)
0x2bb: Stack[-1] = "ood2Birdmask1"
0x2bc: Call2 0x286

0x2bd: Pop(1)
0x2be: Push((int) 0)
0x2bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-2] = (bool) 1
0x2c2: Return(); Pop(0)

0x2c3: Stack[-2] = (bool) 0
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: PushEmpty(int, string)
0x2c7: Stack[-1] = "d2q03"
0x2c8: Call2 0x286

0x2c9: Pop(1)
0x2ca: Push((int) 3)
0x2cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-2] = (bool) 1
0x2ce: Return(); Pop(0)

0x2cf: Stack[-2] = (bool) 0
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(object, object)
0x2d2: Push((int) 133)
0x2d3: Push((int) 2)
0x2d4: Push((int) 515270)
0x2d5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: PushEmpty(bool, object, int)
0x2d8: Stack[-2] = Stack[-4]
0x2d9: Stack[-1] = (int) 12
0x2da: Call2 0x2eb

0x2db: Pop(3)
0x2dc: Return(); Pop(2)

0x2dd: Stack[-1] = 0
0x2de: PushEmpty(object, object)
0x2df: @ GetDiaryRoot(Stack[-1])
0x2e0: Pop(0)
0x2e1: Pop(0); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e3: Push("Can't retrieve diary root")
0x2e4: @ Trace(Stack[-1])
0x2e5: Pop(1)
0x2e6: Stack[-3] = (bool) 0
0x2e7: Return(); Pop(2)

0x2e8: Stack[-3] = Stack[-1]
0x2e9: Return(); Pop(2)

0x2ea: Stack[-1] = 0
0x2eb: PushEmpty(object, object, int, object, object, int)
0x2ec: PushEmpty(object)
0x2ed: Call2 0x2de

0x2ee: Stack[-4] = Stack[-1]
0x2ef: Pop(1)
0x2f0: @@ Find(Stack[-7], Stack[-2])
0x2f1: Pop(0)
0x2f2: Pop(0); Push((bool) Stack[-2] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f4: Push("Can't find diary parent with id: ")
0x2f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2f6: @ Trace(Stack[-1])
0x2f7: Pop(1)
0x2f8: Stack[-9] = (bool) 0
0x2f9: Return(); Pop(6)

0x2fa: @@ AddChild(Stack[-8])
0x2fb: Pop(0)
0x2fc: Push((int) 7)
0x2fd: @ SendWorldWndMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ GetCategory(Stack[-1])
0x300: Pop(0)
0x301: @ SetDiarySection(Stack[-1])
0x302: Pop(0)
0x303: Stack[-9] = (bool) 0
0x304: Return(); Pop(6)

0x305: Stack[-2] = 0
0x306: Stack[-3] = 0
0x307: PushEmpty(object, object, object, object)
0x308: @ GetMainOutdoorScene(Stack[-2])
0x309: Pop(0)
0x30a: Pop(0); Push((bool) Stack[-2] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30c: Push("Can't find main outdoor scene")
0x30d: @ Trace(Stack[-1])
0x30e: Pop(1)
0x30f: Stack[-1] = 0
0x310: Stack[-5] = Stack[-1]
0x311: Return(); Pop(4)

0x312: @@ GetMap(Stack[-1])
0x313: Pop(0)
0x314: Stack[-5] = Stack[-1]
0x315: Return(); Pop(4)

0x316: Stack[-1] = 0
0x317: Stack[-2] = 0
0x318: PushEmpty(int, int)
0x319: Push("branch")
0x31a: @ GetVariable(Stack[-1], Stack[-2])
0x31b: Pop(1)
0x31c: Push((int) 0)
0x31d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: Stack[-3] = (int) 1
0x320: Return(); Pop(2)

0x321: GOTO 0x327

0x322: Push((int) 1)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-3] = (int) 2
0x326: Return(); Pop(2)

0x327: Stack[-3] = (int) 3
0x328: Return(); Pop(2)

0x329: Stack[-1] = (int) 515571
0x32a: Return(); Pop(0)

0x32b: Stack[-1] = (int) 504029
0x32c: Return(); Pop(0)

0x32d: Stack[-1] = "ui/NPC_bmask.png"
0x32e: Return(); Pop(0)

0x32f: Stack[-1] = "ui/NPC_bmask_b.png"
0x330: Return(); Pop(0)

0x331: Stack[-1] = (bool) 0
0x332: Return(); Pop(0)

