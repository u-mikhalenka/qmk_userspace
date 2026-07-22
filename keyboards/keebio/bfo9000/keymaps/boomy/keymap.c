#include QMK_KEYBOARD_H

#define LAYOUT_bfo9000 LAYOUT
#define _BASE  0
#define _NAV   1
#define _SYM   2
#define _FN    3
#define _MEDIA 4

enum custom_keycodes {
    U_ARW = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌────┬───────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬───────────────┬───────┐   ┌──────┬──────────────┬───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────┐
//    │ no │        esc        │       f1        │       f2        │       f3        │       f4        │      f5       │     volu      │  no   │   │  no  │     f12      │      f6       │       f7        │       f8        │       f9        │       f10       │      f11      │ no │
//    ├────┼───────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼───────────────┼───────┤   ├──────┼──────────────┼───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────┤
//    │ no │         `         │        1        │        2        │        3        │        4        │       5       │     vold      │  no   │   │  no  │      no      │       6       │        7        │        8        │        9        │        0        │       =       │ no │
//    ├────┼───────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼───────────────┼───────┤   ├──────┼──────────────┼───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────┤
//    │ no │        tab        │        q        │        w        │        e        │        r        │       t       │       `       │  no   │   │  no  │      =       │       y       │        u        │        i        │        o        │        p        │       -       │ no │
//    ├────┼───────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼───────────────┼───────┤   ├──────┼──────────────┼───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────┤
//    │ no │ MT(MOD_LGUI, esc) │ MT(MOD_LCTL, a) │ MT(MOD_LALT, s) │ MT(MOD_LGUI, d) │ MT(MOD_LSFT, f) │       g       │     bspc      │  no   │   │ bspc │     del      │       h       │ MT(MOD_LSFT, j) │ MT(MOD_RGUI, k) │ MT(MOD_LALT, l) │ MT(MOD_RCTL, ;) │       '       │ no │
//    ├────┼───────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼───────────────┼───────┤   ├──────┼──────────────┼───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────┤
//    │ no │  LT(_MEDIA, f13)  │    ALL_T(z)     │        x        │        c        │        v        │       b       │       [       │  no   │   │ del  │      ]       │       n       │        m        │        ,        │        .        │    ALL_T(/)     │ LT(_MEDIA, \) │ no │
//    ├────┼───────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼───────────────┼───────┤   ├──────┼──────────────┼───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────┤
//    │ no │        no         │       no        │      lctl       │      lalt       │      lgui       │ OSM(MOD_LSFT) │ LT(_NAV, tab) │ U_ARW │   │  no  │ LT(_FN, ent) │ LT(_SYM, spc) │  OSM(MOD_LCTL)  │        [        │        ]        │       no        │      no       │ no │
//    └────┴───────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴───────────────┴───────┘   └──────┴──────────────┴───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────┘
[_BASE] = LAYOUT_bfo9000(
  XXXXXXX , KC_ESC                  , KC_F1              , KC_F2              , KC_F3              , KC_F4              , KC_F5         , KC_VOLU          , XXXXXXX ,     XXXXXXX , KC_F12          , KC_F6            , KC_F7              , KC_F8              , KC_F9              , KC_F10                , KC_F11              , XXXXXXX,
  XXXXXXX , KC_GRV                  , KC_1               , KC_2               , KC_3               , KC_4               , KC_5          , KC_VOLD          , XXXXXXX ,     XXXXXXX , XXXXXXX         , KC_6             , KC_7               , KC_8               , KC_9               , KC_0                  , KC_EQL              , XXXXXXX,
  XXXXXXX , KC_TAB                  , KC_Q               , KC_W               , KC_E               , KC_R               , KC_T          , KC_GRV           , XXXXXXX ,     XXXXXXX , KC_EQL          , KC_Y             , KC_U               , KC_I               , KC_O               , KC_P                  , KC_MINS             , XXXXXXX,
  XXXXXXX , MT(MOD_LGUI, KC_ESCAPE) , MT(MOD_LCTL, KC_A) , MT(MOD_LALT, KC_S) , MT(MOD_LGUI, KC_D) , MT(MOD_LSFT, KC_F) , KC_G          , KC_BSPC          , XXXXXXX ,     KC_BSPC , KC_DEL          , KC_H             , MT(MOD_LSFT, KC_J) , MT(MOD_RGUI, KC_K) , MT(MOD_LALT, KC_L) , MT(MOD_RCTL, KC_SCLN) , KC_QUOTE            , XXXXXXX,
  XXXXXXX , LT(_MEDIA, KC_F13)      , ALL_T(KC_Z)        , KC_X               , KC_C               , KC_V               , KC_B          , KC_LBRC          , XXXXXXX ,     KC_DEL  , KC_RBRC         , KC_N             , KC_M               , KC_COMM            , KC_DOT             , ALL_T(KC_SLASH)       , LT(_MEDIA, KC_BSLS) , XXXXXXX,
  XXXXXXX , XXXXXXX                 , XXXXXXX            , KC_LCTL            , KC_LALT            , KC_LGUI            , OSM(MOD_LSFT) , LT(_NAV, KC_TAB) , U_ARW   ,     XXXXXXX , LT(_FN, KC_ENT) , LT(_SYM, KC_SPC) , OSM(MOD_LCTL)      , KC_LBRC            , KC_RBRC            , XXXXXXX               , XXXXXXX             , XXXXXXX
),

//    ┌─────┬─────┬──────┬──────┬──────┬──────┬─────┬─────┬─────┐   ┌─────┬─────┬──────┬──────┬──────┬──────┬─────┬─────┬─────┐
//    │     │     │      │      │      │      │     │     │     │   │     │     │      │      │      │      │     │     │     │
//    ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤
//    │     │     │      │      │      │      │     │     │     │   │     │     │      │      │      │      │     │     │     │
//    ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤
//    │     │     │      │      │      │      │     │     │     │   │     │     │ home │ pgdn │ pgup │ end  │     │     │     │
//    ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤
//    │     │     │ lctl │ lalt │ lgui │ lsft │     │     │     │   │     │     │ left │ down │  up  │ rght │     │     │     │
//    ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤
//    │     │     │      │      │      │      │     │     │     │   │     │     │      │      │      │      │     │     │     │
//    ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┼─────┤
//    │     │     │      │      │      │      │     │     │     │   │     │     │      │      │      │      │     │     │     │
//    └─────┴─────┴──────┴──────┴──────┴──────┴─────┴─────┴─────┘   └─────┴─────┴──────┴──────┴──────┴──────┴─────┴─────┴─────┘
[_NAV] = LAYOUT_bfo9000(
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_HOME , KC_PGDN , KC_PGUP , KC_END   , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_LCTL , KC_LALT , KC_LGUI , KC_LSFT , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS
),

//    ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬──────┬──────┬──────┬──────┬─────┬─────┐
//    │     │     │     │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │     │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │     │  <  │  {  │  }  │  >  │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │ spc │  =  │  (  │  )  │  !  │     │     │   │     │     │     │ lsft │ lgui │ lOPT │ lctl │     │     │
//    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │     │  ^  │  [  │  ]  │  $  │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │     │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴──────┴──────┴──────┴──────┴─────┴─────┘
[_SYM] = LAYOUT_bfo9000(
  KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS  , KC_LT   , KC_LCBR , KC_RCBR , KC_GT   , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_SPACE , KC_EQL  , KC_LPRN , KC_RPRN , KC_EXLM , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_LSFT , KC_LCMD , KC_LOPT , KC_LCTL , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS  , KC_CIRC , KC_LBRC , KC_RBRC , KC_DLR  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
),

//    ┌─────┬─────┬──────┬─────┬─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬──────┬──────┬──────┬──────┬─────┬─────┐
//    │     │     │      │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼──────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │      │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼──────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │ ins  │ f9  │ f8  │ f7  │ f12 │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼──────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │ app  │ f6  │ f5  │ f4  │ f11 │     │     │   │     │     │     │ lsft │ lgui │ lOPT │ lctl │     │     │
//    ├─────┼─────┼──────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │ pscr │ f3  │ f2  │ f1  │ f10 │     │     │   │     │     │     │      │      │      │      │     │     │
//    ├─────┼─────┼──────┼─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼──────┼──────┼──────┼──────┼─────┼─────┤
//    │     │     │      │     │     │     │     │     │     │   │     │     │     │      │      │      │      │     │     │
//    └─────┴─────┴──────┴─────┴─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴──────┴──────┴──────┴──────┴─────┴─────┘
[_FN] = LAYOUT_bfo9000(
  KC_TRNS , KC_TRNS , KC_TRNS        , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS        , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_INSERT      , KC_F9   , KC_F8   , KC_F7   , KC_F12  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_APPLICATION , KC_F6   , KC_F5   , KC_F4   , KC_F11  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_LSFT , KC_LCMD , KC_LOPT , KC_LCTL , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_PSCR        , KC_F3   , KC_F2   , KC_F1   , KC_F10  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS        , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
),

//    ┌─────┬─────┬─────┬──────┬──────┬──────┬─────┬─────┬─────────┐   ┌─────────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
//    │     │     │     │      │      │      │     │     │ QK_BOOT │   │ QK_BOOT │     │     │     │     │     │     │     │     │
//    ├─────┼─────┼─────┼──────┼──────┼──────┼─────┼─────┼─────────┤   ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │     │     │      │      │      │     │     │         │   │         │     │     │     │     │     │     │     │     │
//    ├─────┼─────┼─────┼──────┼──────┼──────┼─────┼─────┼─────────┤   ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │     │     │ mute │ volu │ vold │     │     │         │   │         │     │     │     │     │     │     │     │     │
//    ├─────┼─────┼─────┼──────┼──────┼──────┼─────┼─────┼─────────┤   ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │     │     │ mprv │ mply │ mnxt │     │     │         │   │         │     │     │     │     │     │     │     │     │
//    ├─────┼─────┼─────┼──────┼──────┼──────┼─────┼─────┼─────────┤   ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │     │     │      │      │      │     │     │         │   │         │     │     │     │     │     │     │     │     │
//    ├─────┼─────┼─────┼──────┼──────┼──────┼─────┼─────┼─────────┤   ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │     │     │      │      │      │     │     │         │   │         │     │     │     │     │     │     │     │     │
//    └─────┴─────┴─────┴──────┴──────┴──────┴─────┴─────┴─────────┘   └─────────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
[_MEDIA] = LAYOUT_bfo9000(
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS             , KC_TRNS             , KC_TRNS             , KC_TRNS , KC_TRNS , QK_BOOT ,     QK_BOOT , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS             , KC_TRNS             , KC_TRNS             , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_AUDIO_MUTE       , KC_AUDIO_VOL_UP     , KC_AUDIO_VOL_DOWN   , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_MEDIA_PREV_TRACK , KC_MEDIA_PLAY_PAUSE , KC_MEDIA_NEXT_TRACK , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS             , KC_TRNS             , KC_TRNS             , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
  KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS             , KC_TRNS             , KC_TRNS             , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
)
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_bfo9000(
'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_COMMA, KC_DOT, COMBO_END};

#define COMBO_COUNT 4
combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSPC),
    COMBO(combo1, KC_DELETE),
    COMBO(combo2, KC_LBRC),
    COMBO(combo3, KC_RBRC),
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT,   KC_GRAVE):
        case LT(_NAV, KC_TAB):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case U_ARW:
            if (record->event.pressed) {
                SEND_STRING("=>");
            }
            break;
    }

    return true;
}
