
module Filled = {
  [@bs.module "@material-ui/icons/Grade"][@react.component]
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
  [@bs.module "@material-ui/icons/GradeOutlined"][@react.component]
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
  [@bs.module "@material-ui/icons/GradeRounded"][@react.component]
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
  [@bs.module "@material-ui/icons/GradeSharp"][@react.component]
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
  [@bs.module "@material-ui/icons/GradeTwoTone"][@react.component]
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
