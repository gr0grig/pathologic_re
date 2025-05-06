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
	GetItemCount
	GetItem
	GetItemID
	Microscope
	add
	size
	b6q01 error, no blood to open bull
	get
	RemoveItem
	quest_b6_01
	sacrifice
	b6q01
	cleanup
	GetPosition
	GetEyesHeight
	head
	oob6Morlok1
	SetReturnValue
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Black.png
	ui/NPC_Black_b.png

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
	CreateIntVector (1 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	Trace (1 args)
	ChooseItem (2 args)
	SetVariable (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	CreateObjectVector (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x286
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x21f Vars = (object)
		EVENT_26 Op = 0x2af Vars = (string)
		EVENT_5 Op = 0x2b7 Vars = ()
		EVENT_6 Op = 0x2bc Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x329

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x479

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x477

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x47b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x47d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x466

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
0x41: Call2 0x36d

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x3f7

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3e1

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call2 0xce

0x61: Pop(1)
0x62: Push((int) 520631)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 520632)
0x68: Push((int) 21842)
0x69: Push((int) 21841)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Push((int) 520635)
0x6d: Push((int) -1)
0x6e: Push((int) 21844)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: GOTO 0xb0

0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x3f7

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x3e1

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[-1] = (bool) 1
0x80: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x81: PushEmpty(string)
0x82: Stack[-1] = "Neutral"
0x83: Call2 0xce

0x84: Pop(1)
0x85: Push((int) 520636)
0x86: @@ SetMessage(Stack[-1])
0x87: Pop(1)
0x88: @@ ClearReplies()
0x89: Pop(0)
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x3eb

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 520637)
0x90: Push((int) 21847)
0x91: Push((int) 21846)
0x92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(3)
0x94: Push((int) 520693)
0x95: Push((int) -1)
0x96: Push((int) 21903)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: GOTO 0xb0

0x9a: PushEmpty(string)
0x9b: Stack[-1] = "Neutral"
0x9c: Call2 0xce

0x9d: Pop(1)
0x9e: Push((int) 520694)
0x9f: @@ SetMessage(Stack[-1])
0xa0: Pop(1)
0xa1: @@ ClearReplies()
0xa2: Pop(0)
0xa3: Push((int) 520695)
0xa4: Push((int) -1)
0xa5: Push((int) 21905)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: Push((int) 520696)
0xa9: Push((int) -1)
0xaa: Push((int) 21906)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: GOTO 0xb0

0xae: Return(); Pop(0)

0xaf: GOTO 0x4e

0xb0: PushEmpty(bool)
0xb1: Call2 0x47f

0xb2: Pop(0)
0xb3: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb4: @ lshWaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbb: Call2 0x37e

0xbc: Pop(1)
0xbd: GOTO 0xb4

0xbe: GOTO 0xcd

0xbf: Push("all")
0xc0: Push("idle")
0xc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: @ WaitForAnimEnd()
0xc4: Pop(0)
0xc5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: GOTO 0xcd

0xc8: Push("all")
0xc9: Push("idle")
0xca: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: GOTO 0xc3

0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty(bool)
0xd0: Call2 0x47f

0xd1: Pop(0)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Return(); Pop(0)

0xd5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: PushEmpty(string, bool)
0xd9: Stack[-2] = Stack[-3]
0xda: Push("")
0xdb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdd: Stack[-1] = (bool) 0
0xde: GOTO 0xe0

0xdf: Stack[-1] = (bool) 1
0xe0: Call2 0x385

0xe1: Pop(2)
0xe2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe3: Return(); Pop(0)

0xe4: PushEmpty()
0xe5: Push((int) 1)
0xe6: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0xe7: PushEmpty()
0xe8: Call2 0x38b

0xe9: Pop(0)
0xea: Push((int) 21843)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x3d7

0xf1: Pop(2)
0xf2: Push((int) 21844)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x3d7

0xf9: Pop(2)
0xfa: Push((int) 21846)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x3d1

0x101: Pop(2)
0x102: Push((int) 21856)
0x103: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x3dc

0x109: Pop(2)
0x10a: Push((int) 21861)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x3dc

0x111: Pop(2)
0x112: Push((int) 21840)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x115: PushEmpty(bool)
0x116: Stack[-1] = (bool) 0
0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0x3f7

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x3e1

0x11f: Pop(1)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Stack[-1] = (bool) 1
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0xce

0x126: Pop(1)
0x127: Push((int) 520631)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 520632)
0x12d: Push((int) 21842)
0x12e: Push((int) 21841)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 520635)
0x132: Push((int) -1)
0x133: Push((int) 21844)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x3f7

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x3e1

0x141: Pop(1)
0x142: Pop(1); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Stack[-1] = (bool) 1
0x145: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0xce

0x149: Pop(1)
0x14a: Push((int) 520636)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x3eb

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 520637)
0x155: Push((int) 21847)
0x156: Push((int) 21846)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 520693)
0x15a: Push((int) -1)
0x15b: Push((int) 21903)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0xce

0x162: Pop(1)
0x163: Push((int) 520694)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 520695)
0x169: Push((int) -1)
0x16a: Push((int) 21905)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 520696)
0x16e: Push((int) -1)
0x16f: Push((int) 21906)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 21847)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xce

0x179: Pop(1)
0x17a: Push((int) 520638)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 520639)
0x180: Push((int) 21849)
0x181: Push((int) 21848)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 21849)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xce

0x18b: Pop(1)
0x18c: Push((int) 520640)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 520641)
0x192: Push((int) 21851)
0x193: Push((int) 21850)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 520654)
0x197: Push((int) 21858)
0x198: Push((int) 21864)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 21851)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xce

0x1a2: Pop(1)
0x1a3: Push((int) 520642)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 520643)
0x1a9: Push((int) 21853)
0x1aa: Push((int) 21852)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 520653)
0x1ae: Push((int) 21858)
0x1af: Push((int) 21862)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 21853)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call2 0xce

0x1b9: Pop(1)
0x1ba: Push((int) 520644)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 520645)
0x1c0: Push((int) 21855)
0x1c1: Push((int) 21854)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 520648)
0x1c5: Push((int) 21858)
0x1c6: Push((int) 21857)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 21858)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call2 0xce

0x1d0: Pop(1)
0x1d1: Push((int) 520649)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 520650)
0x1d7: Push((int) 21860)
0x1d8: Push((int) 21859)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 21860)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0xce

0x1e2: Pop(1)
0x1e3: Push((int) 520651)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 520652)
0x1e9: Push((int) -1)
0x1ea: Push((int) 21861)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 21855)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call2 0xce

0x1f4: Pop(1)
0x1f5: Push((int) 520646)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 520647)
0x1fb: Push((int) -1)
0x1fc: Push((int) 21856)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 21842)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral"
0x205: Call2 0xce

0x206: Pop(1)
0x207: Push((int) 520633)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 520634)
0x20d: Push((int) -1)
0x20e: Push((int) 21843)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x213: PushEmpty(bool)
0x214: Call2 0x47f

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: @ lshStopAnimation()
0x218: Pop(0)
0x219: GOTO 0x21c

0x21a: @ StopAnimation()
0x21b: Pop(0)
0x21c: Return(); Pop(0)

0x21d: GOTO 0xe5

0x21e: Return(); Pop(0)

0x21f: PushEmpty(object, object, int, int, object, int, bool, int, int, object, object, int, object, object, int, int, object, int, bool, int, int, object, object, int)
0x220: PushEmpty()
0x221: Call2 0x31f

0x222: Pop(0)
0x223: PushEmpty(int, object)
0x224: Stack[-1] = Stack[-27]
0x225: Push(-2, 1); TaskCall(0)
0x226: Call2 0x0

0x227: Pop(-2, 1); TaskReturn
0x228: Pop(1)
0x229: Push((int) 1)
0x22a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x22c: PushEmpty(object)
0x22d: Call2 0x3a2

0x22e: Stack[-13] = Stack[-1]
0x22f: Pop(1)
0x230: @ CreateIntVector(Stack[-11])
0x231: Pop(0)
0x232: Push((int) 4)
0x233: @@ GetItemCount(Stack[-11], Stack[-1])
0x234: Pop(1)
0x235: Stack[-9] = (int) 0
0x236: Pop(0); Push((bool) Stack[-9] < Stack[-10])
0x237: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x238: Push((int) 4)
0x239: @@ GetItem(Stack[-9], Stack[-10], Stack[-1])
0x23a: Pop(1)
0x23b: @@ GetItemID(Stack[-7])
0x23c: Pop(0)
0x23d: Push("Microscope")
0x23e: @ HasInvItemProperty(Stack[-7], Stack[-8], Stack[-1])
0x23f: Pop(1)
0x240: Pop(0); Push((bool) Stack[-6] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x24f

0x243: Push("Microscope")
0x244: @ GetInvItemProperty(Stack[-6], Stack[-8], Stack[-1])
0x245: Pop(1)
0x246: Push((int) 2)
0x247: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x24f

0x24a: @@ add(Stack[-8])
0x24b: Pop(0)
0x24c: @@ add(Stack[-9])
0x24d: Pop(0)
0x24e: Stack[-8] = 0
0x24f: Push((int) 1)
0x250: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x251: GOTO 0x236

0x252: @@ size(Stack[-10])
0x253: Pop(0)
0x254: Push((int) 0)
0x255: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x257: Push("b6q01 error, no blood to open bull")
0x258: @ Trace(Stack[-1])
0x259: Pop(1)
0x25a: Return(); Pop(24)

0x25b: Push((int) 1)
0x25c: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-4] = (int) 0
0x25f: GOTO 0x26e

0x260: @ CreateIntVector(Stack[-3])
0x261: Pop(0)
0x262: @ ChooseItem(Stack[-12], Stack[-3])
0x263: Pop(0)
0x264: @@ size(Stack[-10])
0x265: Pop(0)
0x266: Push(Stack[-10])
0x267: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x268: Push((int) 0)
0x269: @@ get(Stack[-5], Stack[-1])
0x26a: Pop(1)
0x26b: GOTO 0x26d

0x26c: Return(); Pop(24)

0x26d: Stack[-3] = 0
0x26e: @@ get(Stack[-2], Stack[-4])
0x26f: Pop(0)
0x270: @@ get(Stack[-1], Stack[-4])
0x271: Pop(0)
0x272: Push((int) 1)
0x273: Push((int) 4)
0x274: @@ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: PushEmpty(bool, string, string)
0x277: Stack[-2] = "quest_b6_01"
0x278: Stack[-1] = "sacrifice"
0x279: Call2 0x3ad

0x27a: Pop(3)
0x27b: Push("b6q01")
0x27c: Push((int) 5)
0x27d: @ SetVariable(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: PushEmpty()
0x280: Call2 0x430

0x281: Pop(0)
0x282: Stack[-2] = 0
0x283: Stack[-11] = 0
0x284: Stack[-12] = 0
0x285: Return(); Pop(24)

0x286: PushEmpty(float, float)
0x287: PushEmpty(bool)
0x288: Call2 0x324

0x289: Pop(0)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: @ Hold()
0x28d: Pop(0)
0x28e: GOTO 0x287

0x28f: Push((int) 3)
0x290: @ rand(Stack[-2], Stack[-1])
0x291: Pop(1)
0x292: Push((int) 3)
0x293: Pop(1); Push(Stack[-2] + Stack[-1]);
0x294: @ Sleep(Stack[-1])
0x295: Pop(1)
0x296: PushEmpty()
0x297: Call2 0x2ce

0x298: Pop(0)
0x299: GOTO 0x287

0x29a: Return(); Pop(2)

0x29b: PushEmpty(bool, bool)
0x29c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x29d: @ IsLoaded(Stack[-1])
0x29e: Pop(0)
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: Pop(0); Push((bool) Stack[-2] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: PushEmpty(bool)
0x2a4: Call2 0x2cc

0x2a5: Pop(0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: PushEmpty(object)
0x2aa: Call2 0x392

0x2ab: Pop(0)
0x2ac: @ RemoveActor(Stack[-1])
0x2ad: Pop(1)
0x2ae: Return(); Pop(2)

0x2af: PushEmpty()
0x2b0: Push("cleanup")
0x2b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: PushEmpty()
0x2b4: Call2 0x29b

0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: @ StopGroup0()
0x2b8: Pop(0)
0x2b9: @ sync()
0x2ba: Pop(0)
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 0
0x2be: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: PushEmpty(bool)
0x2c1: Call2 0x2cc

0x2c2: Pop(0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Stack[-1] = (bool) 1
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c6: PushEmpty(object)
0x2c7: Call2 0x392

0x2c8: Pop(0)
0x2c9: @ RemoveActor(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(0)

0x2cc: Stack[-1] = (bool) 1
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2cf: @ WaitForAnimEnd()
0x2d0: Pop(0)
0x2d1: PushEmpty(bool)
0x2d2: Call2 0x324

0x2d3: Pop(0)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Return(); Pop(14)

0x2d7: PushEmpty(int)
0x2d8: Call2 0x3c0

0x2d9: Stack[-8] = Stack[-1]
0x2da: Pop(1)
0x2db: Stack[-6] = (int) 0
0x2dc: PushEmpty(bool)
0x2dd: Stack[-1] = (bool) 0
0x2de: Push((int) 5)
0x2df: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: PushEmpty(bool)
0x2e2: Call2 0x324

0x2e3: Pop(0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Stack[-1] = (bool) 1
0x2e6: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x2e7: Push((int) 3)
0x2e8: @ irand(Stack[-6], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push((int) 0)
0x2eb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ed: Push(Stack[-7])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2ef: @ irand(Stack[-4], Stack[-7])
0x2f0: Pop(0)
0x2f1: Push("all")
0x2f2: PushEmpty(string, int)
0x2f3: Stack[-1] = Stack[-7]
0x2f4: Call2 0x3b9

0x2f5: Pop(1)
0x2f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f7: Pop(2)
0x2f8: @ WaitForAnimEnd(Stack[-3])
0x2f9: Pop(0)
0x2fa: Pop(0); Push((bool) Stack[-3] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x31a

0x2fd: GOTO 0x30f

0x2fe: Push((int) 1)
0x2ff: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x301: Push((int) 4)
0x302: @ rand(Stack[-3], Stack[-1])
0x303: Pop(1)
0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-3] + Stack[-1]);
0x306: @ Sleep(Stack[-1], Stack[-2])
0x307: Pop(1)
0x308: Pop(0); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: GOTO 0x31a

0x30b: GOTO 0x30f

0x30c: Push(Stack[-6])
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: GOTO 0x31a

0x30f: PushEmpty(bool)
0x310: Call2 0x31d

0x311: Pop(0)
0x312: Pop(1); Push((bool) Stack[-1] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: GOTO 0x31a

0x315: @ ResetAAS()
0x316: Pop(0)
0x317: Push((int) 1)
0x318: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x319: GOTO 0x2dc

0x31a: @ ResetAAS()
0x31b: Pop(0)
0x31c: Return(); Pop(14)

0x31d: Stack[-1] = (bool) 1
0x31e: Return(); Pop(0)

0x31f: @ StopAnimation()
0x320: Pop(0)
0x321: @ StopGroup0()
0x322: Pop(0)
0x323: Return(); Pop(0)

0x324: PushEmpty(bool, bool)
0x325: @ IsLoaded(Stack[-1])
0x326: Pop(0)
0x327: Stack[-3] = Stack[-1]
0x328: Return(); Pop(2)

0x329: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x32a: @@ GetPosition(Stack[-8])
0x32b: Pop(0)
0x32c: @@ GetEyesHeight(Stack[-9])
0x32d: Pop(0)
0x32e: Push(CvectorIndex(Stack[-8], 1))
0x32f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x330: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x331: @ GetPosition(Stack[-7])
0x332: Pop(0)
0x333: @ GetEyesHeight(Stack[-9])
0x334: Pop(0)
0x335: Push(CvectorIndex(Stack[-7], 1))
0x336: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x337: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x338: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x339: Push(CvectorIndex(Stack[-6], 1))
0x33a: Stack[-1] = (int) 0
0x33b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x33c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x33d: Pop(1); Push(Sqrt(Stack[-1]))
0x33e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x33f: Stack[-5] = -Stack[-6]; Pop(0);
0x340: Pop(0); Push(Stack[-6] * Stack[-19]);
0x341: PushEmpty(cvector, cvector)
0x342: Push(CVector(0.0, 1.0, 0.0))
0x343: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x344: Call2 0x398

0x345: Pop(1)
0x346: Push((int) 25)
0x347: Pop(2); Push(Stack[-2] * Stack[-1]);
0x348: Pop(2); Push(Stack[-2] + Stack[-1]);
0x349: Push(CVector(0.0, 10.0, 0.0))
0x34a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x34b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x34c: @ IsOverrideActive(Stack[-2])
0x34d: Pop(0)
0x34e: Push(Stack[-2])
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-21] = (bool) 0
0x351: Return(); Pop(18)

0x352: @ StopWorld()
0x353: Pop(0)
0x354: @ CameraTransit(Stack[-3], Stack[-5])
0x355: Pop(0)
0x356: Push(CvectorIndex(Stack[-4], 0))
0x357: Push(CvectorIndex(Stack[-5], 2))
0x358: @ Rotate(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: PushEmpty(bool)
0x35b: Call2 0x47f

0x35c: Pop(0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x367

0x35f: Push("head")
0x360: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x361: Pop(1)
0x362: Push(Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: Push("head")
0x365: @ LookAsyncCamera(Stack[-1])
0x366: Pop(1)
0x367: @ CameraWaitForPlayFinish()
0x368: Pop(0)
0x369: @ ResumeWorld()
0x36a: Pop(0)
0x36b: Stack[-21] = (bool) 1
0x36c: Return(); Pop(18)

0x36d: PushEmpty(bool, bool)
0x36e: @ CameraSwitchToNormal()
0x36f: Pop(0)
0x370: PushEmpty(bool)
0x371: Call2 0x47f

0x372: Pop(0)
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: GOTO 0x37d

0x375: Push("head")
0x376: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x377: Pop(1)
0x378: Push(Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37a: Push("head")
0x37b: @ UnlookAsync(Stack[-1])
0x37c: Pop(1)
0x37d: Return(); Pop(2)

0x37e: PushEmpty(float, float, float, float)
0x37f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x380: Pop(0)
0x381: Push((bool) 0)
0x382: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(1)
0x384: Return(); Pop(4)

0x385: PushEmpty(float, float, float, float)
0x386: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x387: Pop(0)
0x388: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x389: Pop(0)
0x38a: Return(); Pop(4)

0x38b: PushEmpty(bool)
0x38c: Call2 0x47f

0x38d: Pop(0)
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: @ lshStopSpeech()
0x390: Pop(0)
0x391: Return(); Pop(0)

0x392: PushEmpty(object, object)
0x393: @ self(Stack[-1])
0x394: Pop(0)
0x395: Stack[-3] = Stack[-1]
0x396: Return(); Pop(2)

0x397: Stack[-1] = 0
0x398: PushEmpty(float, float)
0x399: Pop(0); Push(Stack[-3] | Stack[-3]);
0x39a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39b: Push((float)0.0)
0x39c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x39f: Return(); Pop(2)

0x3a0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a1: Return(); Pop(2)

0x3a2: PushEmpty(object, object)
0x3a3: @ CreateObjectVector(Stack[-1])
0x3a4: Pop(0)
0x3a5: Stack[-3] = Stack[-1]
0x3a6: Return(); Pop(2)

0x3a7: Stack[-1] = 0
0x3a8: PushEmpty(int, int)
0x3a9: @ GetVariable(Stack[-3], Stack[-1])
0x3aa: Pop(0)
0x3ab: Stack[-4] = Stack[-1]
0x3ac: Return(); Pop(2)

0x3ad: PushEmpty(object, object)
0x3ae: @ FindActor(Stack[-1], Stack[-4])
0x3af: Pop(0)
0x3b0: Pop(0); Push((bool) Stack[-1] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-5] = (bool) 0
0x3b3: Return(); Pop(2)

0x3b4: @ Trigger(Stack[-1], Stack[-3])
0x3b5: Pop(0)
0x3b6: Stack[-5] = (bool) 1
0x3b7: Return(); Pop(2)

0x3b8: Stack[-1] = 0
0x3b9: PushEmpty(string, string)
0x3ba: Stack[-1] = "idle"
0x3bb: Push(Stack[-3])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3be: Stack[-4] = Stack[-1]
0x3bf: Return(); Pop(2)

0x3c0: PushEmpty(int, bool, int, bool)
0x3c1: Stack[-2] = (int) 0
0x3c2: Push("all")
0x3c3: PushEmpty(string, int)
0x3c4: Stack[-1] = Stack[-5]
0x3c5: Call2 0x3b9

0x3c6: Pop(1)
0x3c7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: GOTO 0x3cf

0x3cc: Push((int) 1)
0x3cd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ce: GOTO 0x3c2

0x3cf: Stack[-5] = Stack[-2]
0x3d0: Return(); Pop(4)

0x3d1: PushEmpty()
0x3d2: Push("oob6Morlok1")
0x3d3: Push((int) 1)
0x3d4: @ SetVariable(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: Push((int) 1)
0x3d9: @@ SetReturnValue(Stack[-1])
0x3da: Pop(1)
0x3db: Return(); Pop(0)

0x3dc: PushEmpty()
0x3dd: PushEmpty()
0x3de: Call2 0x423

0x3df: Pop(0)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: PushEmpty(bool, object)
0x3e3: Stack[-1] = Stack[-3]
0x3e4: Call2 0x403

0x3e5: Pop(1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-2] = (bool) 1
0x3e8: Return(); Pop(0)

0x3e9: Stack[-2] = (bool) 0
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty(int, string)
0x3ed: Stack[-1] = "oob6Morlok1"
0x3ee: Call2 0x3a8

0x3ef: Pop(1)
0x3f0: Push((int) 0)
0x3f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-2] = (bool) 1
0x3f4: Return(); Pop(0)

0x3f5: Stack[-2] = (bool) 0
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(int, string)
0x3f9: Stack[-1] = "b6q01"
0x3fa: Call2 0x3a8

0x3fb: Pop(1)
0x3fc: Push((int) 4)
0x3fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-2] = (bool) 1
0x400: Return(); Pop(0)

0x401: Stack[-2] = (bool) 0
0x402: Return(); Pop(0)

0x403: PushEmpty(int, int, object, int, bool, int, int, int, object, int, bool, int)
0x404: Push((int) 4)
0x405: @@ GetItemCount(Stack[-7], Stack[-1])
0x406: Pop(1)
0x407: Stack[-5] = (int) 0
0x408: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x409: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x40a: Push((int) 4)
0x40b: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x40c: Pop(1)
0x40d: @@ GetItemID(Stack[-3])
0x40e: Pop(0)
0x40f: Push("Microscope")
0x410: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x411: Pop(1)
0x412: Pop(0); Push((bool) Stack[-2] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x41e

0x415: Push("Microscope")
0x416: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x417: Pop(1)
0x418: Push((int) 2)
0x419: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-14] = (bool) 1
0x41c: Return(); Pop(12)

0x41d: Stack[-4] = 0
0x41e: Push((int) 1)
0x41f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x420: GOTO 0x408

0x421: Stack[-14] = (bool) 0
0x422: Return(); Pop(12)

0x423: PushEmpty(object, object)
0x424: Push((int) 365)
0x425: Push((int) 1)
0x426: Push((int) 525665)
0x427: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: PushEmpty(bool, object, int)
0x42a: Stack[-2] = Stack[-4]
0x42b: Stack[-1] = (int) 265
0x42c: Call2 0x44a

0x42d: Pop(3)
0x42e: Return(); Pop(2)

0x42f: Stack[-1] = 0
0x430: PushEmpty(object, object)
0x431: Push((int) 367)
0x432: Push((int) 1)
0x433: Push((int) 525667)
0x434: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: PushEmpty(bool, object, int)
0x437: Stack[-2] = Stack[-4]
0x438: Stack[-1] = (int) 265
0x439: Call2 0x44a

0x43a: Pop(3)
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: PushEmpty(object, object)
0x43e: @ GetDiaryRoot(Stack[-1])
0x43f: Pop(0)
0x440: Pop(0); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x442: Push("Can't retrieve diary root")
0x443: @ Trace(Stack[-1])
0x444: Pop(1)
0x445: Stack[-3] = (bool) 0
0x446: Return(); Pop(2)

0x447: Stack[-3] = Stack[-1]
0x448: Return(); Pop(2)

0x449: Stack[-1] = 0
0x44a: PushEmpty(object, object, int, object, object, int)
0x44b: PushEmpty(object)
0x44c: Call2 0x43d

0x44d: Stack[-4] = Stack[-1]
0x44e: Pop(1)
0x44f: @@ Find(Stack[-7], Stack[-2])
0x450: Pop(0)
0x451: Pop(0); Push((bool) Stack[-2] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x453: Push("Can't find diary parent with id: ")
0x454: Pop(1); Push(Stack[-1] + Stack[-8]);
0x455: @ Trace(Stack[-1])
0x456: Pop(1)
0x457: Stack[-9] = (bool) 0
0x458: Return(); Pop(6)

0x459: @@ AddChild(Stack[-8])
0x45a: Pop(0)
0x45b: Push((int) 7)
0x45c: @ SendWorldWndMessage(Stack[-1])
0x45d: Pop(1)
0x45e: @@ GetCategory(Stack[-1])
0x45f: Pop(0)
0x460: @ SetDiarySection(Stack[-1])
0x461: Pop(0)
0x462: Stack[-9] = (bool) 0
0x463: Return(); Pop(6)

0x464: Stack[-2] = 0
0x465: Stack[-3] = 0
0x466: PushEmpty(int, int)
0x467: Push("branch")
0x468: @ GetVariable(Stack[-1], Stack[-2])
0x469: Pop(1)
0x46a: Push((int) 0)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46d: Stack[-3] = (int) 1
0x46e: Return(); Pop(2)

0x46f: GOTO 0x475

0x470: Push((int) 1)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-3] = (int) 2
0x474: Return(); Pop(2)

0x475: Stack[-3] = (int) 3
0x476: Return(); Pop(2)

0x477: Stack[-1] = (int) 521048
0x478: Return(); Pop(0)

0x479: Stack[-1] = (int) 521047
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = "ui/NPC_Black.png"
0x47c: Return(); Pop(0)

0x47d: Stack[-1] = "ui/NPC_Black_b.png"
0x47e: Return(); Pop(0)

0x47f: Stack[-1] = (bool) 0
0x480: Return(); Pop(0)

