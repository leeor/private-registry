
module Filled = {
  [@bs.module "@material-ui/icons/Minimize"][@react.component]
  external make: (
    ~className: string=?,
    ~color: [@bs.string] [
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "primary"] `Primary
        | [@bs.as "secondary"] `Secondary
        | [@bs.as "action"] `Action
        | [@bs.as "error"] `Error
        | [@bs.as "disabled"] `Disabled
      ]=?,
    ~fontSize: [@bs.string] [
        | [@bs.as "default"] `Default
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "small"] `Small
        | [@bs.as "large"] `Large
      ]=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
  ) => React.element = "default";
};

module Outlined = {
  [@bs.module "@material-ui/icons/MinimizeOutlined"][@react.component]
  external make: (
    ~className: string=?,
    ~color: [@bs.string] [
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "primary"] `Primary
        | [@bs.as "secondary"] `Secondary
        | [@bs.as "action"] `Action
        | [@bs.as "error"] `Error
        | [@bs.as "disabled"] `Disabled
      ]=?,
    ~fontSize: [@bs.string] [
        | [@bs.as "default"] `Default
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "small"] `Small
        | [@bs.as "large"] `Large
      ]=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
  ) => React.element = "default";
};

module Rounded = {
  [@bs.module "@material-ui/icons/MinimizeRounded"][@react.component]
  external make: (
    ~className: string=?,
    ~color: [@bs.string] [
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "primary"] `Primary
        | [@bs.as "secondary"] `Secondary
        | [@bs.as "action"] `Action
        | [@bs.as "error"] `Error
        | [@bs.as "disabled"] `Disabled
      ]=?,
    ~fontSize: [@bs.string] [
        | [@bs.as "default"] `Default
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "small"] `Small
        | [@bs.as "large"] `Large
      ]=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
  ) => React.element = "default";
};

module Sharp = {
  [@bs.module "@material-ui/icons/MinimizeSharp"][@react.component]
  external make: (
    ~className: string=?,
    ~color: [@bs.string] [
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "primary"] `Primary
        | [@bs.as "secondary"] `Secondary
        | [@bs.as "action"] `Action
        | [@bs.as "error"] `Error
        | [@bs.as "disabled"] `Disabled
      ]=?,
    ~fontSize: [@bs.string] [
        | [@bs.as "default"] `Default
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "small"] `Small
        | [@bs.as "large"] `Large
      ]=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
  ) => React.element = "default";
};

module TwoTone = {
  [@bs.module "@material-ui/icons/MinimizeTwoTone"][@react.component]
  external make: (
    ~className: string=?,
    ~color: [@bs.string] [
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "primary"] `Primary
        | [@bs.as "secondary"] `Secondary
        | [@bs.as "action"] `Action
        | [@bs.as "error"] `Error
        | [@bs.as "disabled"] `Disabled
      ]=?,
    ~fontSize: [@bs.string] [
        | [@bs.as "default"] `Default
        | [@bs.as "inherit"] `Inherit
        | [@bs.as "small"] `Small
        | [@bs.as "large"] `Large
      ]=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
  ) => React.element = "default";
};
