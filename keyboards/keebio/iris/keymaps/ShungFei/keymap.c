// copied from users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_alternatives.h
// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
KC_A,              KC_Z,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_Q),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_M),      \
LT(U_BUTTON,KC_W), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_COMM,           KC_DOT,            ALGR_T(KC_SLSH),   LT(U_BUTTON,KC_QUOT),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
KC_Q,              KC_H,              KC_O,              KC_U,              KC_X,              KC_G,              KC_C,              KC_R,              KC_F,              KC_Z,              \
LGUI_T(KC_Y),      LALT_T(KC_I),      LCTL_T(KC_E),      LSFT_T(KC_A),      KC_DOT,            KC_D,              LSFT_T(KC_S),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_B),      \
LT(U_BUTTON,KC_J), ALGR_T(KC_SLSH),   KC_COMM,           KC_K,              KC_QUOT,           KC_W,              KC_M,              KC_L,              ALGR_T(KC_P),      LT(U_BUTTON,KC_V), \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,              \
LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),      \
LT(U_BUTTON,KC_SLSH),ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      LT(U_BUTTON,KC_Z), \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              \
LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),      \
LT(U_BUTTON,KC_F), ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      LT(U_BUTTON,KC_Y), \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Y), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
KC_A,              KC_Z,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_Q),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_M),      \
LT(U_BUTTON,KC_W), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_COMM,           KC_DOT,            ALGR_T(KC_SLSH),   LT(U_BUTTON,KC_QUOT),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
KC_Q,              KC_H,              KC_O,              KC_U,              KC_X,              KC_G,              KC_C,              KC_R,              KC_F,              KC_Z,              \
LGUI_T(KC_Y),      LALT_T(KC_I),      LCTL_T(KC_E),      LSFT_T(KC_A),      KC_DOT,            KC_D,              LSFT_T(KC_S),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_B),      \
LT(U_BUTTON,KC_J), ALGR_T(KC_SLSH),   KC_COMM,           KC_K,              KC_QUOT,           KC_W,              KC_M,              KC_L,              ALGR_T(KC_P),      LT(U_BUTTON,KC_V), \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,              \
LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),      \
LT(U_BUTTON,KC_SLSH),ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      LT(U_BUTTON,KC_Z), \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              \
LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),      \
LT(U_BUTTON,KC_F), ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      LT(U_BUTTON,KC_Y), \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Y), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
KC_A,              KC_Z,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_Q,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_M,              \
KC_W,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_QUOT,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
KC_Q,              KC_H,              KC_O,              KC_U,              KC_X,              KC_G,              KC_C,              KC_R,              KC_F,              KC_Z,              \
KC_Y,              KC_I,              KC_E,              KC_A,              KC_DOT,            KC_D,              KC_S,              KC_T,              KC_N,              KC_B,              \
KC_J,              KC_SLSH,           KC_COMM,           KC_K,              KC_QUOT,           KC_W,              KC_M,              KC_L,              KC_P,              KC_V,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_D,              KC_H,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_G,              KC_M,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_G,              KC_K,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,              \
KC_A,              KC_O,              KC_E,              KC_U,              KC_I,              KC_D,              KC_H,              KC_T,              KC_N,              KC_S,              \
KC_SLSH,           KC_Q,              KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              KC_V,              KC_Z,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              \
KC_S,              KC_H,              KC_N,              KC_T,              KC_COMM,           KC_DOT,            KC_A,              KC_E,              KC_O,              KC_I,              \
KC_F,              KC_M,              KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              KC_K,              KC_Y,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,           \
KC_A,              KC_S,              KC_H,              KC_T,              KC_G,              KC_Y,              KC_N,              KC_E,              KC_O,              KC_I,              \
KC_Z,              KC_X,              KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Y,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
KC_A,              KC_Z,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_Q,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_M,              \
KC_W,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_QUOT,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
KC_Q,              KC_H,              KC_O,              KC_U,              KC_X,              KC_G,              KC_C,              KC_R,              KC_F,              KC_Z,              \
KC_Y,              KC_I,              KC_E,              KC_A,              KC_DOT,            KC_D,              KC_S,              KC_T,              KC_N,              KC_B,              \
KC_J,              KC_SLSH,           KC_COMM,           KC_K,              KC_QUOT,           KC_W,              KC_M,              KC_L,              KC_P,              KC_V,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_D,              KC_H,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_G,              KC_M,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
KC_A,              KC_R,              KC_S,              KC_T,              KC_G,              KC_K,              KC_N,              KC_E,              KC_I,              KC_O,              \
KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,              \
KC_A,              KC_O,              KC_E,              KC_U,              KC_I,              KC_D,              KC_H,              KC_T,              KC_N,              KC_S,              \
KC_SLSH,           KC_Q,              KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              KC_V,              KC_Z,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              \
KC_S,              KC_H,              KC_N,              KC_T,              KC_COMM,           KC_DOT,            KC_A,              KC_E,              KC_O,              KC_I,              \
KC_F,              KC_M,              KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              KC_K,              KC_Y,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,           \
KC_A,              KC_S,              KC_H,              KC_T,              KC_G,              KC_Y,              KC_N,              KC_E,              KC_O,              KC_I,              \
KC_Z,              KC_X,              KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Y,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_CAPS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_NAV),         DF(U_NUM),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_CAPS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_NAV),         DF(U_NUM),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_INS,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_CAPS,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           \
U_NA,              KC_ALGR,           DF(U_NUM),         DF(U_NAV),         U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_CAPS,           \
U_NA,              KC_ALGR,           DF(U_NUM),         DF(U_NAV),         U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_CAPS,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           DF(U_NUM),         DF(U_NAV),         U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
KC_WH_U,           KC_WH_L,           KC_MS_U,           KC_WH_R,           U_NU,              U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_WH_D,           KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_MOUSE),       DF(U_SYM),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NU,              U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_MOUSE),       DF(U_SYM),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_NU,              KC_WH_L,           KC_MS_U,           KC_WH_R,           KC_WH_U,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_R,           KC_WH_D,           \
U_NA,              KC_ALGR,           DF(U_SYM),         DF(U_MOUSE),       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NU,              \
U_NA,              KC_ALGR,           DF(U_SYM),         DF(U_MOUSE),       U_NA,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NA,              KC_ALGR,           DF(U_SYM),         DF(U_MOUSE),       U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
RGB_HUI,           RGB_SAI,           KC_VOLU,           RGB_VAI,           RGB_TOG,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
RGB_MOD,           KC_MPRV,           KC_VOLD,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          U_NA,              DF(U_MEDIA),       DF(U_FUN),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           RGB_TOG,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          U_NA,              DF(U_MEDIA),       DF(U_FUN),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              RGB_TOG,           RGB_MOD,           KC_VOLU,           RGB_HUI,           RGB_SAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_MNXT,           RGB_VAI,           \
U_NA,              KC_ALGR,           DF(U_FUN),         DF(U_MEDIA),       U_NA,              OUT_AUTO,          U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           RGB_TOG,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              \
U_NA,              KC_ALGR,           DF(U_FUN),         DF(U_MEDIA),       U_NA,              U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           DF(U_FUN),         DF(U_MEDIA),       U_NA,              OUT_AUTO,          U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_EQL,            KC_4,              KC_5,              KC_6,              KC_SCLN,           \
U_NA,              KC_ALGR,           DF(U_NAV),         DF(U_NUM),         U_NA,              KC_BSLS,           KC_1,              KC_2,              KC_3,              KC_GRV,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MINS,           KC_0,              KC_DOT,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           U_NA,              DF(U_NUM),         DF(U_NAV),         KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_PLUS,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_COLN,           \
U_NA,              KC_ALGR,           DF(U_MOUSE),       DF(U_SYM),         U_NA,              KC_PIPE,           KC_EXLM,           KC_AT,             KC_HASH,           KC_TILD,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_UNDS,           KC_LPRN,           KC_RPRN,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           U_NA,              DF(U_SYM),         DF(U_MOUSE),       KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_SLCK,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
KC_PWR,              KC_ALGR,           DF(U_MEDIA),       DF(U_FUN),         U_NA,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,             \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SLCK,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              DF(U_FUN),         DF(U_MEDIA),       KC_ALGR,           KC_PWR,              \
U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

// copied from users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_selection.h
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#if !defined(MIRYOKU_LAYER_BASE)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_ALPHAS_AZERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP
    #elif defined (MIRYOKU_ALPHAS_BEAKL15)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDH)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDHK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_ALPHAS_DVORAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_HALMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_WORKMAN)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP
    #elif defined (MIRYOKU_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #elif defined (MIRYOKU_ALPHAS_QWERTZ)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #endif
  #else
    #if defined (MIRYOKU_ALPHAS_AZERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_ALPHAS_BEAKL15)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_ALPHAS_COLEMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDH)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDHK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_ALPHAS_DVORAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_ALPHAS_HALMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_ALPHAS_WORKMAN)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_ALPHAS_QWERTZ)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BASE)
  #define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_EXTRA)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_EXTRA_AZERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP
    #elif defined (MIRYOKU_EXTRA_BEAKL15)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAKDH)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAKDHK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_EXTRA_DVORAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP
    #elif defined (MIRYOKU_EXTRA_HALMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP
    #elif defined (MIRYOKU_EXTRA_WORKMAN)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP
    #elif defined (MIRYOKU_EXTRA_QWERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #elif defined (MIRYOKU_EXTRA_QWERTZ)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #endif
  #else
    #if defined (MIRYOKU_EXTRA_AZERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_EXTRA_BEAKL15)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_EXTRA_COLEMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_EXTRA_COLEMAKDH)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_EXTRA_COLEMAKDHK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_EXTRA_DVORAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_EXTRA_HALMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_EXTRA_WORKMAN)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_EXTRA_QWERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_EXTRA_QWERTZ)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_EXTRA)
  #define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_TAP)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_TAP_AZERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP
    #elif defined (MIRYOKU_TAP_BEAKL15)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAKDH)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAKDHK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_TAP_DVORAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP
    #elif defined (MIRYOKU_TAP_HALMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP
    #elif defined (MIRYOKU_TAP_WORKMAN)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP
    #elif defined (MIRYOKU_TAP_QWERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP
    #elif defined (MIRYOKU_TAP_QWERTZ)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP
    #endif
  #else
    #if defined (MIRYOKU_TAP_AZERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_AZERTY
    #elif defined (MIRYOKU_TAP_BEAKL15)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_BEAKL15
    #elif defined (MIRYOKU_TAP_COLEMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAK
    #elif defined (MIRYOKU_TAP_COLEMAKDH)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #elif defined (MIRYOKU_TAP_COLEMAKDHK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK
    #elif defined (MIRYOKU_TAP_DVORAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_DVORAK
    #elif defined (MIRYOKU_TAP_HALMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_HALMAK
    #elif defined (MIRYOKU_TAP_WORKMAN)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_WORKMAN
    #elif defined (MIRYOKU_TAP_QWERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY
    #elif defined (MIRYOKU_TAP_QWERTZ)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTZ
    #else
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_TAP)
  #define MIRYOKU_LAYERMAPPING_TAP MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_BUTTON)
  #define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BUTTON)
  #define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NAV)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI
    #else
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NAV)
  #define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MOUSE)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_VI
    #else
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_MOUSE)
  #define MIRYOKU_LAYERMAPPING_MOUSE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MEDIA)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_VI
    #else
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_MEDIA)
  #define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NUM)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_FLIP
  #else
    #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NUM)
  #define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_SYM)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_FLIP
  #else
    #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_SYM)
  #define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_FUN)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN_FLIP
  #else
    #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_FUN)
  #define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#endif

// copied from users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_list.h
// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#endif

// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

enum miryoku_layers {
#define MIRYOKU_X(LAYER, STRING) U_##LAYER,
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#if !defined (MIRYOKU_MAPPING)
  #define MIRYOKU_MAPPING LAYOUT_miryoku
#endif

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO KC_AGIN
  #define U_PST KC_PSTE
  #define U_CPY KC_COPY
  #define U_CUT KC_CUT
  #define U_UND KC_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO SCMD(KC_Z)
  #define U_PST LCMD(KC_V)
  #define U_CPY LCMD(KC_C)
  #define U_CUT LCMD(KC_X)
  #define U_UND LCMD(KC_Z)
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO C(KC_Y)
  #define U_PST C(KC_V)
  #define U_CPY C(KC_C)
  #define U_CUT C(KC_X)
  #define U_UND C(KC_Z)
#else
  #define U_RDO KC_AGIN
  #define U_PST S(KC_INS)
  #define U_CPY C(KC_INS)
  #define U_CUT S(KC_DEL)
  #define U_UND KC_UNDO
#endif


// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#define MIRYOKU_X(LAYER, STRING) [U_##LAYER] = U_MACRO_VA_ARGS(MIRYOKU_LAYERMAPPING_##LAYER, MIRYOKU_LAYER_##LAYER),
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};

#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[] = {KC_BTN2, KC_BTN1, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[] = {KC_MSTP, KC_MPLY, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[] = {KC_0, KC_MINS, COMBO_END};
  #if defined (MIRYOKU_LAYERS_FLIP)
const uint16_t PROGMEM thumbcombos_sym[] = {KC_UNDS, KC_LPRN, COMBO_END};
  #else
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
  #endif
const uint16_t PROGMEM thumbcombos_fun[] = {KC_SPC, KC_TAB, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_right, LT(U_FUN, KC_DEL)),
  COMBO(thumbcombos_base_left, LT(U_MEDIA, KC_ESC)),
  COMBO(thumbcombos_nav, KC_DEL),
  COMBO(thumbcombos_mouse, KC_BTN3),
  COMBO(thumbcombos_media, KC_MUTE),
  COMBO(thumbcombos_num, KC_DOT),
  #if defined (MIRYOKU_LAYERS_FLIP)
  COMBO(thumbcombos_sym, KC_RPRN),
  #else
  COMBO(thumbcombos_sym, KC_LPRN),
  #endif
  COMBO(thumbcombos_fun, KC_APP)
};
#endif

// Rotary encoder code
// Most is copied from https://docs.splitkb.com/hc/en-us/articles/360010513760-How-can-I-use-a-rotary-encoder
bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool encoder_update_user(uint8_t index, bool clockwise) {
#if defined MIRYOKU_LAYERS_FLIP
    if (index == 1) {
        // Right encoder
#else
    if (index == 0) {
        // Left encoder
#endif
        if (layer_state_is(U_BASE) | layer_state_is(U_BUTTON) | layer_state_is(U_EXTRA)) {
            // Browser tabbing
            if (clockwise) {
                tap_code16(C(KC_TAB));
            } else {
                tap_code16(S(C(KC_TAB)));
            }
        } else if (layer_state_is(U_SYM)) {
            // Scroll search results
            if (clockwise) {
                tap_code(KC_F3);
            } else {
                tap_code16(S(KC_F3));
            }
        } else if (layer_state_is(U_NUM) | layer_state_is(U_TAP)) {
            // Window switching. Could also use ALT+ESC
            if (clockwise) {
                if (!is_alt_tab_active) {
                    is_alt_tab_active = true;
                    register_code(KC_LALT);
                }
                alt_tab_timer = timer_read();
                tap_code16(KC_TAB);
            } else {
                if (!is_alt_tab_active) {
                    is_alt_tab_active = true;
                    register_code(KC_LALT);
                }
                alt_tab_timer = timer_read();
                tap_code16(S(KC_TAB));
            }
        } else if (layer_state_is(U_FUN)) {
            // Brightness
            if (clockwise) {
                tap_code(KC_BRIU);
            } else {
                tap_code(KC_BRID);
            }
        }
#if defined MIRYOKU_LAYERS_FLIP
    } else if (index == 0) {
        // Left encoder
#else
    } else if (index == 1) {
        // Right encoder
#endif
        if (layer_state_is(U_BASE) | layer_state_is(U_BUTTON) | layer_state_is(U_EXTRA)) {
            // Scrolling
            if (clockwise) {
                tap_code(KC_PGDN);
            } else {
                tap_code(KC_PGUP);
            }
        } else if (layer_state_is(U_MEDIA) | layer_state_is(U_TAP)) {
            // Volume control
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (layer_state_is(U_NAV)) {
            // Up/down and (CTRL) left/right arrow keys
            if (get_mods() & MOD_BIT(KC_LCTL)) {
                // Holding CTRL
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
            } else {
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
            }
        } else if (layer_state_is(U_MOUSE)) {
            // Redo/undo
            if (clockwise) {
                tap_code16(U_RDO);
            } else {
                tap_code16(U_UND);
            }
        }
    }
    return false;
}

// For rotary encoder window switching
void matrix_scan_user(void) {
    if (is_alt_tab_active) {
        if (timer_elapsed(alt_tab_timer) > 750) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
        }
    }
}