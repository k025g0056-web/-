#pragma once
#include"必要な変数をまとめる.h"
#include<vector>
#include<string>
#include<dinput.h>
#include <cstring>
#include<stdio.h>

//メイン関数
#define プログラムの主体 int main()

//ピンク文字
//================================================
#define 繰り返し for
#define この間 while
#define する do
#define ずっと while(true)
#define もし if
#define それ以外にもし else if
#define それ以外なら else
#define 場合分け switch
#define 戻り値 return
#define 場合 case
#define ループ脱出 break
//=====================================================

//青文字
//=====================================================
#define 整数型 int
#define 浮動小数点型 float
#define 倍精度浮動小数点型 double
#define 長い long
#define 短い short
#define 正誤 bool
#define 符号なし unsigned
#define 文字型 char
#define 正 true
#define 誤 false
#define 転送する static_cast
#define 静的な static
#define 定数 const
#define メモリの確保 new
#define メモリの解放 delete
#define 型宣言 class
#define 構造体 struct
#define 共用体 union
#define 公開 public
#define 非公開 private
#define 限定公開 protected
#define 友達 friend
#define 列挙型 enum
#define 限定列挙型 enum class
#define 自分 this
#define 仮想 virtual
#define 上書き override
//===================================================

//数字
//===================================================
#define 零 0
#define 壱 1
#define 弐 2
#define 惨 3
#define 肆 4
#define 伍 5
#define 陸 6
#define 漆 7
#define 捌 8
#define 玖 9
#define 拾 10
//====================================================

//白文字
//===================================================
#define 句点 ;
#define 読点 ,
#define （） ()
#define （ (
#define ） )
//====================================================

//演算子
//=====================================================
#define 足す +
#define 引く -
#define 掛ける *
#define 割る /
#define 余り %
#define は =
#define 住所 &
//======================================================

//緑文字
//======================================================
#define 可変長配列 std::vector
#define 文字列型 std::string
#define ファイル FILE
//======================================================

//入力
//=====================================================
#define キーの更新 memcpy(prekey,key,256)
#define キー零 key[DIK_0]
#define キー壱 key[DIK_1]
#define キー弐 key[DIK_2]
#define キー惨 key[DIK_3]
#define キー肆 key[DIK_4]
#define キー伍 key[DIK_5]
#define キー陸 key[DIK_6]
#define キー漆 key[DIK_7]
#define キー捌 key[DIK_8]
#define キー玖 key[DIK_9]
#define Aを押している key[DIK_A]
#define Bを押している key[DIK_B]
#define Cを押している key[DIK_C]
#define Dを押している key[DIK_D]
#define Eを押している key[DIK_E]
#define Fを押している key[DIK_F]
#define Gを押している key[DIK_G]
#define Hを押している key[DIK_H]
#define Iを押している key[DIK_I]
#define Jを押している key[DIK_J]
#define Kを押している key[DIK_K]
#define Lを押している key[DIK_L]
#define Mを押している key[DIK_M]
#define Nを押している key[DIK_N]
#define Oを押している key[DIK_O]
#define Pを押している key[DIK_P]
#define Qを押している key[DIK_Q]
#define Rを押している key[DIK_R]
#define Sを押している key[DIK_S]
#define Tを押している key[DIK_T]
#define Uを押している key[DIK_U]
#define Vを押している key[DIK_V]
#define Wを押している key[DIK_W]
#define Xを押している key[DIK_X]
#define Yを押している key[DIK_Y]
#define Zを押している key[DIK_Z]
#define 右シフトを押している key[DIK_RSHIFT]
#define 左シフトを押している key[DIK_LSHIFT]
#define スペースを押している key[DIK_SPACE]
#define 右コントロールを押している key[DIK_RCONTROL]
#define 左コントロールを押している key[DIK_LCONTROL]
//=================================================================

//関数
//=================================================================
#define コンソールに文字を表示 printf
#define 文字入力を受け取る scanf
#define マイクロソフトコマンド system
#define プログラム強制終了 exit(0)
//==================================================================

//ギットコマンド
//========================================================================
#define タグを削除する(name) system(("git tag -d " + std::string(name)).c_str())
#define Webからもタグを削除する(name) system(("git push origin --delete " + std::string(name)).c_str())
#define 新しいリポジトリを作る system("git init")
#define リポジトリのクローン(URL) system(("git clone"+std::string(URL)).c_str())
#define 状態の確認 system("git status")
#define コミット(message) system(("git commit -m"+std::string(message)).c_str())
#define ステージコミット(message) system(("git commit -am"+std::string(message)).c_str())
#define プッシュ system("git push")
#define コミットプッシュ commitPush()
#define 変更をステージに追加(file) system(("git add"+std::string(file)).c_str()) 
#define 全ての変更をステージに追加(file) system("git add .") 
//============================================================================

//ここから必要な関数を書いていくよ
//============================================================

void commitPush() {
	ステージコミット("変更を加えた")句点
		プッシュ 句点
}